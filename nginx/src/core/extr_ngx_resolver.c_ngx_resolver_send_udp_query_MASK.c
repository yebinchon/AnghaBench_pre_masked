
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_resolver_t ;
struct TYPE_8__ {TYPE_4__* udp; int log; } ;
typedef TYPE_2__ ngx_resolver_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {TYPE_1__* read; TYPE_2__* data; } ;
struct TYPE_7__ {int resolver; int handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int *,int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_resolver_t *VAR_4, ngx_resolver_connection_t *VAR_5,
    u_char *VAR_6, u_short VAR_7)
{
    ssize_t VAR_8;

    if (VAR_5->udp == ((void*)0)) {
        if (FUNC_3(VAR_5) != VAR_2) {
            return VAR_0;
        }

        VAR_5->udp->data = VAR_5;
        VAR_5->udp->read->handler = VAR_3;
        VAR_5->udp->read->resolver = 1;
    }

    VAR_8 = FUNC_2(VAR_5->udp, VAR_6, VAR_7);

    if (VAR_8 == VAR_0) {
        goto failed;
    }

    if ((size_t) VAR_8 != (size_t) VAR_7) {
        FUNC_1(VAR_1, &VAR_5->log, 0, "send() incomplete");
        goto failed;
    }

    return VAR_2;

failed:

    FUNC_0(VAR_5->udp);
    VAR_5->udp = ((void*)0);

    return VAR_0;
}
