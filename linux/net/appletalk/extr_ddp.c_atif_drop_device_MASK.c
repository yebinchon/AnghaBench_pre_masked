
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * atalk_ptr; } ;
struct atalk_iface {struct atalk_iface* next; struct net_device* dev; } ;


 struct atalk_iface* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct atalk_iface*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct atalk_iface **VAR_3 = &VAR_0;
 struct atalk_iface *VAR_4;

 FUNC_2(&VAR_1);
 while ((VAR_4 = *VAR_3) != ((void*)0)) {
  if (VAR_4->dev == VAR_2) {
   *VAR_3 = VAR_4->next;
   FUNC_0(VAR_2);
   FUNC_1(VAR_4);
   VAR_2->atalk_ptr = ((void*)0);
  } else
   VAR_3 = &VAR_4->next;
 }
 FUNC_3(&VAR_1);
}
