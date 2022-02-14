
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int buf ;
typedef int RAND_DRBG ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    unsigned char VAR_2[256];
    time_t VAR_3 = FUNC_6(((void*)0));
    RAND_DRBG *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    if (!FUNC_5(VAR_4 = FUNC_1())
            || !FUNC_5(VAR_5 = FUNC_0())) {
        VAR_0 = 0;
        return;
    }
    FUNC_2(VAR_5, 1);
    FUNC_2(VAR_4, 1);

    do {
        if (FUNC_3(VAR_2, sizeof(VAR_2)) <= 0)
            VAR_0 = 0;
        if (FUNC_4(VAR_2, sizeof(VAR_2)) <= 0)
            VAR_1 = 0;
    }
    while(FUNC_6(((void*)0)) - VAR_3 < 5);
}
