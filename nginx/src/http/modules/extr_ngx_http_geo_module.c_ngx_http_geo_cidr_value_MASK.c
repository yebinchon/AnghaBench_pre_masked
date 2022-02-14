
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_conf_t ;
struct TYPE_11__ {int addr; int mask; } ;
struct TYPE_10__ {TYPE_2__ in; } ;
struct TYPE_13__ {TYPE_1__ u; int family; } ;
typedef TYPE_4__ ngx_cidr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_6, ngx_str_t *VAR_7, ngx_cidr_t *VAR_8)
{
    ngx_int_t VAR_9;

    if (FUNC_2(VAR_7->data, "255.255.255.255") == 0) {
        VAR_8->family = VAR_0;
        VAR_8->u.in.addr = 0xffffffff;
        VAR_8->u.in.mask = 0xffffffff;

        return VAR_5;
    }

    VAR_9 = FUNC_1(VAR_7, VAR_8);

    if (VAR_9 == VAR_2) {
        FUNC_0(VAR_3, VAR_6, 0, "invalid network \"%V\"", VAR_7);
        return VAR_2;
    }

    if (VAR_9 == VAR_1) {
        FUNC_0(VAR_4, VAR_6, 0,
                           "low address bits of %V are meaningless", VAR_7);
    }

    return VAR_5;
}
