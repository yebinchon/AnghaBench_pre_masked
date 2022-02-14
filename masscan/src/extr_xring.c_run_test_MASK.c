
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct Test {unsigned int const producer_started; unsigned int const producer_done; int not_active; int total_count; int consumer_done; } ;


 int FUNC_0 (struct Test*,int ,int) ;
 int FUNC_1 (int ,int ,struct Test*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_3(struct Test *VAR_2)
{
    unsigned VAR_3;
    const unsigned VAR_4 = 1;

    FUNC_0(VAR_2, 0, sizeof(*VAR_2));


    for (VAR_3=0; VAR_3<VAR_4; VAR_3++) {
        FUNC_1(VAR_1, 0, VAR_2);
    }


    while (VAR_2->producer_started < VAR_4)
        FUNC_2(10);

    FUNC_1(VAR_0, 0, VAR_2);


    while (VAR_2->producer_done < VAR_4)
        FUNC_2(10);



    VAR_2->not_active = 1;



    while (!VAR_2->consumer_done)
        FUNC_2(10);

    return VAR_2->total_count;
}
