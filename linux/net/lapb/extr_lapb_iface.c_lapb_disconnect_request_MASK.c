
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapb_cb {int state; int dev; scalar_t__ n2count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct lapb_cb*) ;
 int FUNC_1 (int,char*,int ) ;
 struct lapb_cb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct lapb_cb*) ;
 int FUNC_4 (struct lapb_cb*,int ,int ,int ) ;
 int FUNC_5 (struct lapb_cb*) ;
 int FUNC_6 (struct lapb_cb*) ;

int FUNC_7(struct net_device *VAR_6)
{
 struct lapb_cb *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = VAR_0;

 if (!VAR_7)
  goto out;

 switch (VAR_7->state) {
 case 130:
  VAR_8 = VAR_3;
  goto out_put;

 case 129:
  FUNC_1(1, "(%p) S1 TX DISC(1)\n", VAR_7->dev);
  FUNC_1(0, "(%p) S1 -> S0\n", VAR_7->dev);
  FUNC_4(VAR_7, VAR_2, VAR_5, VAR_1);
  VAR_7->state = 130;
  FUNC_5(VAR_7);
  VAR_8 = VAR_3;
  goto out_put;

 case 128:
  VAR_8 = VAR_4;
  goto out_put;
 }

 FUNC_0(VAR_7);
 VAR_7->n2count = 0;
 FUNC_4(VAR_7, VAR_2, VAR_5, VAR_1);
 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
 VAR_7->state = 128;

 FUNC_1(1, "(%p) S3 DISC(1)\n", VAR_7->dev);
 FUNC_1(0, "(%p) S3 -> S2\n", VAR_7->dev);

 VAR_8 = VAR_4;
out_put:
 FUNC_3(VAR_7);
out:
 return VAR_8;
}
