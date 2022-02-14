
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ push_preload; int * pushes; scalar_t__ push; int chunk_size; } ;
typedef TYPE_1__ ngx_http_v2_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_v2_loc_conf_t *VAR_4 = VAR_2;
    ngx_http_v2_loc_conf_t *VAR_5 = VAR_3;

    FUNC_0(VAR_5->chunk_size, VAR_4->chunk_size, 8 * 1024);

    FUNC_1(VAR_5->push, VAR_4->push, 1);

    if (VAR_5->push && VAR_5->pushes == ((void*)0)) {
        VAR_5->pushes = VAR_4->pushes;
    }

    FUNC_1(VAR_5->push_preload, VAR_4->push_preload, 0);

    return VAR_0;
}
