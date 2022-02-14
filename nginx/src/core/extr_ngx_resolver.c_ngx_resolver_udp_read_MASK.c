
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int resolver; } ;
typedef TYPE_1__ ngx_resolver_connection_t ;
struct TYPE_7__ {scalar_t__ ready; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_8__ {TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ssize_t VAR_2;
    ngx_connection_t *VAR_3;
    ngx_resolver_connection_t *VAR_4;
    u_char VAR_5[VAR_0];

    VAR_3 = VAR_1->data;
    VAR_4 = VAR_3->data;

    do {
        VAR_2 = FUNC_1(VAR_3, VAR_5, VAR_0);

        if (VAR_2 < 0) {
            return;
        }

        FUNC_0(VAR_4->resolver, VAR_5, VAR_2, 0);

    } while (VAR_1->ready);
}
