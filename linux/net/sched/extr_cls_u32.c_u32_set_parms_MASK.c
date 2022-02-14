
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcf_proto {int data; } ;
struct TYPE_2__ {void* classid; } ;
struct tc_u_knode {int ifindex; TYPE_1__ res; int ht_down; int exts; } ;
struct tc_u_hnode {int refcnt; scalar_t__ is_root; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,struct tc_u_hnode*) ;
 struct tc_u_hnode* FUNC_4 (int ) ;
 int FUNC_5 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_6 (struct net*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;
 struct tc_u_hnode* FUNC_8 (int ,void*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, struct tcf_proto *VAR_5,
    unsigned long VAR_6,
    struct tc_u_knode *VAR_7, struct nlattr **VAR_8,
    struct nlattr *VAR_9, bool VAR_10,
    struct netlink_ext_ack *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_7(VAR_4, VAR_5, VAR_8, VAR_9, &VAR_7->exts, VAR_10, 1, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_8[VAR_3]) {
  u32 VAR_13 = FUNC_2(VAR_8[VAR_3]);
  struct tc_u_hnode *VAR_14 = ((void*)0), *VAR_15;

  if (FUNC_1(VAR_13)) {
   FUNC_0(VAR_11, "u32 Link handle must be a hash table");
   return -VAR_0;
  }

  if (VAR_13) {
   VAR_14 = FUNC_8(VAR_5->data, VAR_13);

   if (!VAR_14) {
    FUNC_0(VAR_11, "Link hash table not found");
    return -VAR_0;
   }
   if (VAR_14->is_root) {
    FUNC_0(VAR_11, "Not linking to root node");
    return -VAR_0;
   }
   VAR_14->refcnt++;
  }

  VAR_15 = FUNC_4(VAR_7->ht_down);
  FUNC_3(VAR_7->ht_down, VAR_14);

  if (VAR_15)
   VAR_15->refcnt--;
 }
 if (VAR_8[VAR_1]) {
  VAR_7->res.classid = FUNC_2(VAR_8[VAR_1]);
  FUNC_5(VAR_5, &VAR_7->res, VAR_6);
 }

 if (VAR_8[VAR_2]) {
  int VAR_16;
  VAR_16 = FUNC_6(VAR_4, VAR_8[VAR_2], VAR_11);
  if (VAR_16 < 0)
   return -VAR_0;
  VAR_7->ifindex = VAR_16;
 }
 return 0;
}
