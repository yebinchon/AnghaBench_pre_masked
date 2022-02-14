
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_8__ {int data; int len; } ;
struct TYPE_10__ {int (* handler ) (void*,TYPE_3__*,TYPE_2__*) ;TYPE_1__ name; } ;
typedef TYPE_3__ ngx_rtmp_eval_t ;
typedef int ngx_log_t ;
typedef int ngx_buf_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (void*,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, ngx_buf_t *VAR_1, ngx_rtmp_eval_t **VAR_2,
    ngx_str_t *VAR_3, ngx_log_t *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_str_t VAR_6;
    ngx_rtmp_eval_t *VAR_7;

    for (; *VAR_2; ++VAR_2) {
        for (VAR_5 = 0, VAR_7 = *VAR_2; VAR_7->handler; ++VAR_5, ++VAR_7) {
            if (VAR_7->name.len == VAR_3->len &&
                FUNC_0(VAR_7->name.data, VAR_3->data, VAR_3->len) == 0)
            {
                VAR_7->handler(VAR_0, VAR_7, &VAR_6);
                FUNC_1(VAR_1, VAR_6.data, VAR_6.len, VAR_4);
            }
        }
    }
}
