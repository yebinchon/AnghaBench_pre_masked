
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_13__ {int key; } ;
struct TYPE_10__ {TYPE_5__ node; TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_udp_connection_t ;
struct TYPE_11__ {int handler; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {TYPE_2__* udp; TYPE_1__* listening; int pool; int local_socklen; scalar_t__ local_sockaddr; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_9__ {int rbtree; scalar_t__ wildcard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ,int) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_connection_t *VAR_3)
{
    uint32_t VAR_4;
    ngx_pool_cleanup_t *VAR_5;
    ngx_udp_connection_t *VAR_6;

    if (VAR_3->udp) {
        return VAR_1;
    }

    VAR_6 = FUNC_3(VAR_3->pool, sizeof(ngx_udp_connection_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->connection = VAR_3;

    FUNC_1(VAR_4);
    FUNC_2(&VAR_4, (u_char *) VAR_3->sockaddr, VAR_3->socklen);

    if (VAR_3->listening->wildcard) {
        FUNC_2(&VAR_4, (u_char *) VAR_3->local_sockaddr, VAR_3->local_socklen);
    }

    FUNC_0(VAR_4);

    VAR_6->node.key = VAR_4;

    VAR_5 = FUNC_4(VAR_3->pool, 0);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->data = VAR_3;
    VAR_5->handler = VAR_2;

    FUNC_5(&VAR_3->listening->rbtree, &VAR_6->node);

    VAR_3->udp = VAR_6;

    return VAR_1;
}
