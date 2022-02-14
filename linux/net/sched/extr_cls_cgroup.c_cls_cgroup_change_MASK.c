
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct cls_cgroup_head {scalar_t__ handle; int exts; int rwork; int ematches; struct tcf_proto* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cls_cgroup_head*) ;
 struct cls_cgroup_head* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_3 (int ,struct cls_cgroup_head*) ;
 struct cls_cgroup_head* FUNC_4 (int ) ;
 int FUNC_5 (struct tcf_proto*,struct nlattr*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct net*,int ,int ) ;
 int FUNC_9 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_12, struct sk_buff *VAR_13,
        struct tcf_proto *VAR_14, unsigned long VAR_15,
        u32 VAR_16, struct nlattr **VAR_17,
        void **VAR_18, bool VAR_19, bool VAR_20,
        struct netlink_ext_ack *VAR_21)
{
 struct nlattr *VAR_22[VAR_6 + 1];
 struct cls_cgroup_head *VAR_23 = FUNC_4(VAR_14->root);
 struct cls_cgroup_head *VAR_24;
 int VAR_25;

 if (!VAR_17[VAR_8])
  return -VAR_0;

 if (!VAR_23 && !VAR_16)
  return -VAR_0;

 if (VAR_23 && VAR_16 != VAR_23->handle)
  return -VAR_2;

 VAR_24 = FUNC_1(sizeof(*VAR_23), VAR_3);
 if (!VAR_24)
  return -VAR_1;

 VAR_25 = FUNC_8(&VAR_24->exts, VAR_12, VAR_4, VAR_7);
 if (VAR_25 < 0)
  goto errout;
 VAR_24->handle = VAR_16;
 VAR_24->tp = VAR_14;
 VAR_25 = FUNC_2(VAR_22, VAR_6,
       VAR_17[VAR_8], VAR_10,
       ((void*)0));
 if (VAR_25 < 0)
  goto errout;

 VAR_25 = FUNC_9(VAR_12, VAR_14, VAR_22, VAR_17[VAR_9], &VAR_24->exts, VAR_19,
    1, VAR_21);
 if (VAR_25 < 0)
  goto errout;

 VAR_25 = FUNC_5(VAR_14, VAR_22[VAR_5], &VAR_24->ematches);
 if (VAR_25 < 0)
  goto errout;

 FUNC_3(VAR_14->root, VAR_24);
 if (VAR_23) {
  FUNC_7(&VAR_23->exts);
  FUNC_10(&VAR_23->rwork, VAR_11);
 }
 return 0;
errout:
 FUNC_6(&VAR_24->exts);
 FUNC_0(VAR_24);
 return VAR_25;
}
