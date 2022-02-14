
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tc_u32_sel {int nkeys; } ;
struct tc_u_knode {int exts; struct tc_u32_sel sel; int pcpu_success; int mask; int val; int pf; struct tc_u_hnode* ht_down; int flags; int res; int fshift; int ifindex; struct tc_u_hnode* ht_up; int handle; struct tc_u_hnode* next; } ;
struct tc_u_hnode {int refcnt; } ;
struct tc_u32_key {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tc_u_hnode*,struct tc_u_hnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tc_u_knode*) ;
 struct tc_u_knode* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tc_u32_sel*,struct tc_u32_sel*,int ) ;
 struct tc_u_hnode* FUNC_4 (struct tc_u_hnode*) ;
 int FUNC_5 (struct tc_u32_sel*,int ,int) ;
 scalar_t__ FUNC_6 (int *,struct net*,int ,int ) ;

__attribute__((used)) static struct tc_u_knode *FUNC_7(struct net *VAR_4, struct tcf_proto *VAR_5,
      struct tc_u_knode *VAR_6)
{
 struct tc_u_hnode *VAR_7 = FUNC_4(VAR_6->ht_down);
 struct tc_u32_sel *VAR_8 = &VAR_6->sel;
 struct tc_u_knode *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_6) + VAR_8->nkeys*sizeof(struct tc_u32_key),
        VAR_0);

 if (!VAR_9)
  return ((void*)0);

 FUNC_0(VAR_9->next, VAR_6->next);
 VAR_9->handle = VAR_6->handle;
 FUNC_0(VAR_9->ht_up, VAR_6->ht_up);

 VAR_9->ifindex = VAR_6->ifindex;
 VAR_9->fshift = VAR_6->fshift;
 VAR_9->res = VAR_6->res;
 VAR_9->flags = VAR_6->flags;
 FUNC_0(VAR_9->ht_down, VAR_7);


 if (VAR_7)
  VAR_7->refcnt++;
 FUNC_3(&VAR_9->sel, VAR_8, FUNC_5(VAR_8, VAR_3, VAR_8->nkeys));

 if (FUNC_6(&VAR_9->exts, VAR_4, VAR_1, VAR_2)) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
