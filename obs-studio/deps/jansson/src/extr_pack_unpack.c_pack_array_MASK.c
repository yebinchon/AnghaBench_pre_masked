
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int scanner_t ;
typedef int json_t ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,char*) ;
 char FUNC_6 (int *) ;

__attribute__((used)) static json_t *FUNC_7(scanner_t *VAR_0, va_list *VAR_1)
{
    json_t *VAR_2 = FUNC_0();
    FUNC_3(VAR_0);

    while(FUNC_6(VAR_0) != ']') {
        json_t *VAR_3;

        if(!FUNC_6(VAR_0)) {
            FUNC_5(VAR_0, "<format>", "Unexpected end of format string");
            goto error;
        }

        VAR_3 = FUNC_4(VAR_0, VAR_1);
        if(!VAR_3)
            goto error;

        if(FUNC_1(VAR_2, VAR_3)) {
            FUNC_5(VAR_0, "<internal>", "Unable to append to array");
            goto error;
        }

        FUNC_3(VAR_0);
    }
    return VAR_2;

error:
    FUNC_2(VAR_2);
    return ((void*)0);
}
