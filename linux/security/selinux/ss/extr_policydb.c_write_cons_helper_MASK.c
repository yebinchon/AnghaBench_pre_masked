
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policydb {int policyvers; } ;
struct constraint_node {int permissions; struct constraint_expr* expr; struct constraint_node* next; } ;
struct constraint_expr {int expr_type; int attr; int op; int type_names; int names; struct constraint_expr* next; } ;
typedef int __le32 ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int,int,void*) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static int FUNC_4(struct policydb *VAR_1, struct constraint_node *VAR_2,
        void *VAR_3)
{
 struct constraint_node *VAR_4;
 struct constraint_expr *VAR_5;
 __le32 VAR_6[3];
 u32 VAR_7;
 int VAR_8;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  VAR_7 = 0;
  for (VAR_5 = VAR_4->expr; VAR_5; VAR_5 = VAR_5->next)
   VAR_7++;
  VAR_6[0] = FUNC_0(VAR_4->permissions);
  VAR_6[1] = FUNC_0(VAR_7);
  VAR_8 = FUNC_2(VAR_6, sizeof(u32), 2, VAR_3);
  if (VAR_8)
   return VAR_8;
  for (VAR_5 = VAR_4->expr; VAR_5; VAR_5 = VAR_5->next) {
   VAR_6[0] = FUNC_0(VAR_5->expr_type);
   VAR_6[1] = FUNC_0(VAR_5->attr);
   VAR_6[2] = FUNC_0(VAR_5->op);
   VAR_8 = FUNC_2(VAR_6, sizeof(u32), 3, VAR_3);
   if (VAR_8)
    return VAR_8;

   switch (VAR_5->expr_type) {
   case 128:
    VAR_8 = FUNC_1(&VAR_5->names, VAR_3);
    if (VAR_8)
     return VAR_8;
    if (VAR_1->policyvers >=
     VAR_0) {
     VAR_8 = FUNC_3(VAR_5->type_names, VAR_3);
     if (VAR_8)
      return VAR_8;
    }
    break;
   default:
    break;
   }
  }
 }

 return 0;
}
