
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int root; int lock; } ;
struct aa_label {int flags; int node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct aa_label*,struct aa_label*) ;
 int FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct aa_label*) ;
 struct aa_labelset* FUNC_4 (struct aa_label*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bool FUNC_7(struct aa_label *VAR_1, struct aa_label *VAR_2)
{
 struct aa_labelset *VAR_3 = FUNC_4(VAR_1);

 FUNC_0(!VAR_3);
 FUNC_0(!VAR_1);
 FUNC_5(&VAR_3->lock);

 if (VAR_2)
  FUNC_1(VAR_1, VAR_2);

 if (!FUNC_3(VAR_1))
  FUNC_2(VAR_1);

 if (VAR_1->flags & VAR_0) {
  FUNC_6(&VAR_1->node, &VAR_3->root);
  VAR_1->flags &= ~VAR_0;
  return 1;
 }

 return 0;
}
