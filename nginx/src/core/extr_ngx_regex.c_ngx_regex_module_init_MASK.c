
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int name; TYPE_1__* regex; } ;
typedef TYPE_2__ ngx_regex_elt_t ;
struct TYPE_12__ {scalar_t__ pcre_jit; } ;
typedef TYPE_3__ ngx_regex_conf_t ;
struct TYPE_13__ {TYPE_9__* data; int handler; } ;
typedef TYPE_4__ ngx_pool_cleanup_t ;
struct TYPE_14__ {size_t nelts; TYPE_2__* elts; struct TYPE_14__* next; } ;
typedef TYPE_5__ ngx_list_part_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int log; int pool; int conf_ctx; } ;
typedef TYPE_6__ ngx_cycle_t ;
struct TYPE_16__ {TYPE_5__ part; } ;
struct TYPE_10__ {int extra; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,char const*,...) ;
 int VAR_6 ;
 TYPE_9__* VAR_7 ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (int ,int,char const**) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_cycle_t *VAR_9)
{
    int VAR_10;
    const char *VAR_11;
    ngx_uint_t VAR_12;
    ngx_list_part_t *VAR_13;
    ngx_regex_elt_t *VAR_14;

    VAR_10 = 0;
    FUNC_4(VAR_9->pool);

    VAR_13 = &VAR_7->part;
    VAR_14 = VAR_13->elts;

    for (VAR_12 = 0; ; VAR_12++) {

        if (VAR_12 >= VAR_13->nelts) {
            if (VAR_13->next == ((void*)0)) {
                break;
            }

            VAR_13 = VAR_13->next;
            VAR_14 = VAR_13->elts;
            VAR_12 = 0;
        }

        VAR_14[VAR_12].regex->extra = FUNC_6(VAR_14[VAR_12].regex->code, VAR_10, &VAR_11);

        if (VAR_11 != ((void*)0)) {
            FUNC_1(VAR_1, VAR_9->log, 0,
                          "pcre_study() failed: %s in \"%s\"",
                          VAR_11, VAR_14[VAR_12].name);
        }
    }

    FUNC_3();

    VAR_7 = ((void*)0);

    return VAR_3;
}
