
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int type; } ;
struct TYPE_5__ {int addr; TYPE_1__ param_hdr; } ;
union sctp_addr_param {TYPE_2__ v6; } ;
struct TYPE_6__ {int sin6_addr; } ;
union sctp_addr {TYPE_3__ v6; } ;
struct sctp_ipv6addr_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const union sctp_addr *VAR_1,
     union sctp_addr_param *VAR_2)
{
 int VAR_3 = sizeof(struct sctp_ipv6addr_param);

 VAR_2->v6.param_hdr.type = VAR_0;
 VAR_2->v6.param_hdr.length = FUNC_0(VAR_3);
 VAR_2->v6.addr = VAR_1->v6.sin6_addr;

 return VAR_3;
}
