
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int hugebuf ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char**,size_t*,size_t*,int*,char const*,int ) ;

int FUNC_3(BIO *VAR_0, const char *VAR_1, va_list VAR_2)
{
    int VAR_3;
    size_t VAR_4;
    char VAR_5[1024 * 2];


    char *VAR_6 = VAR_5;
    size_t VAR_7 = sizeof(VAR_5);
    char *VAR_8 = ((void*)0);
    int VAR_9;

    VAR_8 = ((void*)0);
    if (!FUNC_2(&VAR_6, &VAR_8, &VAR_7, &VAR_4, &VAR_9, VAR_1,
                VAR_2)) {
        FUNC_1(VAR_8);
        return -1;
    }
    if (VAR_8) {
        VAR_3 = FUNC_0(VAR_0, VAR_8, (int)VAR_4);
        FUNC_1(VAR_8);
    } else {
        VAR_3 = FUNC_0(VAR_0, VAR_5, (int)VAR_4);
    }
    return VAR_3;
}
