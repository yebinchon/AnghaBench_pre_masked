
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int perslen; int pers; } ;
typedef int TEST_CTX ;
typedef int RAND_DRBG ;
typedef TYPE_1__ DRBG_SELFTEST_DATA ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(RAND_DRBG *VAR_0, DRBG_SELFTEST_DATA *VAR_1,
                       TEST_CTX *VAR_2)
{
    if (!FUNC_1(FUNC_2(VAR_0, VAR_1, VAR_2))
            || !FUNC_1(FUNC_0(VAR_0, VAR_1->pers, VAR_1->perslen)))
        return 0;
    return 1;
}
