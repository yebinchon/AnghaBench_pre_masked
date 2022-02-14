
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_error_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_5()
{
    json_t *VAR_0;
    json_error_t VAR_1;

    VAR_0 = FUNC_4(((void*)0), 0, &VAR_1);
    if (VAR_0)
        FUNC_0("json_loads should return NULL if the first argument is NULL");

    VAR_0 = FUNC_2(((void*)0), 0, 0, &VAR_1);
    if (VAR_0)
        FUNC_0("json_loadb should return NULL if the first argument is NULL");

    VAR_0 = FUNC_3(((void*)0), 0, &VAR_1);
    if (VAR_0)
        FUNC_0("json_loadf should return NULL if the first argument is NULL");

    VAR_0 = FUNC_1(((void*)0), 0, &VAR_1);
    if (VAR_0)
        FUNC_0("json_loadf should return NULL if the first argument is NULL");
}
