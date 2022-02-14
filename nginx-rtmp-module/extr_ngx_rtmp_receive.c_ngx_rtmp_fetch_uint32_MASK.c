
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_chain_t **VAR_1, uint32_t *VAR_2, ngx_int_t VAR_3)
{
    u_char *VAR_4 = (u_char *) VAR_2;
    ngx_int_t VAR_5;

    *VAR_2 = 0;

    while (--VAR_3 >= 0) {
        VAR_5 = FUNC_0(VAR_1, &VAR_4[VAR_3]);
        if (VAR_5 != VAR_0) {
            return VAR_5;
        }
    }

    return VAR_0;
}
