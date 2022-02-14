
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extended_perms_decision {int dummy; } ;
struct TYPE_2__ {int specified; } ;
struct avtab_node {TYPE_1__ key; } ;
struct avtab_key {int specified; } ;
struct avtab {int dummy; } ;


 int VAR_0 ;
 struct avtab_node* FUNC_0 (struct avtab*,struct avtab_key*) ;
 struct avtab_node* FUNC_1 (struct avtab_node*,int ) ;
 int FUNC_2 (struct extended_perms_decision*,struct avtab_node*) ;

void FUNC_3(struct avtab *VAR_1, struct avtab_key *VAR_2,
  struct extended_perms_decision *VAR_3)
{
 struct avtab_node *VAR_4;

 if (!VAR_1 || !VAR_2 || !VAR_3)
  return;

 for (VAR_4 = FUNC_0(VAR_1, VAR_2); VAR_4;
   VAR_4 = FUNC_1(VAR_4, VAR_2->specified)) {
  if (VAR_4->key.specified & VAR_0)
   FUNC_2(VAR_3, VAR_4);
 }
 return;

}
