
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int extack; struct nlattr** attrs; } ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct genl_info*,int const*,int,int ) ;
 int FUNC_1 (struct genl_info*,int ,int ,int ) ;
 int * FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct nlattr *VAR_11[VAR_2 + 1];
 struct nlattr *VAR_12;
 int VAR_13;

 VAR_12 = VAR_10->attrs[VAR_1];
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_11, VAR_2, VAR_12,
       VAR_8,
       VAR_10->extack);
 if (VAR_13)
  return VAR_13;

 if (VAR_11[VAR_4] &&
     VAR_11[VAR_3]) {
  const s32 *VAR_14 =
   FUNC_2(VAR_11[VAR_4]);
  int VAR_15 = FUNC_4(VAR_11[VAR_4]);
  u32 VAR_16 = FUNC_3(VAR_11[VAR_3]);

  if (VAR_15 % 4)
   return -VAR_0;

  return FUNC_0(VAR_10, VAR_14, VAR_15 / 4,
         VAR_16);
 }

 if (VAR_11[VAR_7] &&
     VAR_11[VAR_6] &&
     VAR_11[VAR_5]) {
  u32 VAR_17 = FUNC_3(VAR_11[VAR_7]);
  u32 VAR_18 = FUNC_3(VAR_11[VAR_6]);
  u32 VAR_19 = FUNC_3(VAR_11[VAR_5]);

  return FUNC_1(VAR_10, VAR_17, VAR_18, VAR_19);
 }

 return -VAR_0;
}
