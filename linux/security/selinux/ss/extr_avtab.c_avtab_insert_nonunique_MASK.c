
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; int specified; } ;
struct avtab_node {TYPE_1__ key; struct avtab_node* next; } ;
struct avtab_key {int specified; scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; } ;
struct avtab_datum {int dummy; } ;
struct avtab {struct avtab_node** htable; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct avtab_key*,int ) ;
 struct avtab_node* FUNC_1 (struct avtab*,int,struct avtab_node*,struct avtab_node*,struct avtab_key*,struct avtab_datum*) ;

struct avtab_node *
FUNC_2(struct avtab *VAR_2, struct avtab_key *VAR_3, struct avtab_datum *VAR_4)
{
 int VAR_5;
 struct avtab_node *VAR_6, *VAR_7;
 u16 VAR_8 = VAR_3->specified & ~(VAR_0|VAR_1);

 if (!VAR_2)
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_3, VAR_2->mask);
 for (VAR_6 = ((void*)0), VAR_7 = VAR_2->htable[VAR_5];
      VAR_7;
      VAR_6 = VAR_7, VAR_7 = VAR_7->next) {
  if (VAR_3->source_type == VAR_7->key.source_type &&
      VAR_3->target_type == VAR_7->key.target_type &&
      VAR_3->target_class == VAR_7->key.target_class &&
      (VAR_8 & VAR_7->key.specified))
   break;
  if (VAR_3->source_type < VAR_7->key.source_type)
   break;
  if (VAR_3->source_type == VAR_7->key.source_type &&
      VAR_3->target_type < VAR_7->key.target_type)
   break;
  if (VAR_3->source_type == VAR_7->key.source_type &&
      VAR_3->target_type == VAR_7->key.target_type &&
      VAR_3->target_class < VAR_7->key.target_class)
   break;
 }
 return FUNC_1(VAR_2, VAR_5, VAR_6, VAR_7, VAR_3, VAR_4);
}
