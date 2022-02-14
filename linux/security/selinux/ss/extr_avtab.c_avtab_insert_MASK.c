
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct avtab_key*,int ) ;
 struct avtab_node* FUNC_1 (struct avtab*,int,struct avtab_node*,struct avtab_node*,struct avtab_key*,struct avtab_datum*) ;

__attribute__((used)) static int FUNC_2(struct avtab *VAR_6, struct avtab_key *VAR_7, struct avtab_datum *VAR_8)
{
 int VAR_9;
 struct avtab_node *VAR_10, *VAR_11, *VAR_12;
 u16 VAR_13 = VAR_7->specified & ~(VAR_0|VAR_1);

 if (!VAR_6)
  return -VAR_4;

 VAR_9 = FUNC_0(VAR_7, VAR_6->mask);
 for (VAR_10 = ((void*)0), VAR_11 = VAR_6->htable[VAR_9];
      VAR_11;
      VAR_10 = VAR_11, VAR_11 = VAR_11->next) {
  if (VAR_7->source_type == VAR_11->key.source_type &&
      VAR_7->target_type == VAR_11->key.target_type &&
      VAR_7->target_class == VAR_11->key.target_class &&
      (VAR_13 & VAR_11->key.specified)) {

   if (VAR_13 & VAR_2)
    break;
   return -VAR_3;
  }
  if (VAR_7->source_type < VAR_11->key.source_type)
   break;
  if (VAR_7->source_type == VAR_11->key.source_type &&
      VAR_7->target_type < VAR_11->key.target_type)
   break;
  if (VAR_7->source_type == VAR_11->key.source_type &&
      VAR_7->target_type == VAR_11->key.target_type &&
      VAR_7->target_class < VAR_11->key.target_class)
   break;
 }

 VAR_12 = FUNC_1(VAR_6, VAR_9, VAR_10, VAR_11, VAR_7, VAR_8);
 if (!VAR_12)
  return -VAR_5;

 return 0;
}
