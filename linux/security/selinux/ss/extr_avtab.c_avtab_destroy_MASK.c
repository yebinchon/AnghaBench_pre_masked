
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct avtab_node* xperms; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct TYPE_4__ {int specified; } ;
struct avtab_node {TYPE_3__ datum; TYPE_1__ key; struct avtab_node* next; } ;
struct avtab {int nslot; scalar_t__ mask; struct avtab_node** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct avtab_node*) ;
 int FUNC_1 (struct avtab_node**) ;

void FUNC_2(struct avtab *VAR_3)
{
 int VAR_4;
 struct avtab_node *VAR_5, *VAR_6;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->nslot; VAR_4++) {
  VAR_5 = VAR_3->htable[VAR_4];
  while (VAR_5) {
   VAR_6 = VAR_5;
   VAR_5 = VAR_5->next;
   if (VAR_6->key.specified & VAR_0)
    FUNC_0(VAR_2,
      VAR_6->datum.u.xperms);
   FUNC_0(VAR_1, VAR_6);
  }
 }
 FUNC_1(VAR_3->htable);
 VAR_3->htable = ((void*)0);
 VAR_3->nslot = 0;
 VAR_3->mask = 0;
}
