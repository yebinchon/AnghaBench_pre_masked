
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union sctp_params {TYPE_2__* ext; TYPE_1__* p; } ;
struct sctp_paramhdr {int dummy; } ;
struct TYPE_8__ {int reconf_capable; int prsctp_capable; int auth_capable; int asconf_capable; int intl_capable; } ;
struct sctp_association {TYPE_4__ peer; TYPE_3__* ep; } ;
typedef int __u16 ;
struct TYPE_7__ {int intl_enable; int asconf_enable; int auth_enable; int prsctp_enable; int reconf_enable; } ;
struct TYPE_6__ {int* chunks; } ;
struct TYPE_5__ {int length; } ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_0,
       union sctp_params VAR_1)
{
 __u16 VAR_2 = FUNC_0(VAR_1.p->length) - sizeof(struct sctp_paramhdr);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  switch (VAR_1.ext->chunks[VAR_3]) {
  case 128:
   if (VAR_0->ep->reconf_enable)
    VAR_0->peer.reconf_capable = 1;
   break;
  case 130:
   if (VAR_0->ep->prsctp_enable)
    VAR_0->peer.prsctp_capable = 1;
   break;
  case 131:



   if (VAR_0->ep->auth_enable)
    VAR_0->peer.auth_capable = 1;
   break;
  case 133:
  case 132:
   if (VAR_0->ep->asconf_enable)
    VAR_0->peer.asconf_capable = 1;
   break;
  case 129:
   if (VAR_0->ep->intl_enable)
    VAR_0->peer.intl_capable = 1;
   break;
  default:
   break;
  }
 }
}
