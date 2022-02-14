
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    size_t *VAR_5 = VAR_4;

    if (*VAR_5 <= 2 * VAR_1) {
        return "value is too small";
    }

    return VAR_0;
}
