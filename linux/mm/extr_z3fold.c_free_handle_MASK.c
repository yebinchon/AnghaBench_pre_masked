
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int c_handle; } ;
struct z3fold_buddy_slots {scalar_t__* slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct z3fold_buddy_slots* FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,struct z3fold_buddy_slots*) ;
 struct z3fold_pool* FUNC_3 (struct z3fold_buddy_slots*) ;

__attribute__((used)) static inline void FUNC_4(unsigned long VAR_2)
{
 struct z3fold_buddy_slots *VAR_3;
 int VAR_4;
 bool VAR_5;

 if (VAR_2 & (1 << VAR_1))
  return;

 FUNC_0(*(unsigned long *)VAR_2 == 0);
 *(unsigned long *)VAR_2 = 0;
 VAR_3 = FUNC_1(VAR_2);
 VAR_5 = 1;
 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (VAR_3->slot[VAR_4]) {
   VAR_5 = 0;
   break;
  }
 }

 if (VAR_5) {
  struct z3fold_pool *VAR_6 = FUNC_3(VAR_3);

  FUNC_2(VAR_6->c_handle, VAR_3);
 }
}
