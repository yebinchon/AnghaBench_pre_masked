
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* getpgbwgcfgtx ) (struct net_device*,int,int *) ;int (* getpgbwgcfgrx ) (struct net_device*,int,int *) ;int (* getpgtccfgtx ) (struct net_device*,int,int *,int *,int *,int *) ;int (* getpgtccfgrx ) (struct net_device*,int,int *,int *,int *,int *) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_6 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_7 (struct net_device*,int,int *) ;
 int FUNC_8 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_20, struct nlmsghdr *VAR_21,
        struct nlattr **VAR_22, struct sk_buff *VAR_23, int VAR_24)
{
 struct nlattr *VAR_25, *VAR_26, *VAR_27;
 struct nlattr *VAR_28[VAR_5 + 1];
 struct nlattr *VAR_29[VAR_11 + 1];
 u8 VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34;
 int VAR_35 = 0;
 int VAR_36;

 if (!VAR_22[VAR_0])
  return -VAR_15;

 if (!VAR_20->dcbnl_ops->getpgtccfgtx ||
     !VAR_20->dcbnl_ops->getpgtccfgrx ||
     !VAR_20->dcbnl_ops->getpgbwgcfgtx ||
     !VAR_20->dcbnl_ops->getpgbwgcfgrx)
  return -VAR_17;

 VAR_34 = FUNC_3(VAR_28, VAR_5,
       VAR_22[VAR_0], VAR_18,
       ((void*)0));
 if (VAR_34)
  return VAR_34;

 VAR_25 = FUNC_2(VAR_23, VAR_0);
 if (!VAR_25)
  return -VAR_16;

 if (VAR_28[VAR_8])
  VAR_35 = 1;

 for (VAR_36 = VAR_6; VAR_36 <= VAR_7; VAR_36++) {
  if (!VAR_35 && !VAR_28[VAR_36])
   continue;

  if (VAR_28[VAR_8])
   VAR_27 = VAR_28[VAR_8];
  else
   VAR_27 = VAR_28[VAR_36];
  VAR_34 = FUNC_3(VAR_29,
        VAR_11, VAR_27,
        VAR_19, ((void*)0));
  if (VAR_34)
   goto err_pg;

  VAR_26 = FUNC_2(VAR_23, VAR_36);
  if (!VAR_26)
   goto err_pg;

  VAR_31 = VAR_1;
  VAR_30 = VAR_1;
  VAR_32 = VAR_1;
  VAR_33 = VAR_1;

  if (VAR_24) {

   VAR_20->dcbnl_ops->getpgtccfgrx(VAR_20,
      VAR_36 - VAR_6, &VAR_30,
      &VAR_31, &VAR_32, &VAR_33);
  } else {

   VAR_20->dcbnl_ops->getpgtccfgtx(VAR_20,
      VAR_36 - VAR_6, &VAR_30,
      &VAR_31, &VAR_32, &VAR_33);
  }

  if (VAR_29[VAR_12] ||
      VAR_29[VAR_9]) {
   VAR_34 = FUNC_4(VAR_23,
                    VAR_12, VAR_31);
   if (VAR_34)
    goto err_param;
  }
  if (VAR_29[VAR_14] ||
      VAR_29[VAR_9]) {
   VAR_34 = FUNC_4(VAR_23,
                    VAR_14, VAR_33);
   if (VAR_34)
    goto err_param;
  }
  if (VAR_29[VAR_13] ||
      VAR_29[VAR_9]) {
   VAR_34 = FUNC_4(VAR_23,
                    VAR_13, VAR_30);
   if (VAR_34)
    goto err_param;
  }
  if (VAR_29[VAR_10] ||
      VAR_29[VAR_9]) {
   VAR_34 = FUNC_4(VAR_23, VAR_10,
                    VAR_32);
   if (VAR_34)
    goto err_param;
  }
  FUNC_1(VAR_23, VAR_26);
 }

 if (VAR_28[VAR_4])
  VAR_35 = 1;
 else
  VAR_35 = 0;

 for (VAR_36 = VAR_2; VAR_36 <= VAR_3; VAR_36++) {
  if (!VAR_35 && !VAR_28[VAR_36])
   continue;

  VAR_32 = VAR_1;

  if (VAR_24) {

   VAR_20->dcbnl_ops->getpgbwgcfgrx(VAR_20,
     VAR_36 - VAR_2, &VAR_32);
  } else {

   VAR_20->dcbnl_ops->getpgbwgcfgtx(VAR_20,
     VAR_36 - VAR_2, &VAR_32);
  }
  VAR_34 = FUNC_4(VAR_23, VAR_36, VAR_32);
  if (VAR_34)
   goto err_pg;
 }

 FUNC_1(VAR_23, VAR_25);

 return 0;

err_param:
 FUNC_0(VAR_23, VAR_26);
err_pg:
 FUNC_0(VAR_23, VAR_25);

 return -VAR_16;
}
