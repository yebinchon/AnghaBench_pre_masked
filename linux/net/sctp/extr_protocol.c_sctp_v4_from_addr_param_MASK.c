
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_3__ addr; } ;
union sctp_addr_param {TYPE_4__ v4; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
typedef int __be16 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(union sctp_addr *VAR_1,
        union sctp_addr_param *VAR_2,
        __be16 VAR_3, int VAR_4)
{
 VAR_1->v4.sin_family = VAR_0;
 VAR_1->v4.sin_port = VAR_3;
 VAR_1->v4.sin_addr.s_addr = VAR_2->v4.addr.s_addr;
}
