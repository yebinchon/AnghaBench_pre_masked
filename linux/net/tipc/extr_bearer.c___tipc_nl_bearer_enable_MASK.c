
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct net*,char*,int ,int ,struct nlattr**) ;
 int VAR_9 ;
 int FUNC_5 (struct nlattr*,struct nlattr**) ;

int FUNC_6(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 int VAR_12;
 char *VAR_13;
 struct nlattr *VAR_14[VAR_4 + 1];
 struct net *VAR_15 = FUNC_3(VAR_10->sk);
 u32 VAR_16 = 0;
 u32 VAR_17;

 VAR_17 = VAR_1;

 if (!VAR_11->attrs[VAR_2])
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_14, VAR_4,
       VAR_11->attrs[VAR_2],
       VAR_9, VAR_11->extack);
 if (VAR_12)
  return VAR_12;

 if (!VAR_14[VAR_5])
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_14[VAR_5]);

 if (VAR_14[VAR_3])
  VAR_16 = FUNC_1(VAR_14[VAR_3]);

 if (VAR_14[VAR_6]) {
  struct nlattr *VAR_18[VAR_7 + 1];

  VAR_12 = FUNC_5(VAR_14[VAR_6],
           VAR_18);
  if (VAR_12)
   return VAR_12;

  if (VAR_18[VAR_8])
   VAR_17 = FUNC_1(VAR_18[VAR_8]);
 }

 return FUNC_4(VAR_15, VAR_13, VAR_16, VAR_17, VAR_14);
}
