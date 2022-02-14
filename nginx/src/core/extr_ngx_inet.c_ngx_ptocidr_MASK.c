
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_15__ {int* data; size_t len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int addr; int mask; } ;
struct TYPE_11__ {int* s6_addr; } ;
struct TYPE_10__ {int* s6_addr; } ;
struct TYPE_12__ {TYPE_2__ mask; TYPE_1__ addr; } ;
struct TYPE_14__ {TYPE_4__ in; TYPE_3__ in6; } ;
struct TYPE_16__ {int family; TYPE_5__ u; } ;
typedef TYPE_7__ ngx_cidr_t ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int*,size_t,int*) ;
 int FUNC_3 (int*,size_t) ;
 int FUNC_4 (int*,int,int) ;
 int* FUNC_5 (int*,int*,char) ;

ngx_int_t
FUNC_6(ngx_str_t *VAR_5, ngx_cidr_t *VAR_6)
{
    u_char *VAR_7, *VAR_8, *VAR_9;
    size_t VAR_10;
    ngx_int_t VAR_11;





    VAR_7 = VAR_5->data;
    VAR_9 = VAR_7 + VAR_5->len;

    VAR_8 = FUNC_5(VAR_7, VAR_9, '/');
    VAR_10 = (VAR_8 ? VAR_8 : VAR_9) - VAR_7;

    VAR_6->u.in.addr = FUNC_3(VAR_7, VAR_10);

    if (VAR_6->u.in.addr != VAR_1) {
        VAR_6->family = VAR_0;

        if (VAR_8 == ((void*)0)) {
            VAR_6->u.in.mask = 0xffffffff;
            return VAR_4;
        }
    } else {
        return VAR_3;
    }

    VAR_8++;

    VAR_11 = FUNC_1(VAR_8, VAR_9 - VAR_8);
    if (VAR_11 == VAR_3) {
        return VAR_3;
    }

    switch (VAR_6->family) {
    default:
        if (VAR_11 > 32) {
            return VAR_3;
        }

        if (VAR_11) {
            VAR_6->u.in.mask = FUNC_0((uint32_t) (0xffffffffu << (32 - VAR_11)));

        } else {

            VAR_6->u.in.mask = 0;
        }

        if (VAR_6->u.in.addr == (VAR_6->u.in.addr & VAR_6->u.in.mask)) {
            return VAR_4;
        }

        VAR_6->u.in.addr &= VAR_6->u.in.mask;

        return VAR_2;
    }
}
