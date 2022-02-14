
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sctp_params {TYPE_1__* ext; TYPE_3__* p; } ;
struct sctp_paramhdr {int dummy; } ;
struct sctp_endpoint {scalar_t__ asconf_enable; } ;
struct TYPE_5__ {scalar_t__ addip_noauth; } ;
struct net {TYPE_2__ sctp; } ;
typedef int __u16 ;
struct TYPE_6__ {int length; } ;
struct TYPE_4__ {int* chunks; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_0,
     const struct sctp_endpoint *VAR_1,
     union sctp_params VAR_2)
{
 __u16 VAR_3 = FUNC_0(VAR_2.p->length) - sizeof(struct sctp_paramhdr);
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  switch (VAR_2.ext->chunks[VAR_6]) {
  case 128:
   VAR_5 = 1;
   break;
  case 130:
  case 129:
   VAR_4 = 1;
   break;
  }
 }






 if (VAR_0->sctp.addip_noauth)
  return 1;

 if (VAR_1->asconf_enable && !VAR_5 && VAR_4)
  return 0;

 return 1;
}
