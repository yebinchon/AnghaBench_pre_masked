
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nelts; int elts; } ;
struct TYPE_9__ {TYPE_1__ keys; } ;
struct TYPE_10__ {TYPE_2__ commands; int hash; } ;
typedef TYPE_3__ ngx_http_ssi_main_conf_t ;
struct TYPE_11__ {int max_size; char* name; int * temp_pool; int pool; int bucket_size; int key; int * hash; } ;
typedef TYPE_4__ ngx_hash_init_t ;
struct TYPE_12__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_5, void *VAR_6)
{
    ngx_http_ssi_main_conf_t *VAR_7 = VAR_6;

    ngx_hash_init_t VAR_8;

    VAR_8.hash = &VAR_7->hash;
    VAR_8.key = VAR_4;
    VAR_8.max_size = 1024;
    VAR_8.bucket_size = VAR_3;
    VAR_8.name = "ssi_command_hash";
    VAR_8.pool = VAR_5->pool;
    VAR_8.temp_pool = ((void*)0);

    if (FUNC_0(&VAR_8, VAR_7->commands.keys.elts,
                      VAR_7->commands.keys.nelts)
        != VAR_2)
    {
        return VAR_0;
    }

    return VAR_1;
}
