
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; scalar_t__ autoip; scalar_t__ dhcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netif*) ;
 int FUNC_1 (struct netif*) ;
 int FUNC_2 (struct netif*) ;
 int FUNC_3 (struct netif*) ;
 int FUNC_4 (struct netif*) ;

void FUNC_5(struct netif *VAR_4 )
{
  if (!(VAR_4->flags & VAR_2)) {
    VAR_4->flags |= VAR_2;
    if (VAR_4->flags & VAR_3) {
    }
    FUNC_0(VAR_4);
  }
}
