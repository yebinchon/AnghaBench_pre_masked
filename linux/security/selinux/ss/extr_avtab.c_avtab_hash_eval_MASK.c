
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avtab_node {struct avtab_node* next; } ;
struct avtab {int nslot; int nel; struct avtab_node** htable; } ;


 int FUNC_0 (char*,char*,int ,int,int,int,unsigned long long) ;

void FUNC_1(struct avtab *VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 unsigned long long VAR_6;
 struct avtab_node *VAR_7;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->nslot; VAR_2++) {
  VAR_7 = VAR_0->htable[VAR_2];
  if (VAR_7) {
   VAR_4++;
   VAR_3 = 0;
   while (VAR_7) {
    VAR_3++;
    VAR_7 = VAR_7->next;
   }

   if (VAR_3 > VAR_5)
    VAR_5 = VAR_3;
   VAR_6 += VAR_3 * VAR_3;
  }
 }

 FUNC_0("SELinux: %s:  %d entries and %d/%d buckets used, "
        "longest chain length %d sum of chain length^2 %llu\n",
        VAR_1, VAR_0->nel, VAR_4, VAR_0->nslot, VAR_5,
        VAR_6);
}
