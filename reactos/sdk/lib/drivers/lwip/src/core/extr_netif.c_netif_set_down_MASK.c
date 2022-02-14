
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; int ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netif*) ;
 int FUNC_1 (struct netif*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct netif *VAR_2)
{
  if (VAR_2->flags & VAR_1) {
    VAR_2->flags &= ~VAR_1;
    FUNC_0(VAR_2);
  }
}
