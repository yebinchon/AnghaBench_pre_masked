
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct TYPE_4__ {TYPE_1__ work; } ;
struct srcu_struct {unsigned long* srcu_have_cbs; unsigned long srcu_gp_seq; unsigned long srcu_gp_seq_needed_exp; unsigned long srcu_gp_seq_needed; TYPE_2__ work; int * srcu_data_have_cbs; struct srcu_struct* srcu_parent; } ;
struct srcu_node {unsigned long* srcu_have_cbs; unsigned long srcu_gp_seq; unsigned long srcu_gp_seq_needed_exp; unsigned long srcu_gp_seq_needed; TYPE_2__ work; int * srcu_data_have_cbs; struct srcu_node* srcu_parent; } ;
struct srcu_data {int grpmask; struct srcu_struct* mynode; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long*,unsigned long) ;
 scalar_t__ FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long*,unsigned long) ;
 int FUNC_12 (struct srcu_struct*,unsigned long) ;
 int FUNC_13 (struct srcu_struct*,unsigned long) ;
 int VAR_3 ;
 int FUNC_14 (struct srcu_struct*,struct srcu_struct*,unsigned long) ;
 int FUNC_15 (struct srcu_struct*) ;
 int FUNC_16 (struct srcu_struct*) ;
 int VAR_4 ;
 int FUNC_17 (struct srcu_data*,int ) ;

__attribute__((used)) static void FUNC_18(struct srcu_struct *VAR_5, struct srcu_data *VAR_6,
     unsigned long VAR_7, bool VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = FUNC_8(VAR_7) % FUNC_0(VAR_6->mynode->srcu_have_cbs);
 struct srcu_node *VAR_11 = VAR_6->mynode;
 unsigned long VAR_12;


 for (; VAR_11 != ((void*)0); VAR_11 = VAR_11->srcu_parent) {
  if (FUNC_9(&VAR_5->srcu_gp_seq, VAR_7) && VAR_11 != VAR_6->mynode)
   return;
  FUNC_12(VAR_11, VAR_9);
  if (FUNC_1(VAR_11->srcu_have_cbs[VAR_10], VAR_7)) {
   VAR_12 = VAR_11->srcu_have_cbs[VAR_10];
   if (VAR_11 == VAR_6->mynode && VAR_12 == VAR_7)
    VAR_11->srcu_data_have_cbs[VAR_10] |= VAR_6->grpmask;
   FUNC_13(VAR_11, VAR_9);
   if (VAR_11 == VAR_6->mynode && VAR_12 != VAR_7) {
    FUNC_17(VAR_6, VAR_8
          ? VAR_0
          : 0);
    return;
   }
   if (!VAR_8)
    FUNC_14(VAR_5, VAR_11, VAR_7);
   return;
  }
  VAR_11->srcu_have_cbs[VAR_10] = VAR_7;
  if (VAR_11 == VAR_6->mynode)
   VAR_11->srcu_data_have_cbs[VAR_10] |= VAR_6->grpmask;
  if (!VAR_8 && FUNC_2(VAR_11->srcu_gp_seq_needed_exp, VAR_7))
   VAR_11->srcu_gp_seq_needed_exp = VAR_7;
  FUNC_13(VAR_11, VAR_9);
 }


 FUNC_12(VAR_5, VAR_9);
 if (FUNC_2(VAR_5->srcu_gp_seq_needed, VAR_7)) {




  FUNC_11(&VAR_5->srcu_gp_seq_needed, VAR_7);
 }
 if (!VAR_8 && FUNC_2(VAR_5->srcu_gp_seq_needed_exp, VAR_7))
  VAR_5->srcu_gp_seq_needed_exp = VAR_7;


 if (!FUNC_9(&VAR_5->srcu_gp_seq, VAR_7) &&
     FUNC_10(VAR_5->srcu_gp_seq) == VAR_1) {
  FUNC_3(FUNC_1(VAR_5->srcu_gp_seq, VAR_5->srcu_gp_seq_needed));
  FUNC_16(VAR_5);
  if (FUNC_4(VAR_4))
   FUNC_7(VAR_2, &VAR_5->work,
        FUNC_15(VAR_5));
  else if (FUNC_6(&VAR_5->work.work.entry))
   FUNC_5(&VAR_5->work.work.entry, &VAR_3);
 }
 FUNC_13(VAR_5, VAR_9);
}
