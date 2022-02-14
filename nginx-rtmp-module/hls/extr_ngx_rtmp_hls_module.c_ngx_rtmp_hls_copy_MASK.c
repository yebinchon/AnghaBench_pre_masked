
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_2__* buf; struct TYPE_10__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_8__ {int * pos; int * last; } ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (void*,int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, void *VAR_4, u_char **VAR_5, size_t VAR_6,
    ngx_chain_t **VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9;

    if (*VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    for ( ;; ) {
        VAR_8 = (*VAR_7)->buf->last;

        if ((size_t)(VAR_8 - *VAR_5) >= VAR_6) {
            if (VAR_4) {
                FUNC_1(VAR_4, *VAR_5, VAR_6);
            }

            *VAR_5 += VAR_6;

            while (*VAR_7 && *VAR_5 == (*VAR_7)->buf->last) {
                *VAR_7 = (*VAR_7)->next;
                if (*VAR_7) {
                    *VAR_5 = (*VAR_7)->buf->pos;
                }
            }

            return VAR_2;
        }

        VAR_9 = VAR_8 - *VAR_5;

        if (VAR_4) {
            FUNC_1(VAR_4, *VAR_5, VAR_9);
            VAR_4 = (u_char *)VAR_4 + VAR_9;
        }

        VAR_6 -= VAR_9;
        *VAR_7 = (*VAR_7)->next;

        if (*VAR_7 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_3->connection->log, 0,
                          "hls: failed to read %uz byte(s)", VAR_6);
            return VAR_0;
        }

        *VAR_5 = (*VAR_7)->buf->pos;
    }
}
