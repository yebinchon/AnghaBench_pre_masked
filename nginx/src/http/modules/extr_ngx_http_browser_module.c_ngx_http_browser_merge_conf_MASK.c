
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {scalar_t__ skip; unsigned int version; int name; int add; } ;
typedef TYPE_1__ ngx_http_modern_browser_t ;
struct TYPE_8__ {scalar_t__ modern_unlisted_browsers; scalar_t__ netscape4; int * ancient_browser_value; int * modern_browser_value; int * ancient_browsers; TYPE_6__* modern_browsers; } ;
typedef TYPE_2__ ngx_http_browser_conf_t ;
typedef int ngx_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_1__* elts; } ;
struct TYPE_9__ {size_t skip; int name; int add; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,size_t,int,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_http_browser_conf_t *VAR_8 = VAR_6;
    ngx_http_browser_conf_t *VAR_9 = VAR_7;

    ngx_uint_t VAR_10, VAR_11;
    ngx_http_modern_browser_t *VAR_12, *VAR_13;







    if (VAR_9->modern_browsers == ((void*)0) && VAR_9->modern_unlisted_browsers == 0) {
        VAR_9->modern_browsers = VAR_8->modern_browsers;
        VAR_9->modern_unlisted_browsers = VAR_8->modern_unlisted_browsers;

    } else if (VAR_9->modern_browsers != ((void*)0)) {
        VAR_12 = VAR_9->modern_browsers->elts;

        for (VAR_10 = 0; VAR_10 < VAR_9->modern_browsers->nelts; VAR_10++) {
            if (VAR_12[VAR_10].skip == 0) {
                goto found;
            }
        }






        VAR_13 = FUNC_0(VAR_9->modern_browsers);
        if (VAR_13 == ((void*)0)) {
            return VAR_0;
        }

        VAR_13->skip = 0;
        VAR_13->version = 4001000000U;

        VAR_12 = VAR_9->modern_browsers->elts;

found:

        FUNC_2(VAR_12, (size_t) VAR_9->modern_browsers->nelts,
                  sizeof(ngx_http_modern_browser_t),
                  VAR_3);

        for (VAR_10 = 0; VAR_10 < VAR_9->modern_browsers->nelts; VAR_10++) {
             VAR_11 = VAR_12[VAR_10].skip;

             VAR_12[VAR_10].skip = VAR_2[VAR_11].skip;
             VAR_12[VAR_10].add = VAR_2[VAR_11].add;
             (void) FUNC_1(VAR_12[VAR_10].name,
                                VAR_2[VAR_11].name, 12);
        }
    }

    if (VAR_9->ancient_browsers == ((void*)0) && VAR_9->netscape4 == 0) {
        VAR_9->ancient_browsers = VAR_8->ancient_browsers;
        VAR_9->netscape4 = VAR_8->netscape4;
    }

    if (VAR_9->modern_browser_value == ((void*)0)) {
        VAR_9->modern_browser_value = VAR_8->modern_browser_value;
    }

    if (VAR_9->modern_browser_value == ((void*)0)) {
        VAR_9->modern_browser_value = &VAR_4;
    }

    if (VAR_9->ancient_browser_value == ((void*)0)) {
        VAR_9->ancient_browser_value = VAR_8->ancient_browser_value;
    }

    if (VAR_9->ancient_browser_value == ((void*)0)) {
        VAR_9->ancient_browser_value = &VAR_4;
    }

    return VAR_1;
}
