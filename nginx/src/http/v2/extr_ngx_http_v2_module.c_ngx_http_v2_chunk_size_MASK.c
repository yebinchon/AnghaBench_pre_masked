
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,char*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    size_t *VAR_7 = VAR_6;

    if (*VAR_7 == 0) {
        FUNC_0(VAR_3, VAR_4, 0,
                           "the http2 chunk size cannot be zero");

        return VAR_0;
    }

    if (*VAR_7 > VAR_2) {
        *VAR_7 = VAR_2;
    }

    return VAR_1;
}
