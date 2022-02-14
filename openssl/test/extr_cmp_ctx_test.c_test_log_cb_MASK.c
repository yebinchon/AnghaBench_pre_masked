
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_CMP_severity ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const char *VAR_4, const char *VAR_5, int VAR_6,
                       OSSL_CMP_severity VAR_7, const char *VAR_8)
{
    VAR_2 =

        (FUNC_0(VAR_4, "execute_cmp_ctx_log_cb_test") == 0
         || FUNC_0(VAR_4, "(unknown function)") == 0) &&

        (FUNC_0(VAR_5, VAR_0) == 0 || FUNC_0(VAR_5, "(no file)") == 0)
        && (VAR_6 == VAR_3 || VAR_6 == 0)
        && (VAR_7 == VAR_1 || VAR_7 == -1)
        && FUNC_0(VAR_8, "ok\n") == 0;
    return 1;
}
