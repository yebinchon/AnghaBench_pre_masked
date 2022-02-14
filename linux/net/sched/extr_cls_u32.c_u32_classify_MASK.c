
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct tcf_proto {int root; } ;
struct TYPE_4__ {int nkeys; int flags; unsigned int hoff; int off; unsigned int offoff; int offmask; int offshift; struct tc_u32_key* keys; } ;
struct tc_u_knode {int mask; int val; int ht_up; TYPE_2__ sel; int fshift; int ht_down; int next; int exts; TYPE_1__* pf; int ifindex; struct tcf_result res; int * pcpu_success; int flags; } ;
struct tc_u_hnode {int divisor; int * ht; } ;
struct tc_u32_key {unsigned int off; int offmask; int val; int mask; } ;
struct sk_buff {int mark; unsigned int len; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_3__ {int rhit; int * kcnts; int rcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int* FUNC_4 (struct sk_buff*,unsigned int,int,int*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int *,struct tcf_result*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6, const struct tcf_proto *VAR_7,
   struct tcf_result *VAR_8)
{
 struct {
  struct tc_u_knode *knode;
  unsigned int off;
 } VAR_9[VAR_2];

 struct tc_u_hnode *VAR_10 = FUNC_3(VAR_7->root);
 unsigned int VAR_11 = FUNC_6(VAR_6);
 struct tc_u_knode *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;



 int VAR_16, VAR_17;

next_ht:
 VAR_12 = FUNC_3(VAR_10->ht[VAR_15]);

next_knode:
 if (VAR_12) {
  struct tc_u32_key *VAR_18 = VAR_12->sel.keys;






  if (FUNC_7(VAR_12->flags)) {
   VAR_12 = FUNC_3(VAR_12->next);
   goto next_knode;
  }
  for (VAR_16 = VAR_12->sel.nkeys; VAR_16 > 0; VAR_16--, VAR_18++) {
   int VAR_19 = VAR_11 + VAR_18->off + (VAR_14 & VAR_18->offmask);
   __be32 *VAR_20, VAR_21;

   if (FUNC_5(VAR_6) + VAR_19 > VAR_0)
    goto out;

   VAR_20 = FUNC_4(VAR_6, VAR_19, 4, &VAR_21);
   if (!VAR_20)
    goto out;
   if ((*VAR_20 ^ VAR_18->val) & VAR_18->mask) {
    VAR_12 = FUNC_3(VAR_12->next);
    goto next_knode;
   }




  }

  VAR_10 = FUNC_3(VAR_12->ht_down);
  if (!VAR_10) {
check_terminal:
   if (VAR_12->sel.flags & VAR_4) {

    *VAR_8 = VAR_12->res;
    if (!FUNC_9(VAR_6, VAR_12->ifindex)) {
     VAR_12 = FUNC_3(VAR_12->next);
     goto next_knode;
    }



    VAR_17 = FUNC_8(VAR_6, &VAR_12->exts, VAR_8);
    if (VAR_17 < 0) {
     VAR_12 = FUNC_3(VAR_12->next);
     goto next_knode;
    }

    return VAR_17;
   }
   VAR_12 = FUNC_3(VAR_12->next);
   goto next_knode;
  }


  if (VAR_13 >= VAR_2)
   goto deadloop;
  VAR_9[VAR_13].knode = VAR_12;
  VAR_9[VAR_13].off = VAR_11;
  VAR_13++;

  VAR_10 = FUNC_3(VAR_12->ht_down);
  VAR_15 = 0;
  if (VAR_10->divisor) {
   __be32 *VAR_22, VAR_23;

   VAR_22 = FUNC_4(VAR_6, VAR_11 + VAR_12->sel.hoff, 4,
        &VAR_23);
   if (!VAR_22)
    goto out;
   VAR_15 = VAR_10->divisor & FUNC_10(*VAR_22, &VAR_12->sel,
         VAR_12->fshift);
  }
  if (!(VAR_12->sel.flags & (VAR_5 | VAR_3 | VAR_1)))
   goto next_ht;

  if (VAR_12->sel.flags & (VAR_3 | VAR_5)) {
   VAR_14 = VAR_12->sel.off + 3;
   if (VAR_12->sel.flags & VAR_5) {
    __be16 *VAR_24, VAR_25;

    VAR_24 = FUNC_4(VAR_6,
         VAR_11 + VAR_12->sel.offoff,
         2, &VAR_25);
    if (!VAR_24)
     goto out;
    VAR_14 += FUNC_2(VAR_12->sel.offmask & *VAR_24) >>
     VAR_12->sel.offshift;
   }
   VAR_14 &= ~3;
  }
  if (VAR_12->sel.flags & VAR_1) {
   VAR_11 += VAR_14;
   VAR_14 = 0;
  }

  if (VAR_11 < VAR_6->len)
   goto next_ht;
 }


 if (VAR_13--) {
  VAR_12 = VAR_9[VAR_13].knode;
  VAR_10 = FUNC_3(VAR_12->ht_up);
  VAR_11 = VAR_9[VAR_13].off;
  goto check_terminal;
 }
out:
 return -1;

deadloop:
 FUNC_1("cls_u32: dead loop\n");
 return -1;
}
