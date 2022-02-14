
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int scanner_t ;
typedef int json_t ;


 int * FUNC_0 () ;
 int * FUNC_1 (char*,size_t) ;
 int * FUNC_2 (char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int *,char*,size_t*,int*) ;
 char FUNC_6 (int *) ;

__attribute__((used)) static json_t *FUNC_7(scanner_t *VAR_0, va_list *VAR_1)
{
    char *VAR_2;
    size_t VAR_3;
    int VAR_4;
    int VAR_5;

    FUNC_3(VAR_0);
    VAR_5 = FUNC_6(VAR_0) == '?';
    if (!VAR_5)
        FUNC_4(VAR_0);

    VAR_2 = FUNC_5(VAR_0, VAR_1, "string", &VAR_3, &VAR_4);
    if (!VAR_2) {
        return VAR_5 ? FUNC_0() : ((void*)0);
    } else if (VAR_4) {
        return FUNC_2(VAR_2, VAR_3);
    } else {
        return FUNC_1(VAR_2, VAR_3);
    }
}
