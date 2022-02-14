
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapb_register_struct {int dummy; } ;
struct lapb_cb {struct lapb_register_struct const* callbacks; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lapb_cb* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct lapb_cb*) ;
 struct lapb_cb* FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (struct lapb_cb*) ;
 int FUNC_4 (struct lapb_cb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_device *VAR_4,
    const struct lapb_register_struct *VAR_5)
{
 struct lapb_cb *VAR_6;
 int VAR_7 = VAR_0;

 FUNC_5(&VAR_3);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_2();
 VAR_7 = VAR_1;
 if (!VAR_6)
  goto out;

 VAR_6->dev = VAR_4;
 VAR_6->callbacks = VAR_5;

 FUNC_1(VAR_6);

 FUNC_4(VAR_6);

 VAR_7 = VAR_2;
out:
 FUNC_6(&VAR_3);
 return VAR_7;
}
