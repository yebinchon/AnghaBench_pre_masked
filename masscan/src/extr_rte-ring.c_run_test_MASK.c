
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct Test {unsigned int const producer_started; unsigned int const producer_done; int not_active; int total_count; int consumer_done; int ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Test*,int ,int) ;
 int FUNC_1 (int ,int ,struct Test*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t
FUNC_4(struct Test *VAR_4)
{
    unsigned VAR_5;
    const unsigned VAR_6 = 1;

    FUNC_0(VAR_4, 0, sizeof(*VAR_4));
    VAR_4->ring = FUNC_3(16, VAR_1|VAR_0);


    for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
        FUNC_1(VAR_3, 0, VAR_4);
    }


    while (VAR_4->producer_started < VAR_6)
        FUNC_2(10);

    FUNC_1(VAR_2, 0, VAR_4);


    while (VAR_4->producer_done < VAR_6)
        FUNC_2(10);



    VAR_4->not_active = 1;



    while (!VAR_4->consumer_done)
        FUNC_2(10);

    return VAR_4->total_count;
}
