
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {size_t sa_family; } ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int mask; int addr; } ;
struct TYPE_12__ {int* s6_addr; } ;
struct TYPE_11__ {int* s6_addr; } ;
struct TYPE_13__ {TYPE_3__ addr; TYPE_2__ mask; } ;
struct TYPE_15__ {TYPE_5__ in; TYPE_4__ in6; } ;
struct TYPE_16__ {size_t family; TYPE_6__ u; } ;
typedef TYPE_7__ ngx_cidr_t ;
struct TYPE_17__ {size_t nelts; TYPE_7__* elts; } ;
typedef TYPE_8__ ngx_array_t ;
typedef int in_addr_t ;


 size_t VAR_0 ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

ngx_int_t
FUNC_2(struct sockaddr *VAR_3, ngx_array_t *VAR_4)
{



    in_addr_t VAR_5;
    ngx_cidr_t *VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    VAR_7 = VAR_3->sa_family;

    if (VAR_7 == VAR_0) {
        VAR_5 = ((struct sockaddr_in *) VAR_3)->sin_addr.s_addr;
    }
    for (VAR_6 = VAR_4->elts, VAR_8 = 0; VAR_8 < VAR_4->nelts; VAR_8++) {
        if (VAR_6[VAR_8].family != VAR_7) {
            goto next;
        }

        switch (VAR_7) {
        default:
            if ((VAR_5 & VAR_6[VAR_8].u.in.mask) != VAR_6[VAR_8].u.in.addr) {
                goto next;
            }
            break;
        }

        return VAR_2;

    next:
        continue;
    }

    return VAR_1;
}
