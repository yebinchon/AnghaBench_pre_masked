
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
typedef size_t ngx_uint_t ;
struct TYPE_11__ {scalar_t__ type; struct sockaddr* sockaddr; } ;
typedef TYPE_1__ ngx_stream_listen_t ;
struct TYPE_15__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ family; TYPE_5__ addrs; int port; } ;
typedef TYPE_2__ ngx_stream_conf_port_t ;
struct TYPE_13__ {TYPE_1__ opt; } ;
typedef TYPE_3__ ngx_stream_conf_addr_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int temp_pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef TYPE_5__ ngx_array_t ;
typedef int in_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int,int) ;
 void* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct sockaddr*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_2, ngx_array_t *VAR_3,
    ngx_stream_listen_t *VAR_4)
{
    in_port_t VAR_5;
    ngx_uint_t VAR_6;
    struct sockaddr *VAR_7;
    ngx_stream_conf_port_t *VAR_8;
    ngx_stream_conf_addr_t *VAR_9;

    VAR_7 = VAR_4->sockaddr;
    VAR_5 = FUNC_2(VAR_7);

    VAR_8 = VAR_3->elts;
    for (VAR_6 = 0; VAR_6 < VAR_3->nelts; VAR_6++) {

        if (VAR_5 == VAR_8[VAR_6].port
            && VAR_4->type == VAR_8[VAR_6].type
            && VAR_7->sa_family == VAR_8[VAR_6].family)
        {


            VAR_8 = &VAR_8[VAR_6];
            goto found;
        }
    }



    VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->family = VAR_7->sa_family;
    VAR_8->type = VAR_4->type;
    VAR_8->port = VAR_5;

    if (FUNC_0(&VAR_8->addrs, VAR_2->temp_pool, 2,
                       sizeof(ngx_stream_conf_addr_t))
        != VAR_1)
    {
        return VAR_0;
    }

found:

    VAR_9 = FUNC_1(&VAR_8->addrs);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->opt = *VAR_4;

    return VAR_1;
}
