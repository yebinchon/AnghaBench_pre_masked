
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_3(void)
{
    static char VAR_5[128];
    DWORD VAR_6 = FUNC_0(((void*)0));
    if (VAR_6 == VAR_1)
    {
        FUNC_2(VAR_5, "ISMEX_NOSEND,");
        return VAR_5;
    }
    VAR_5[0] = 0;
    if (VAR_6 & VAR_0)
        FUNC_1(VAR_5, "ISMEX_CALLBACK,");
    if (VAR_6 & VAR_2)
        FUNC_1(VAR_5, "ISMEX_NOTIFY,");
    if (VAR_6 & VAR_3)
        FUNC_1(VAR_5, "ISMEX_REPLIED,");
    if (VAR_6 & VAR_4)
        FUNC_1(VAR_5, "ISMEX_SEND,");
    return VAR_5;
}
