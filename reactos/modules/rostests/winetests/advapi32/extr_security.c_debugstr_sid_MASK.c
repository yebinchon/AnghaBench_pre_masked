
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PSID ;
typedef char* LPSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 int FUNC_3 (int) ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static const char* FUNC_8(PSID VAR_3)
{
    LPSTR VAR_4;
    DWORD VAR_5 = FUNC_1();
    char* VAR_6 = VAR_2[VAR_1];
    VAR_1 = (VAR_1 + 1) % VAR_0;

    if (!FUNC_0(VAR_3, &VAR_4))
        FUNC_5(VAR_6, "ConvertSidToStringSidA failed le=%u", FUNC_1());
    else if (FUNC_7(VAR_4) > sizeof(*VAR_2) - 1)
    {
        FUNC_4(VAR_6, VAR_4, sizeof(*VAR_2) - 4);
        FUNC_6(VAR_6 + sizeof(*VAR_2) - 4, "...");
        FUNC_2(VAR_4);
    }
    else
    {
        FUNC_6(VAR_6, VAR_4);
        FUNC_2(VAR_4);
    }

    FUNC_3(VAR_5);
    return VAR_6;
}
