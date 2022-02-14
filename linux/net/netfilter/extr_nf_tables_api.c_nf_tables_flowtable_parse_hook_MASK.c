
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct nft_flowtable {int hooknum; int priority; int ops_len; struct nf_hook_ops* ops; TYPE_2__ data; } ;
struct nft_ctx {int dummy; } ;
struct nf_hook_ops {int hooknum; int priority; struct net_device* dev; int hook; TYPE_2__* priv; int pf; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct nf_hook_ops* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct nft_ctx const*,struct nlattr*,struct net_device**,int*) ;
 int VAR_10 ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_11,
       const struct nlattr *VAR_12,
       struct nft_flowtable *VAR_13)
{
 struct net_device *VAR_14[VAR_8];
 struct nlattr *VAR_15[VAR_5 + 1];
 struct nf_hook_ops *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20 = 0, VAR_21;

 VAR_19 = FUNC_3(VAR_15, VAR_5, VAR_12,
       VAR_10, ((void*)0));
 if (VAR_19 < 0)
  return VAR_19;

 if (!VAR_15[VAR_6] ||
     !VAR_15[VAR_7] ||
     !VAR_15[VAR_4])
  return -VAR_0;

 VAR_17 = FUNC_4(FUNC_2(VAR_15[VAR_6]));
 if (VAR_17 != VAR_9)
  return -VAR_0;

 VAR_18 = FUNC_4(FUNC_2(VAR_15[VAR_7]));

 VAR_19 = FUNC_1(VAR_11, VAR_15[VAR_4],
          VAR_14, &VAR_20);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 = FUNC_0(VAR_20, sizeof(struct nf_hook_ops), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_13->hooknum = VAR_17;
 VAR_13->priority = VAR_18;
 VAR_13->ops = VAR_16;
 VAR_13->ops_len = VAR_20;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  VAR_13->ops[VAR_21].pf = VAR_3;
  VAR_13->ops[VAR_21].hooknum = VAR_17;
  VAR_13->ops[VAR_21].priority = VAR_18;
  VAR_13->ops[VAR_21].priv = &VAR_13->data;
  VAR_13->ops[VAR_21].hook = VAR_13->data.type->hook;
  VAR_13->ops[VAR_21].dev = VAR_14[VAR_21];
 }

 return VAR_19;
}
