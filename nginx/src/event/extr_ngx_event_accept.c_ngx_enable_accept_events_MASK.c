
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_listening_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_9__ {TYPE_1__ listening; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_10__ {TYPE_6__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_11__ {scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,int ) ;

ngx_int_t
FUNC_1(ngx_cycle_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_listening_t *VAR_5;
    ngx_connection_t *VAR_6;

    VAR_5 = VAR_3->listening.elts;
    for (VAR_4 = 0; VAR_4 < VAR_3->listening.nelts; VAR_4++) {

        VAR_6 = VAR_5[VAR_4].connection;

        if (VAR_6 == ((void*)0) || VAR_6->read->active) {
            continue;
        }

        if (FUNC_0(VAR_6->read, VAR_2, 0) == VAR_0) {
            return VAR_0;
        }
    }

    return VAR_1;
}
