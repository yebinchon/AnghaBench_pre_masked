
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wine_test {int name; int exename; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,int *,char const*,int) ;
 char* FUNC_4 (int *,char*,int ,char const*) ;
 int FUNC_5 (char*,int ,char const*,...) ;

__attribute__((used)) static void
FUNC_6 (struct wine_test* VAR_0, const char* VAR_1, const char *VAR_2)
{
    int VAR_3;
    const char* VAR_4 = FUNC_2(VAR_0->name, VAR_1);
    const char* VAR_5 = FUNC_1(VAR_4);
    char *VAR_6 = FUNC_4 (((void*)0), "%s %s", VAR_0->exename, VAR_1);

    FUNC_5 ("%s:%s start %s %s\n", VAR_0->name, VAR_1, VAR_4, VAR_5);
    VAR_3 = FUNC_3 (VAR_6, ((void*)0), VAR_2, 120000);
    FUNC_0 (VAR_6);
    FUNC_5 ("%s:%s done (%d)\n", VAR_0->name, VAR_1, VAR_3);
}
