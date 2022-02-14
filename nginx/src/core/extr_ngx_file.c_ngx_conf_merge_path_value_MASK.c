
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int len; scalar_t__* level; int name; } ;
typedef TYPE_1__ ngx_path_t ;
struct TYPE_12__ {scalar_t__* level; int name; } ;
typedef TYPE_2__ ngx_path_init_t ;
struct TYPE_13__ {int cycle; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

char *
FUNC_3(ngx_conf_t *VAR_4, ngx_path_t **VAR_5, ngx_path_t *VAR_6,
    ngx_path_init_t *VAR_7)
{
    ngx_uint_t VAR_8;

    if (*VAR_5) {
        return VAR_1;
    }

    if (VAR_6) {
        *VAR_5 = VAR_6;
        return VAR_1;
    }

    *VAR_5 = FUNC_2(VAR_4->pool, sizeof(ngx_path_t));
    if (*VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    (*VAR_5)->name = VAR_7->name;

    if (FUNC_1(VAR_4->cycle, &(*VAR_5)->name, 0) != VAR_3) {
        return VAR_0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        (*VAR_5)->level[VAR_8] = VAR_7->level[VAR_8];
        (*VAR_5)->len += VAR_7->level[VAR_8] + (VAR_7->level[VAR_8] ? 1 : 0);
    }

    if (FUNC_0(VAR_4, VAR_5) != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
