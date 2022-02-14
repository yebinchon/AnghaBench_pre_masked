
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCREDENTIALA ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int,int,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_4;
    PCREDENTIALA VAR_5;

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(VAR_3, -1, 0, &VAR_5);
    FUNC_2(!VAR_4 && FUNC_0() == VAR_2,
        "CredReadA should have failed with ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(VAR_3, VAR_0, 0xdeadbeef, &VAR_5);
    FUNC_2(!VAR_4 && ( FUNC_0() == VAR_1 || FUNC_0() == VAR_2 ),
        "CredReadA should have failed with ERROR_INVALID_FLAGS or ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(((void*)0), VAR_0, 0, &VAR_5);
    FUNC_2(!VAR_4 && FUNC_0() == VAR_2,
        "CredReadA should have failed with ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());
}
