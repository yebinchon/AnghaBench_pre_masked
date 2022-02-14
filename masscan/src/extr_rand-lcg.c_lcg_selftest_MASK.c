
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (int,int,int,int) ;
 int VAR_0 ;

int
FUNC_3(void)
{
    unsigned VAR_1;
    int VAR_2 = 0;
    uint64_t VAR_3, VAR_4, VAR_5;


    VAR_3 = 3015 * 3;

    for (VAR_1=0; VAR_1<5; VAR_1++) {
        VAR_4 = 0;
        VAR_5 = 0;

        VAR_3 += 10 + VAR_1;

        FUNC_1(VAR_3, &VAR_4, &VAR_5, 0);

        VAR_2 = FUNC_2(VAR_4, VAR_5, VAR_3, VAR_3);

        if (!VAR_2) {
            FUNC_0(VAR_0, "LCG: randomization failed\n");
            return 1;
        }
    }

    return 0;
}
