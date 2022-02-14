
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {int root; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fw_head {int mask; } ;
struct TYPE_2__ {void* classid; } ;
struct fw_filter {int ifindex; TYPE_1__ res; int exts; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (struct nlattr*) ;
 struct fw_head* FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_3 (struct net*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_5, struct tcf_proto *VAR_6,
   struct fw_filter *VAR_7, struct nlattr **VAR_8,
   struct nlattr **VAR_9, unsigned long VAR_10, bool VAR_11,
   struct netlink_ext_ack *VAR_12)
{
 struct fw_head *VAR_13 = FUNC_1(VAR_6->root);
 u32 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_8, VAR_9[VAR_4], &VAR_7->exts, VAR_11,
    1, VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_8[VAR_1]) {
  VAR_7->res.classid = FUNC_0(VAR_8[VAR_1]);
  FUNC_2(VAR_6, &VAR_7->res, VAR_10);
 }

 if (VAR_8[VAR_2]) {
  int VAR_16;
  VAR_16 = FUNC_3(VAR_5, VAR_8[VAR_2], VAR_12);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_7->ifindex = VAR_16;
 }

 VAR_15 = -VAR_0;
 if (VAR_8[VAR_3]) {
  VAR_14 = FUNC_0(VAR_8[VAR_3]);
  if (VAR_14 != VAR_13->mask)
   return VAR_15;
 } else if (VAR_13->mask != 0xFFFFFFFF)
  return VAR_15;

 return 0;
}
