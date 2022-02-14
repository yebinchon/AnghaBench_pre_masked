
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int RAND_DRBG ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int *,int *,int *,int,int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_8(RAND_DRBG *VAR_0,
                                       RAND_DRBG *VAR_1,
                                       RAND_DRBG *VAR_2)
{
    pid_t VAR_3;
    int VAR_4=0;

    VAR_3 = FUNC_4();
    if (!FUNC_1(VAR_3, 0))
        return 0;

    if (VAR_3 > 0) {

        return FUNC_0(FUNC_7(VAR_3, &VAR_4, 0), VAR_3) && FUNC_0(VAR_4, 0);
    }


    if (!FUNC_2(FUNC_5(1, VAR_0, VAR_1, VAR_2, 1, 1, 1, 0)))
        VAR_4 = 1;


    FUNC_6(VAR_0);
    FUNC_6(VAR_1);
    FUNC_6(VAR_2);
    FUNC_3(VAR_4);
}
