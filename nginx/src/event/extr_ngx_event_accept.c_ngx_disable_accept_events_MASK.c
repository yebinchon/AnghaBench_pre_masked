
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
struct TYPE_8__ {scalar_t__ reuseport; TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_listening_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_9__ {TYPE_1__ listening; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_10__ {TYPE_6__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_11__ {int active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_cycle_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_listening_t *VAR_7;
    ngx_connection_t *VAR_8;

    VAR_7 = VAR_4->listening.elts;
    for (VAR_6 = 0; VAR_6 < VAR_4->listening.nelts; VAR_6++) {

        VAR_8 = VAR_7[VAR_6].connection;

        if (VAR_8 == ((void*)0) || !VAR_8->read->active) {
            continue;
        }
        if (FUNC_0(VAR_8->read, VAR_3, VAR_0)
            == VAR_1)
        {
            return VAR_1;
        }
    }

    return VAR_2;
}
