
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const**) ;
 int FUNC_3 (int ,char*,char const*,int ) ;
 int FUNC_4 (char const*,int ,char const*,int ) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1)
{
    char VAR_2[VAR_0];
    const char *VAR_3, *VAR_4;
    DWORD VAR_5, VAR_6;

    VAR_5 = FUNC_2(VAR_1, &VAR_3);
    if(!VAR_5) {
        FUNC_3(0, "Could not map file %s: %u\n", VAR_1, FUNC_0());
        return;
    }

    FUNC_5(VAR_2, "%s.exp", VAR_1);
    VAR_6 = FUNC_2(VAR_2, &VAR_4);
    if(!VAR_6) {
        FUNC_3(0, "Could not map file %s: %u\n", VAR_2, FUNC_0());
        FUNC_1(VAR_3);
        return;
    }

    FUNC_4(VAR_3, VAR_5, VAR_4, VAR_6);

    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
}
