
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (char const*,int ,int *) ;

__attribute__((used)) static void FUNC_4()
{
    json_t *VAR_0, *VAR_1;

    const char *VAR_2 =
"{"
"    \"integer\": 1, "
"    \"real\": 3.141592, "
"    \"string\": \"foobar\", "
"    \"true\": true, "
"    \"object\": {"
"        \"array-in-object\": [1,true,\"foo\",{}],"
"        \"object-in-object\": {\"foo\": \"bar\"}"
"    },"
"    \"array\": [\"foo\", false, null, 1.234]"
"}";

    VAR_0 = FUNC_3(VAR_2, 0, ((void*)0));
    VAR_1 = FUNC_3(VAR_2, 0, ((void*)0));
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to parse JSON");
    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal strings");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);


}
