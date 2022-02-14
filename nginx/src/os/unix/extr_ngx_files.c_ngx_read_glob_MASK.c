
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {size_t len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__* gl_pathv; scalar_t__ gl_matchc; scalar_t__ gl_pathc; } ;
struct TYPE_8__ {size_t n; TYPE_1__ pglob; } ;
typedef TYPE_3__ ngx_glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

ngx_int_t
FUNC_1(ngx_glob_t *VAR_2, ngx_str_t *VAR_3)
{
    size_t VAR_4;




    VAR_4 = (size_t) VAR_2->pglob.gl_matchc;


    if (VAR_2->n < VAR_4) {

        VAR_3->len = (size_t) FUNC_0(VAR_2->pglob.gl_pathv[VAR_2->n]);
        VAR_3->data = (u_char *) VAR_2->pglob.gl_pathv[VAR_2->n];
        VAR_2->n++;

        return VAR_1;
    }

    return VAR_0;
}
