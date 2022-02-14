
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef int ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *,int ,char*,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_log_t *VAR_13, ngx_err_t VAR_14, ngx_int_t VAR_15,
    char *VAR_16, u_char *VAR_17)
{
    ngx_int_t VAR_18;
    ngx_uint_t VAR_19;

    if (VAR_14 == VAR_3 || VAR_14 == VAR_5 || VAR_14 == VAR_2) {
        VAR_19 = VAR_12;
        VAR_18 = VAR_15;

    } else if (VAR_14 == VAR_0 || VAR_14 == VAR_6) {
        VAR_19 = VAR_12;
        VAR_18 = VAR_7;

    } else if (VAR_14 == VAR_1) {
        VAR_19 = VAR_12;
        VAR_18 = VAR_10;

    } else if (VAR_14 == VAR_4) {
        VAR_19 = VAR_11;
        VAR_18 = VAR_8;

    } else {
        VAR_19 = VAR_11;
        VAR_18 = VAR_9;
    }

    FUNC_0(VAR_19, VAR_13, VAR_14, "%s \"%s\" failed", VAR_16, VAR_17);

    return VAR_18;
}
