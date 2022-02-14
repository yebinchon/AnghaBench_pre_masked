
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_int_t ;
typedef int name ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(char VAR_0, u_char *VAR_1)
{
    u_char *VAR_2, VAR_3;
    static u_char VAR_4[] = "xindex=";

    VAR_4[0] = (u_char) VAR_0;

    for ( ;; ) {
        VAR_2 = (u_char *) FUNC_1(VAR_1, VAR_4);
        if (VAR_2 == ((void*)0)) {
            return 0;
        }

        if (VAR_2 != VAR_1) {
            VAR_3 = *(VAR_2 - 1);
            if (VAR_3 != '?' && VAR_3 != '&') {
                VAR_1 = VAR_2 + 1;
                continue;
            }
        }

        return FUNC_0((char *) VAR_2 + (sizeof(VAR_4) - 1));
    }
}
