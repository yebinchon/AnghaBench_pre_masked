
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_env_var {struct grub_env_var* next; struct grub_env_var** prevp; int name; } ;
struct grub_env_context {struct grub_env_var** vars; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (struct grub_env_context *VAR_0,
   struct grub_env_var *VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_1->name);


  VAR_1->prevp = &VAR_0->vars[VAR_2];
  VAR_1->next = VAR_0->vars[VAR_2];
  if (VAR_1->next)
    VAR_1->next->prevp = &(VAR_1->next);
  VAR_0->vars[VAR_2] = VAR_1;
}
