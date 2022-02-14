
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policydb {int policyvers; } ;
struct constraint_node {struct constraint_expr* expr; void* permissions; struct constraint_node* next; } ;
struct constraint_expr {int expr_type; int attr; void* type_names; int names; void* op; struct constraint_expr* next; } ;
typedef int __le32 ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,void*) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_6,
    struct constraint_node **VAR_7,
    int VAR_8, int VAR_9, void *VAR_10)
{
 struct constraint_node *VAR_11, *VAR_12;
 struct constraint_expr *VAR_13, *VAR_14;
 __le32 VAR_15[3];
 u32 VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_12 = ((void*)0);
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_4);
  if (!VAR_11)
   return -VAR_3;

  if (VAR_12)
   VAR_12->next = VAR_11;
  else
   *VAR_7 = VAR_11;

  VAR_17 = FUNC_3(VAR_15, VAR_10, (sizeof(u32) * 2));
  if (VAR_17)
   return VAR_17;
  VAR_11->permissions = FUNC_2(VAR_15[0]);
  VAR_16 = FUNC_2(VAR_15[1]);
  VAR_14 = ((void*)0);
  VAR_20 = -1;
  for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
   VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_4);
   if (!VAR_13)
    return -VAR_3;

   if (VAR_14)
    VAR_14->next = VAR_13;
   else
    VAR_11->expr = VAR_13;

   VAR_17 = FUNC_3(VAR_15, VAR_10, (sizeof(u32) * 3));
   if (VAR_17)
    return VAR_17;
   VAR_13->expr_type = FUNC_2(VAR_15[0]);
   VAR_13->attr = FUNC_2(VAR_15[1]);
   VAR_13->op = FUNC_2(VAR_15[2]);

   switch (VAR_13->expr_type) {
   case 129:
    if (VAR_20 < 0)
     return -VAR_2;
    break;
   case 132:
   case 128:
    if (VAR_20 < 1)
     return -VAR_2;
    VAR_20--;
    break;
   case 131:
    if (VAR_20 == (VAR_0 - 1))
     return -VAR_2;
    VAR_20++;
    break;
   case 130:
    if (!VAR_9 && (VAR_13->attr & VAR_1))
     return -VAR_2;
    if (VAR_20 == (VAR_0 - 1))
     return -VAR_2;
    VAR_20++;
    VAR_17 = FUNC_0(&VAR_13->names, VAR_10);
    if (VAR_17)
     return VAR_17;
    if (VAR_6->policyvers >=
     VAR_5) {
      VAR_13->type_names = FUNC_1(sizeof
      (*VAR_13->type_names),
      VAR_4);
     if (!VAR_13->type_names)
      return -VAR_3;
     FUNC_4(VAR_13->type_names);
     VAR_17 = FUNC_5(VAR_13->type_names, VAR_10);
     if (VAR_17)
      return VAR_17;
    }
    break;
   default:
    return -VAR_2;
   }
   VAR_14 = VAR_13;
  }
  if (VAR_20 != 0)
   return -VAR_2;
  VAR_12 = VAR_11;
 }

 return 0;
}
