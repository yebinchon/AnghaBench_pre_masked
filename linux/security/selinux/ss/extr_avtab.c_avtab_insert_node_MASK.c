
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; struct avtab_extended_perms* xperms; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct avtab_key {int specified; } ;
struct avtab_node {struct avtab_node* next; TYPE_2__ datum; struct avtab_key key; } ;
struct avtab_extended_perms {int dummy; } ;
struct TYPE_6__ {int data; struct avtab_extended_perms* xperms; } ;
struct avtab_datum {TYPE_3__ u; } ;
struct avtab {int nel; struct avtab_node** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct avtab_node*) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct avtab_node*
FUNC_2(struct avtab *VAR_4, int VAR_5,
    struct avtab_node *VAR_6, struct avtab_node *VAR_7,
    struct avtab_key *VAR_8, struct avtab_datum *VAR_9)
{
 struct avtab_node *VAR_10;
 struct avtab_extended_perms *VAR_11;
 VAR_10 = FUNC_1(VAR_2, VAR_1);
 if (VAR_10 == ((void*)0))
  return ((void*)0);
 VAR_10->key = *VAR_8;

 if (VAR_8->specified & VAR_0) {
  VAR_11 = FUNC_1(VAR_3, VAR_1);
  if (VAR_11 == ((void*)0)) {
   FUNC_0(VAR_2, VAR_10);
   return ((void*)0);
  }
  *VAR_11 = *(VAR_9->u.xperms);
  VAR_10->datum.u.xperms = VAR_11;
 } else {
  VAR_10->datum.u.data = VAR_9->u.data;
 }

 if (VAR_6) {
  VAR_10->next = VAR_6->next;
  VAR_6->next = VAR_10;
 } else {
  struct avtab_node **VAR_12 = &VAR_4->htable[VAR_5];

  VAR_10->next = *VAR_12;
  *VAR_12 = VAR_10;
 }

 VAR_4->nel++;
 return VAR_10;
}
