
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meta_type_ops {int (* destroy ) (int *) ;} ;
struct meta_match {int rvalue; int lvalue; } ;


 int FUNC_0 (struct meta_match*) ;
 struct meta_type_ops* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct meta_match *VAR_0)
{
 if (VAR_0) {
  const struct meta_type_ops *VAR_1 = FUNC_1(&VAR_0->lvalue);

  if (VAR_1 && VAR_1->destroy) {
   VAR_1->destroy(&VAR_0->lvalue);
   VAR_1->destroy(&VAR_0->rvalue);
  }
 }

 FUNC_0(VAR_0);
}
