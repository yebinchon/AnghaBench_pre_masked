
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct nf_hook_state {int dummy; } ;
struct nf_hook_entries {unsigned int num_hook_entries; int * hooks; } ;
struct TYPE_3__ {int * hooks_bridge; } ;
struct net {TYPE_1__ nf; } ;
struct TYPE_4__ {int br_netfilter_broute; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 size_t VAR_0 ;

 size_t VAR_1 ;


 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int *,struct sk_buff*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (int *,struct sk_buff*,struct nf_hook_state*) ;
 int FUNC_5 (struct nf_hook_state*,size_t,size_t,int ,int *,int *,struct net*,int (*) (struct net*,int *,struct sk_buff*)) ;
 int ** VAR_5 ;
 int FUNC_6 (struct sk_buff*,struct nf_hook_state*,unsigned int,unsigned int) ;
 struct nf_hook_entries* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct sk_buff **VAR_7)
{
 FUNC_1(FUNC_2(VAR_6->dev), ((void*)0), VAR_6);

 return VAR_3;
}
