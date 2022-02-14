
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_uint_t ;



__attribute__((used)) static char *
FUNC_0(ngx_uint_t VAR_0, ngx_uint_t VAR_1, ngx_uint_t VAR_2) {
    switch (VAR_0) {
        case 1:
            return "Main";
        case 2:
            if (VAR_2) {
                return "HEv2";
            }
            if (VAR_1) {
                return "HE";
            }
            return "LC";
        case 3:
            return "SSR";
        case 4:
            return "LTP";
        case 5:
            return "SBR";
        default:
            return "";
    }
}
