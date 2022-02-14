
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {int features; scalar_t__ reg_state; int ifindex; int name; TYPE_1__ dev; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct net*,int) ;
 scalar_t__ FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net*,struct net_device*,char const*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct net*) ;
 int FUNC_10 (struct net*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct net_device*) ;
 scalar_t__ FUNC_16 (int ,struct net*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,struct net*,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,struct net_device*,unsigned int,int ) ;
 int FUNC_22 (int ,struct net_device*,unsigned int,int ,int*,int) ;
 int FUNC_23 () ;
 int FUNC_24 (struct net_device*) ;

int FUNC_25(struct net_device *VAR_11, struct net *VAR_12, const char *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;

 FUNC_0();


 VAR_14 = -VAR_1;
 if (VAR_11->features & VAR_7)
  goto out;


 if (VAR_11->reg_state != VAR_8)
  goto out;


 VAR_14 = 0;
 if (FUNC_16(FUNC_8(VAR_11), VAR_12))
  goto out;




 VAR_14 = -VAR_0;
 if (FUNC_3(VAR_12, VAR_11->name)) {

  if (!VAR_13)
   goto out;
  VAR_14 = FUNC_6(VAR_12, VAR_11, VAR_13);
  if (VAR_14 < 0)
   goto out;
 }






 FUNC_5(VAR_11);


 FUNC_24(VAR_11);

 FUNC_23();


 FUNC_11(VAR_11);
 FUNC_4(VAR_6, VAR_11);
 FUNC_20();

 VAR_15 = FUNC_19(FUNC_8(VAR_11), VAR_12, VAR_2);

 if (FUNC_2(VAR_12, VAR_11->ifindex))
  VAR_16 = FUNC_10(VAR_12);
 else
  VAR_16 = VAR_11->ifindex;

 FUNC_22(VAR_9, VAR_11, ~0U, VAR_2, &VAR_15,
       VAR_16);




 FUNC_12(VAR_11);
 FUNC_7(VAR_11);


 FUNC_14(&VAR_11->dev.kobj, VAR_4);
 FUNC_18(VAR_11);


 FUNC_9(VAR_11, VAR_12);
 VAR_11->ifindex = VAR_16;


 FUNC_14(&VAR_11->dev.kobj, VAR_3);
 FUNC_17(VAR_11);


 VAR_14 = FUNC_13(&VAR_11->dev, VAR_11->name);
 FUNC_1(VAR_14);


 FUNC_15(VAR_11);


 FUNC_4(VAR_5, VAR_11);





 FUNC_21(VAR_10, VAR_11, ~0U, VAR_2);

 FUNC_23();
 VAR_14 = 0;
out:
 return VAR_14;
}
