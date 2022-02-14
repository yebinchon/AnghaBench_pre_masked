
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct gsw_mt753x {int (* mii_read ) (struct gsw_mt753x*,scalar_t__,scalar_t__) ;int (* mmd_read ) (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct genl_info {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct genl_info*,int ,int) ;
 int FUNC_1 (struct genl_info*,int ,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct gsw_mt753x*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct gsw_mt753x*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct genl_info *VAR_5, struct gsw_mt753x *VAR_6)
{
 struct sk_buff *VAR_7 = ((void*)0);
 s32 VAR_8, VAR_9, VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_8 = FUNC_0(VAR_5, VAR_1, -1);
 VAR_9 = FUNC_0(VAR_5, VAR_0, -1);
 VAR_10 = FUNC_0(VAR_5, VAR_2, -1);

 if (VAR_10 < 0)
  goto err;

 VAR_12 = FUNC_1(VAR_5, VAR_4, &VAR_7);
 if (VAR_12 < 0)
  goto err;

 if (VAR_8 >= 0) {
  if (VAR_9 < 0)
   VAR_11 = VAR_6->mii_read(VAR_6, VAR_8, VAR_10);
  else
   VAR_11 = VAR_6->mmd_read(VAR_6, VAR_8, VAR_9, VAR_10);
 } else {
  VAR_11 = FUNC_3(VAR_6, VAR_10);
 }

 VAR_12 = FUNC_4(VAR_7, VAR_2, VAR_10);
 if (VAR_12 < 0)
  goto err;

 VAR_12 = FUNC_4(VAR_7, VAR_3, VAR_11);
 if (VAR_12 < 0)
  goto err;

 return FUNC_2(VAR_7, VAR_5);

err:
 if (VAR_7)
  FUNC_5(VAR_7);

 return VAR_12;
}
