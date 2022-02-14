
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8()
{


    json_t *VAR_1;
    char *VAR_2;

    VAR_1 = FUNC_4();
    FUNC_5(VAR_1, "url", FUNC_6("https://github.com/akheron/jansson"));

    VAR_2 = FUNC_3(VAR_1, 0);
    if(!VAR_2 || FUNC_7(VAR_2, "{\"url\": \"https://github.com/akheron/jansson\"}"))
        FUNC_0("json_dumps failed to not escape slashes");

    FUNC_1(VAR_2);

    VAR_2 = FUNC_3(VAR_1, VAR_0);
    if(!VAR_2 || FUNC_7(VAR_2, "{\"url\": \"https:\\/\\/github.com\\/akheron\\/jansson\"}"))
        FUNC_0("json_dumps failed to escape slashes");

    FUNC_1(VAR_2);
    FUNC_2(VAR_1);
}
