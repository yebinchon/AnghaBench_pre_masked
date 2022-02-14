
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct netif* netif; struct pbuf* p; } ;
struct TYPE_4__ {TYPE_1__ inp; } ;
struct tcpip_msg {TYPE_2__ msg; int type; } ;
struct pbuf {int dummy; } ;
struct netif {int flags; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pbuf*,struct netif*) ;
 scalar_t__ FUNC_4 (struct pbuf*,struct netif*) ;
 int VAR_8 ;
 int FUNC_5 (int ,struct tcpip_msg*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,struct tcpip_msg*) ;
 scalar_t__ FUNC_8 (int *) ;

err_t
FUNC_9(struct pbuf *VAR_9, struct netif *VAR_10)
{
  struct tcpip_msg *VAR_11;

  if (FUNC_8(&VAR_8)) {
    VAR_11 = (struct tcpip_msg *)FUNC_6(VAR_3);
    if (VAR_11 == ((void*)0)) {
      return VAR_0;
    }

    VAR_11->type = VAR_7;
    VAR_11->msg.inp.p = VAR_9;
    VAR_11->msg.inp.netif = VAR_10;
    if (FUNC_7(&VAR_8, VAR_11) != VAR_1) {
      FUNC_5(VAR_3, VAR_11);
      return VAR_0;
    }
    return VAR_1;
  }
  return VAR_2;

}
