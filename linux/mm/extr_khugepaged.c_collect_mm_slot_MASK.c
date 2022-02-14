
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct mm_slot {int mm_node; int hash; struct mm_struct* mm; } ;


 int FUNC_0 (struct mm_slot*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mm_struct*) ;

__attribute__((used)) static void FUNC_6(struct mm_slot *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_1->mm;

 FUNC_4(&VAR_0);

 if (FUNC_2(VAR_2)) {

  FUNC_1(&VAR_1->hash);
  FUNC_3(&VAR_1->mm_node);
  FUNC_0(VAR_1);
  FUNC_5(VAR_2);
 }
}
