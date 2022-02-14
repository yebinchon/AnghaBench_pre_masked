
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char*,scalar_t__) ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t) ;

sds FUNC_5(sds VAR_0, const char *VAR_1, size_t VAR_2) {
    if (FUNC_2(VAR_0) < VAR_2) {
        VAR_0 = FUNC_1(VAR_0,VAR_2-FUNC_3(VAR_0));
        if (VAR_0 == ((void*)0)) return ((void*)0);
    }
    FUNC_0(VAR_0, VAR_1, VAR_2);
    VAR_0[VAR_2] = '\0';
    FUNC_4(VAR_0, VAR_2);
    return VAR_0;
}
