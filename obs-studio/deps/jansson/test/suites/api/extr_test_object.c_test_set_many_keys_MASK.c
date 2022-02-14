
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 (char*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6()
{
    json_t *VAR_0, *VAR_1;
    const char *VAR_2 = "abcdefghijklmnopqrstuvwxyz";
    char VAR_3[2];
    size_t VAR_4;

    VAR_0 = FUNC_2();
    if (!VAR_0)
        FUNC_0("unable to create object");

    VAR_1 = FUNC_4("a");
    if (!VAR_1)
        FUNC_0("unable to create string");

    VAR_3[1] = '\0';
    for (VAR_4 = 0; VAR_4 < FUNC_5(VAR_2); VAR_4++) {
        VAR_3[0] = VAR_2[VAR_4];
        if (FUNC_3(VAR_0, VAR_3, VAR_1))
            FUNC_0("unable to set object key");
    }

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
}
