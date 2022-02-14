
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcindex_filter_result {int dummy; } ;
struct tcindex_data {int dummy; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_1 (char*,struct tcf_proto*,int ,struct nlattr**,void**,struct nlattr*,struct tcindex_data*,struct tcindex_filter_result*,void*) ;
 struct tcindex_data* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct net*,struct tcf_proto*,unsigned long,int ,struct tcindex_data*,struct tcindex_filter_result*,struct nlattr**,struct nlattr*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_4(struct net *VAR_4, struct sk_buff *VAR_5,
        struct tcf_proto *VAR_6, unsigned long VAR_7, u32 VAR_8,
        struct nlattr **VAR_9, void **VAR_10, bool VAR_11,
        bool VAR_12, struct netlink_ext_ack *VAR_13)
{
 struct nlattr *VAR_14 = VAR_9[VAR_0];
 struct nlattr *VAR_15[VAR_2 + 1];
 struct tcindex_data *VAR_16 = FUNC_2(VAR_6->root);
 struct tcindex_filter_result *VAR_17 = *VAR_10;
 int VAR_18;

 FUNC_1("tcindex_change(tp %p,handle 0x%08x,tca %p,arg %p),opt %p,"
     "p %p,r %p,*arg %p\n",
     VAR_6, VAR_8, VAR_9, VAR_10, VAR_14, VAR_16, VAR_17, VAR_10 ? *VAR_10 : ((void*)0));

 if (!VAR_14)
  return 0;

 VAR_18 = FUNC_0(VAR_15, VAR_2, VAR_14,
       VAR_3, ((void*)0));
 if (VAR_18 < 0)
  return VAR_18;

 return FUNC_3(VAR_4, VAR_6, VAR_7, VAR_8, VAR_16, VAR_17, VAR_15,
     VAR_9[VAR_1], VAR_11, VAR_13);
}
