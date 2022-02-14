
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5()
{
    json_t *VAR_0;
    int VAR_1;

    VAR_1 = FUNC_2(((void*)0), "", 0);
    if (VAR_1 != -1)
        FUNC_0("json_dump_file succeeded with invalid args");

    VAR_0 = FUNC_3();
    VAR_1 = FUNC_2(VAR_0, "json_dump_file.json", 0);
    if (VAR_1 != 0)
        FUNC_0("json_dump_file failed");

    FUNC_1(VAR_0);
    FUNC_4("json_dump_file.json");
}
