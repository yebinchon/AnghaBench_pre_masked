
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ,int *) ;

__attribute__((used)) static void FUNC_3()
{
    json_error_t VAR_1;

    if(FUNC_2("{\"foo\": 1, \"foo\": 2}", VAR_0, &VAR_1))
        FUNC_1("json_loads did not detect a duplicate key");
    FUNC_0("duplicate object key near '\"foo\"'", "<string>", 1, 16, 16);
}
