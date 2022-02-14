
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fl_flow_tmplt {int dummy; } ;
struct fl_flow_mask {int key; } ;
struct TYPE_2__ {int classid; } ;
struct cls_fl_filter {int key; int mkey; TYPE_1__ res; int exts; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct fl_flow_tmplt*,struct fl_flow_mask*) ;
 int FUNC_2 (struct fl_flow_mask*) ;
 int FUNC_3 (struct net*,struct nlattr**,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_4 (int *,int *,struct fl_flow_mask*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_9 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_2, struct tcf_proto *VAR_3,
   struct cls_fl_filter *VAR_4, struct fl_flow_mask *VAR_5,
   unsigned long VAR_6, struct nlattr **VAR_7,
   struct nlattr *VAR_8, bool VAR_9,
   struct fl_flow_tmplt *VAR_10, bool VAR_11,
   struct netlink_ext_ack *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_9(VAR_2, VAR_3, VAR_7, VAR_8, &VAR_4->exts, VAR_9, VAR_11,
    VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_7[VAR_1]) {
  VAR_4->res.classid = FUNC_5(VAR_7[VAR_1]);
  if (!VAR_11)
   FUNC_6();
  FUNC_8(VAR_3, &VAR_4->res, VAR_6);
  if (!VAR_11)
   FUNC_7();
 }

 VAR_13 = FUNC_3(VAR_2, VAR_7, &VAR_4->key, &VAR_5->key, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_5);
 FUNC_4(&VAR_4->mkey, &VAR_4->key, VAR_5);

 if (!FUNC_1(VAR_10, VAR_5)) {
  FUNC_0(VAR_12, "Mask does not fit the template");
  return -VAR_0;
 }

 return 0;
}
