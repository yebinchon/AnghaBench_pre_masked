
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int ngx_int_t ;
typedef scalar_t__ in_port_t ;


 int FUNC_0 (scalar_t__*,size_t) ;

__attribute__((used)) static u_char *
FUNC_1(u_char *VAR_0, u_char *VAR_1, in_port_t *VAR_2,
    u_char VAR_3)
{
    size_t VAR_4;
    u_char *VAR_5;
    ngx_int_t VAR_6;

    VAR_5 = VAR_0;

    for ( ;; ) {
        if (VAR_0 == VAR_1) {
            return ((void*)0);
        }

        if (*VAR_0++ == VAR_3) {
            break;
        }
    }

    VAR_4 = VAR_0 - VAR_5 - 1;

    VAR_6 = FUNC_0(VAR_5, VAR_4);
    if (VAR_6 < 0 || VAR_6 > 65535) {
        return ((void*)0);
    }

    *VAR_2 = (in_port_t) VAR_6;

    return VAR_0;
}
