
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {scalar_t__ src; scalar_t__ dst; } ;
typedef TYPE_1__ ngx_http_charset_recode_t ;
struct TYPE_10__ {size_t nelts; TYPE_1__* elts; } ;
struct TYPE_8__ {TYPE_6__ recodes; } ;
typedef TYPE_2__ ngx_http_charset_main_conf_t ;
struct TYPE_9__ {scalar_t__ override_charset; scalar_t__ charset; scalar_t__ source_charset; int types; int types_keys; } ;
typedef TYPE_3__ ngx_http_charset_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_7, void *VAR_8, void *VAR_9)
{
    ngx_http_charset_loc_conf_t *VAR_10 = VAR_8;
    ngx_http_charset_loc_conf_t *VAR_11 = VAR_9;

    ngx_uint_t VAR_12;
    ngx_http_charset_recode_t *VAR_13;
    ngx_http_charset_main_conf_t *VAR_14;

    if (FUNC_3(VAR_7, &VAR_11->types_keys, &VAR_11->types,
                             &VAR_10->types_keys, &VAR_10->types,
                             VAR_5)
        != VAR_4)
    {
        return VAR_0;
    }

    FUNC_1(VAR_11->override_charset, VAR_10->override_charset, 0);
    FUNC_1(VAR_11->charset, VAR_10->charset, VAR_2);
    FUNC_1(VAR_11->source_charset, VAR_10->source_charset,
                         VAR_2);

    if (VAR_11->charset == VAR_2
        || VAR_11->source_charset == VAR_2
        || VAR_11->charset == VAR_11->source_charset)
    {
        return VAR_1;
    }

    if (VAR_11->source_charset >= VAR_3
        || VAR_11->charset >= VAR_3)
    {
        return VAR_1;
    }

    VAR_14 = FUNC_2(VAR_7,
                                             VAR_6);
    VAR_13 = VAR_14->recodes.elts;
    for (VAR_12 = 0; VAR_12 < VAR_14->recodes.nelts; VAR_12++) {
        if (VAR_11->source_charset == VAR_13[VAR_12].src
            && VAR_11->charset == VAR_13[VAR_12].dst)
        {
            return VAR_1;
        }
    }

    VAR_13 = FUNC_0(&VAR_14->recodes);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13->src = VAR_11->source_charset;
    VAR_13->dst = VAR_11->charset;

    return VAR_1;
}
