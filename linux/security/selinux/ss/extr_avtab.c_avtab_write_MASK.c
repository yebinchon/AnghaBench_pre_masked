
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policydb {int dummy; } ;
struct avtab_node {struct avtab_node* next; } ;
struct avtab {unsigned int nslot; struct avtab_node** htable; int nel; } ;
typedef int __le32 ;


 int FUNC_0 (struct policydb*,struct avtab_node*,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,void*) ;

int FUNC_3(struct policydb *VAR_0, struct avtab *VAR_1, void *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;
 struct avtab_node *VAR_5;
 __le32 VAR_6[1];

 VAR_6[0] = FUNC_1(VAR_1->nel);
 VAR_4 = FUNC_2(VAR_6, sizeof(u32), 1, VAR_2);
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->nslot; VAR_3++) {
  for (VAR_5 = VAR_1->htable[VAR_3]; VAR_5;
       VAR_5 = VAR_5->next) {
   VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_2);
   if (VAR_4)
    return VAR_4;
  }
 }

 return VAR_4;
}
