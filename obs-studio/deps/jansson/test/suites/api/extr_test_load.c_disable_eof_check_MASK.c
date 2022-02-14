
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int *) ;

__attribute__((used)) static void FUNC_4()
{
    json_error_t VAR_1;
    json_t *VAR_2;

    const char *VAR_3 = "{\"foo\": 1} garbage";

    if(FUNC_3(VAR_3, 0, &VAR_1))
        FUNC_1("json_loads did not detect garbage after JSON text");
    FUNC_0("end of file expected near 'garbage'", "<string>", 1, 18, 18);

    VAR_2 = FUNC_3(VAR_3, VAR_0, &VAR_1);
    if(!VAR_2)
        FUNC_1("json_loads failed with JSON_DISABLE_EOF_CHECK");

    FUNC_2(VAR_2);
}
