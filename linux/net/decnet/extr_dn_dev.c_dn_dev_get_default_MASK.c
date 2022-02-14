
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dn_ptr; } ;


 struct net_device* VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct net_device *FUNC_3(void)
{
 struct net_device *VAR_2;

 FUNC_1(&VAR_1);
 VAR_2 = VAR_0;
 if (VAR_2) {
  if (VAR_2->dn_ptr)
   FUNC_0(VAR_2);
  else
   VAR_2 = ((void*)0);
 }
 FUNC_2(&VAR_1);

 return VAR_2;
}
