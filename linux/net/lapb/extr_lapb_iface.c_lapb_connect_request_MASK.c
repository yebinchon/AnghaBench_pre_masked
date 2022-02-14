
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapb_cb {scalar_t__ state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 struct lapb_cb* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lapb_cb*) ;
 int FUNC_3 (struct lapb_cb*) ;

int FUNC_4(struct net_device *VAR_6)
{
 struct lapb_cb *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = VAR_0;

 if (!VAR_7)
  goto out;

 VAR_8 = VAR_2;
 if (VAR_7->state == VAR_3)
  goto out_put;

 VAR_8 = VAR_1;
 if (VAR_7->state == VAR_4 || VAR_7->state == VAR_5)
  goto out_put;

 FUNC_2(VAR_7);

 FUNC_0(0, "(%p) S0 -> S1\n", VAR_7->dev);
 VAR_7->state = VAR_3;

 VAR_8 = VAR_2;
out_put:
 FUNC_3(VAR_7);
out:
 return VAR_8;
}
