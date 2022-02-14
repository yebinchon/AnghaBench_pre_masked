
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char const*,int ) ;

int FUNC_2(char *VAR_0, size_t VAR_1, const char *VAR_2, va_list VAR_3) {
    int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

    if (FUNC_0((size_t) VAR_4 > VAR_1)) {

        VAR_4 = (int)VAR_1;
    }

    VAR_0[VAR_4] = '\0';
    return VAR_4;
}
