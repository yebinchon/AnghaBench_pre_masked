
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapb_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lapb_cb* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (struct lapb_cb*) ;
 int VAR_2 ;
 int FUNC_3 (struct lapb_cb*) ;
 int FUNC_4 (struct lapb_cb*) ;
 int FUNC_5 (struct lapb_cb*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct net_device *VAR_3)
{
 struct lapb_cb *VAR_4;
 int VAR_5 = VAR_0;

 FUNC_6(&VAR_2);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  goto out;
 FUNC_3(VAR_4);

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

 FUNC_2(VAR_4);

 FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 VAR_5 = VAR_1;
out:
 FUNC_7(&VAR_2);
 return VAR_5;
}
