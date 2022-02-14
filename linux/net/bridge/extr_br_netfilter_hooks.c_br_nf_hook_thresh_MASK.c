
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;
struct nf_hook_ops {scalar_t__ priority; } ;
struct nf_hook_entries {unsigned int num_hook_entries; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * hooks_bridge; } ;
struct net {TYPE_1__ nf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nf_hook_ops** FUNC_0 (struct nf_hook_entries const*) ;
 int FUNC_1 (struct sk_buff*,struct nf_hook_state*,struct nf_hook_entries const*,unsigned int) ;
 int FUNC_2 (struct nf_hook_state*,unsigned int,int ,struct net_device*,struct net_device*,struct sock*,struct net*,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 struct nf_hook_entries* FUNC_3 (int ) ;

int FUNC_4(unsigned int VAR_2, struct net *VAR_3,
        struct sock *VAR_4, struct sk_buff *VAR_5,
        struct net_device *VAR_6,
        struct net_device *VAR_7,
        int (*VAR_8)(struct net *, struct sock *,
      struct sk_buff *))
{
 const struct nf_hook_entries *VAR_9;
 struct nf_hook_state VAR_10;
 struct nf_hook_ops **VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_3(VAR_3->nf.hooks_bridge[VAR_2]);
 if (!VAR_9)
  return VAR_8(VAR_3, VAR_4, VAR_5);

 VAR_11 = FUNC_0(VAR_9);
 for (VAR_12 = 0; VAR_12 < VAR_9->num_hook_entries &&
       VAR_11[VAR_12]->priority <= VAR_1; VAR_12++)
  ;

 FUNC_2(&VAR_10, VAR_2, VAR_0, VAR_6, VAR_7,
      VAR_4, VAR_3, VAR_8);

 VAR_13 = FUNC_1(VAR_5, &VAR_10, VAR_9, VAR_12);
 if (VAR_13 == 1)
  VAR_13 = VAR_8(VAR_3, VAR_4, VAR_5);

 return VAR_13;
}
