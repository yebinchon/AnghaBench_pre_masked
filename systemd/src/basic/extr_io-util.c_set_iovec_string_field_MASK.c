
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;


 struct iovec FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*) ;

char* FUNC_2(struct iovec *VAR_0, size_t *VAR_1, const char *VAR_2, const char *VAR_3) {
        char *VAR_4;

        VAR_4 = FUNC_1(VAR_2, VAR_3);
        if (VAR_4)
                VAR_0[(*VAR_1)++] = FUNC_0(VAR_4);
        return VAR_4;
}
