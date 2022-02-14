
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_node {unsigned long gp_seq_needed; struct rcu_node* parent; int gp_seq; } ;
struct rcu_data {unsigned long gp_seq_needed; } ;
struct TYPE_2__ {int gp_flags; int gp_seq; int name; int gp_kthread; int gp_req_activity; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (struct rcu_node*) ;
 int FUNC_6 (struct rcu_node*) ;
 int FUNC_7 (struct rcu_node*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct rcu_node*,struct rcu_data*,unsigned long,int ) ;

__attribute__((used)) static bool FUNC_14(struct rcu_node *VAR_3, struct rcu_data *VAR_4,
         unsigned long VAR_5)
{
 bool VAR_6 = 0;
 struct rcu_node *VAR_7;
 FUNC_5(VAR_3);
 FUNC_13(VAR_3, VAR_4, VAR_5, FUNC_1("Startleaf"));
 for (VAR_7 = VAR_3; 1; VAR_7 = VAR_7->parent) {
  if (VAR_7 != VAR_3)
   FUNC_6(VAR_7);
  if (FUNC_2(VAR_7->gp_seq_needed, VAR_5) ||
      FUNC_10(&VAR_7->gp_seq, VAR_5) ||
      (VAR_7 != VAR_3 &&
       FUNC_11(FUNC_9(&VAR_7->gp_seq)))) {
   FUNC_13(VAR_7, VAR_4, VAR_5,
       FUNC_1("Prestarted"));
   goto unlock_out;
  }
  VAR_7->gp_seq_needed = VAR_5;
  if (FUNC_11(FUNC_9(&VAR_7->gp_seq))) {






   FUNC_13(VAR_3, VAR_4, VAR_5,
       FUNC_1("Startedleaf"));
   goto unlock_out;
  }
  if (VAR_7 != VAR_3 && VAR_7->parent != ((void*)0))
   FUNC_7(VAR_7);
  if (!VAR_7->parent)
   break;
 }


 if (FUNC_8()) {
  FUNC_13(VAR_7, VAR_4, VAR_5, FUNC_1("Startedleafroot"));
  goto unlock_out;
 }
 FUNC_13(VAR_7, VAR_4, VAR_5, FUNC_1("Startedroot"));
 FUNC_4(VAR_2.gp_flags, VAR_2.gp_flags | VAR_0);
 VAR_2.gp_req_activity = VAR_1;
 if (!VAR_2.gp_kthread) {
  FUNC_13(VAR_7, VAR_4, VAR_5, FUNC_1("NoGPkthread"));
  goto unlock_out;
 }
 FUNC_12(VAR_2.name, FUNC_0(VAR_2.gp_seq), FUNC_1("newreq"));
 VAR_6 = 1;
unlock_out:

 if (FUNC_3(VAR_5, VAR_7->gp_seq_needed)) {
  VAR_3->gp_seq_needed = VAR_7->gp_seq_needed;
  VAR_4->gp_seq_needed = VAR_7->gp_seq_needed;
 }
 if (VAR_7 != VAR_3)
  FUNC_7(VAR_7);
 return VAR_6;
}
