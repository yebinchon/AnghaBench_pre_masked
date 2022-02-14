
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int priority; } ;
struct dcb_app_type {TYPE_1__ app; } ;
struct dcb_app {int dummy; } ;


 struct dcb_app_type* FUNC_0 (struct dcb_app*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u8 FUNC_3(struct net_device *VAR_1, struct dcb_app *VAR_2)
{
 struct dcb_app_type *VAR_3;
 u8 VAR_4 = 0;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_2, VAR_1->ifindex, -1);
 if (VAR_3)
  VAR_4 = VAR_3->app.priority;
 FUNC_2(&VAR_0);

 return VAR_4;
}
