
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int*,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*,scalar_t__,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_5;
    DWORD VAR_6, VAR_7;

    VAR_6 = (DWORD)sizeof(DWORD);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_0(VAR_3, VAR_2, (BYTE*)&VAR_7, &VAR_6, 0);
    if (!VAR_5 && FUNC_1() == VAR_0)
    {
        FUNC_4("PP_SIG_KEYSIZE_INC is not supported (win9x or NT)\n");
        VAR_4++;
    }
    else
        FUNC_3(VAR_5 && VAR_7==8, "%08x, %d\n", FUNC_1(), VAR_7);

    VAR_6 = (DWORD)sizeof(DWORD);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_0(VAR_3, VAR_1, (BYTE*)&VAR_7, &VAR_6, 0);
    if (!VAR_5 && FUNC_1() == VAR_0)
        FUNC_4("PP_KEYX_KEYSIZE_INC is not supported (win9x or NT)\n");
    else
        FUNC_3(VAR_5 && VAR_7==8, "%08x, %d\n", FUNC_1(), VAR_7);
}
