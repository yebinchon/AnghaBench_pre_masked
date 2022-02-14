
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {TYPE_1__* connection; scalar_t__ hs_digest; TYPE_4__* hs_buf; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ last; scalar_t__ start; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_4__*,int *,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3)
{
    ngx_buf_t *VAR_4;
    u_char *VAR_5;
    ngx_str_t VAR_6;

    VAR_4 = VAR_3->hs_buf;
    VAR_4->pos = VAR_4->last = VAR_4->start + 1;
    FUNC_0(VAR_4);
    if (VAR_3->hs_digest) {
        VAR_5 = VAR_4->last - VAR_2;
        VAR_6.data = VAR_3->hs_digest;
        VAR_6.len = VAR_2;
        if (FUNC_1(&VAR_6, VAR_4, VAR_5, VAR_5, VAR_3->connection->log) != VAR_1) {
            return VAR_0;
        }
    }

    return VAR_1;
}
