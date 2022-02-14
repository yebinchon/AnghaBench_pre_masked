
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wine_test {char* name; char* exename; } ;
typedef int LPTSTR ;
typedef int FILE ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ,int,int *) ;
 int FUNC_5 (int ,char*,char*,...) ;
 char* FUNC_6 (int *,char*,char const*,char*) ;
 char* FUNC_7 (char*,int ) ;
 int VAR_3 ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (struct wine_test *VAR_4, const char *VAR_5, LPTSTR VAR_6)
{
    BYTE* VAR_7;
    DWORD VAR_8;
    FILE* VAR_9;
    char *VAR_10;

    VAR_7 = FUNC_1 (VAR_6, VAR_2, &VAR_8);
    if (!VAR_7) FUNC_5 (VAR_0, "Can't find test resource %s: %d",
                       VAR_6, FUNC_0 ());
    VAR_4->name = FUNC_9( VAR_6 );
    VAR_4->exename = FUNC_6 (((void*)0), "%s/%s", VAR_5, VAR_4->name);
    VAR_10 = FUNC_7 (VAR_4->name, VAR_3);
    if (!VAR_10) FUNC_5 (VAR_0, "Not an .exe file: %s", VAR_4->name);
    *VAR_10 = 0;
    VAR_4->name = FUNC_8 (VAR_4->name, VAR_10 - VAR_4->name + 1);
    FUNC_5 (VAR_1, "Extracting: %s", VAR_4->name);

    if (!(VAR_9 = FUNC_3 (VAR_4->exename, "wb")) ||
        (FUNC_4 (VAR_7, VAR_8, 1, VAR_9) != 1) ||
        FUNC_2 (VAR_9)) FUNC_5 (VAR_0, "Failed to write file %s.",
                               VAR_4->exename);
}
