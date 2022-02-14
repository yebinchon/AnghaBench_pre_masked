
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pneigh_entry {struct net_device* dev; struct pneigh_entry* next; } ;
struct net_device {int dummy; } ;
struct neigh_table {int (* pdestructor ) (struct pneigh_entry*) ;int lock; struct pneigh_entry** phash_buckets; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pneigh_entry*) ;
 int FUNC_2 (struct pneigh_entry*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct neigh_table *VAR_2,
        struct net_device *VAR_3)
{
 struct pneigh_entry *VAR_4, **VAR_5, *VAR_6 = ((void*)0);
 u32 VAR_7;

 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  VAR_5 = &VAR_2->phash_buckets[VAR_7];
  while ((VAR_4 = *VAR_5) != ((void*)0)) {
   if (!VAR_3 || VAR_4->dev == VAR_3) {
    *VAR_5 = VAR_4->next;
    VAR_4->next = VAR_6;
    VAR_6 = VAR_4;
    continue;
   }
   VAR_5 = &VAR_4->next;
  }
 }
 FUNC_3(&VAR_2->lock);
 while ((VAR_4 = VAR_6)) {
  VAR_6 = VAR_4->next;
  VAR_4->next = ((void*)0);
  if (VAR_2->pdestructor)
   VAR_2->pdestructor(VAR_4);
  if (VAR_4->dev)
   FUNC_0(VAR_4->dev);
  FUNC_1(VAR_4);
 }
 return -VAR_0;
}
