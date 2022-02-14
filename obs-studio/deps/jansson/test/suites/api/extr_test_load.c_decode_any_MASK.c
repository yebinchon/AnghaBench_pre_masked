
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,int *) ;

__attribute__((used)) static void FUNC_7()
{
    json_t *VAR_1;
    json_error_t VAR_2;

    VAR_1 = FUNC_6("\"foo\"", VAR_0, &VAR_2);
    if (!VAR_1 || !FUNC_4(VAR_1))
        FUNC_0("json_load decoded any failed - string");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_6("42", VAR_0, &VAR_2);
    if (!VAR_1 || !FUNC_2(VAR_1))
        FUNC_0("json_load decoded any failed - integer");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_6("true", VAR_0, &VAR_2);
    if (!VAR_1 || !FUNC_5(VAR_1))
        FUNC_0("json_load decoded any failed - boolean");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_6("null", VAR_0, &VAR_2);
    if (!VAR_1 || !FUNC_3(VAR_1))
        FUNC_0("json_load decoded any failed - null");
    FUNC_1(VAR_1);
}
