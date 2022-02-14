
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct selinux_state {int avc; TYPE_3__* ss; } ;
struct TYPE_4__ {int nprim; } ;
struct policydb {struct cond_node* cond_list; TYPE_2__** bool_val_to_struct; TYPE_1__ p_bools; } ;
struct cond_node {struct cond_node* next; } ;
struct TYPE_6__ {int latest_granting; int policy_rwlock; struct policydb policydb; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,int,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (struct policydb*,struct cond_node*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct selinux_state*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct policydb*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct selinux_state *VAR_6, int VAR_7, int *VAR_8)
{
 struct policydb *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;
 struct cond_node *VAR_14;

 FUNC_11(&VAR_6->ss->policy_rwlock);

 VAR_9 = &VAR_6->ss->policydb;

 VAR_11 = -VAR_1;
 VAR_12 = VAR_9->p_bools.nprim;
 if (VAR_7 != VAR_12)
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (!!VAR_8[VAR_10] != VAR_9->bool_val_to_struct[VAR_10]->state) {
   FUNC_3(FUNC_0(), VAR_2,
    VAR_0,
    "bool=%s val=%d old_val=%d auid=%u ses=%u",
    FUNC_10(VAR_9, VAR_3, VAR_10),
    !!VAR_8[VAR_10],
    VAR_9->bool_val_to_struct[VAR_10]->state,
    FUNC_6(&VAR_5, FUNC_1(VAR_4)),
    FUNC_2(VAR_4));
  }
  if (VAR_8[VAR_10])
   VAR_9->bool_val_to_struct[VAR_10]->state = 1;
  else
   VAR_9->bool_val_to_struct[VAR_10]->state = 0;
 }

 for (VAR_14 = VAR_9->cond_list; VAR_14; VAR_14 = VAR_14->next) {
  VAR_11 = FUNC_5(VAR_9, VAR_14);
  if (VAR_11)
   goto out;
 }

 VAR_13 = ++VAR_6->ss->latest_granting;
 VAR_11 = 0;
out:
 FUNC_12(&VAR_6->ss->policy_rwlock);
 if (!VAR_11) {
  FUNC_4(VAR_6->avc, VAR_13);
  FUNC_9(VAR_13);
  FUNC_7(VAR_6, VAR_13);
  FUNC_8();
 }
 return VAR_11;
}
