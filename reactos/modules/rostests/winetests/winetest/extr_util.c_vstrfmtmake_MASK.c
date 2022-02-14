
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,size_t,char const*,int ) ;

__attribute__((used)) static char *FUNC_4 (size_t *VAR_0, const char *VAR_1, va_list VAR_2)
{
    size_t VAR_3 = 1000;
    char *VAR_4, *VAR_5;
    int VAR_6;

    VAR_4 = FUNC_1 (VAR_3);
    if (!VAR_4) return ((void*)0);
    while (1) {
        VAR_6 = FUNC_3 (VAR_4, VAR_3, VAR_1, VAR_2);
        if (VAR_6 < 0) VAR_3 *= 2;
        else if ((unsigned)VAR_6 >= VAR_3) VAR_3 = VAR_6+1;
        else break;
        VAR_5 = FUNC_2 (VAR_4, VAR_3);
        if (!VAR_5) {
          FUNC_0 (VAR_4);
          return ((void*)0);
       }
       VAR_4 = VAR_5;
    }
    if (VAR_0) *VAR_0 = VAR_6;
    return VAR_4;
}
