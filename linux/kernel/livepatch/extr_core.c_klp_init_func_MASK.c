
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_object {int kobj; } ;
struct klp_func {int patched; int transition; int old_sympos; int old_name; int kobj; int stack_node; int nop; int new_func; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct klp_object *VAR_2, struct klp_func *VAR_3)
{
 if (!VAR_3->old_name)
  return -VAR_0;





 if (!VAR_3->new_func && !VAR_3->nop)
  return -VAR_0;

 if (FUNC_2(VAR_3->old_name) >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_3->stack_node);
 VAR_3->patched = 0;
 VAR_3->transition = 0;






 return FUNC_1(&VAR_3->kobj, &VAR_2->kobj, "%s,%lu",
      VAR_3->old_name,
      VAR_3->old_sympos ? VAR_3->old_sympos : 1);
}
