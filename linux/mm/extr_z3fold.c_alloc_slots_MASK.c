
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int c_handle; } ;
struct z3fold_buddy_slots {unsigned long pool; int slot; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct z3fold_buddy_slots* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline struct z3fold_buddy_slots *FUNC_2(struct z3fold_pool *VAR_2,
       gfp_t VAR_3)
{
 struct z3fold_buddy_slots *VAR_4;

 VAR_4 = FUNC_0(VAR_2->c_handle,
     (VAR_3 & ~(VAR_0 | VAR_1)));

 if (VAR_4) {
  FUNC_1(VAR_4->slot, 0, sizeof(VAR_4->slot));
  VAR_4->pool = (unsigned long)VAR_2;
 }

 return VAR_4;
}
