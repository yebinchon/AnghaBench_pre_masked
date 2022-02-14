
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tipc_net {int net_id; int legacy_addr_format; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_3 (int ) ;
 struct tipc_net* FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*,int *,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct net*) ;

int FUNC_7(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct nlattr *VAR_12[VAR_6 + 1];
 struct net *VAR_13 = FUNC_3(VAR_10->sk);
 struct tipc_net *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;

 if (!VAR_11->attrs[VAR_3])
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_12, VAR_6,
       VAR_11->attrs[VAR_3],
       VAR_9, VAR_11->extack);

 if (VAR_15)
  return VAR_15;


 if (FUNC_6(VAR_13))
  return -VAR_1;

 if (VAR_12[VAR_5]) {
  u32 VAR_16;

  VAR_16 = FUNC_0(VAR_12[VAR_5]);
  if (VAR_16 < 1 || VAR_16 > 9999)
   return -VAR_0;

  VAR_14->net_id = VAR_16;
 }

 if (VAR_12[VAR_4]) {
  u32 VAR_17;

  VAR_17 = FUNC_0(VAR_12[VAR_4]);
  if (!VAR_17)
   return -VAR_0;
  VAR_14->legacy_addr_format = 1;
  FUNC_5(VAR_13, ((void*)0), VAR_17);
 }

 if (VAR_12[VAR_7]) {
  u8 VAR_18[VAR_2];
  u64 *VAR_19 = (u64 *)&VAR_18[0];
  u64 *VAR_20 = (u64 *)&VAR_18[8];

  if (!VAR_12[VAR_8])
   return -VAR_0;
  *VAR_19 = FUNC_1(VAR_12[VAR_7]);
  *VAR_20 = FUNC_1(VAR_12[VAR_8]);
  FUNC_5(VAR_13, VAR_18, 0);
 }
 return 0;
}
