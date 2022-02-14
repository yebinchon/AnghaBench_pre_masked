
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; int specified; } ;
struct avtab_node {TYPE_1__ key; struct avtab_node* next; } ;


 int VAR_0 ;
 int VAR_1 ;

struct avtab_node*
FUNC_0(struct avtab_node *VAR_2, int VAR_3)
{
 struct avtab_node *VAR_4;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 &= ~(VAR_0|VAR_1);
 for (VAR_4 = VAR_2->next; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_2->key.source_type == VAR_4->key.source_type &&
      VAR_2->key.target_type == VAR_4->key.target_type &&
      VAR_2->key.target_class == VAR_4->key.target_class &&
      (VAR_3 & VAR_4->key.specified))
   return VAR_4;

  if (VAR_2->key.source_type < VAR_4->key.source_type)
   break;
  if (VAR_2->key.source_type == VAR_4->key.source_type &&
      VAR_2->key.target_type < VAR_4->key.target_type)
   break;
  if (VAR_2->key.source_type == VAR_4->key.source_type &&
      VAR_2->key.target_type == VAR_4->key.target_type &&
      VAR_2->key.target_class < VAR_4->key.target_class)
   break;
 }
 return ((void*)0);
}
