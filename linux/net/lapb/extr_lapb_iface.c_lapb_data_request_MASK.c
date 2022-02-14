
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lapb_cb {scalar_t__ state; int write_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct lapb_cb* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (struct lapb_cb*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

int FUNC_4(struct net_device *VAR_5, struct sk_buff *VAR_6)
{
 struct lapb_cb *VAR_7 = FUNC_0(VAR_5);
 int VAR_8 = VAR_0;

 if (!VAR_7)
  goto out;

 VAR_8 = VAR_1;
 if (VAR_7->state != VAR_3 && VAR_7->state != VAR_4)
  goto out_put;

 FUNC_3(&VAR_7->write_queue, VAR_6);
 FUNC_1(VAR_7);
 VAR_8 = VAR_2;
out_put:
 FUNC_2(VAR_7);
out:
 return VAR_8;
}
