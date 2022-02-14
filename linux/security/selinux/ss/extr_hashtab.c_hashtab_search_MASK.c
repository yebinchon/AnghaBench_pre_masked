
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hashtab_node {void* datum; int key; struct hashtab_node* next; } ;
struct hashtab {size_t (* hash_value ) (struct hashtab*,void const*) ;scalar_t__ (* keycmp ) (struct hashtab*,void const*,int ) ;struct hashtab_node** htable; } ;


 size_t FUNC_0 (struct hashtab*,void const*) ;
 scalar_t__ FUNC_1 (struct hashtab*,void const*,int ) ;
 scalar_t__ FUNC_2 (struct hashtab*,void const*,int ) ;

void *FUNC_3(struct hashtab *VAR_0, const void *VAR_1)
{
 u32 VAR_2;
 struct hashtab_node *VAR_3;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = VAR_0->hash_value(VAR_0, VAR_1);
 VAR_3 = VAR_0->htable[VAR_2];
 while (VAR_3 && VAR_0->keycmp(VAR_0, VAR_1, VAR_3->key) > 0)
  VAR_3 = VAR_3->next;

 if (!VAR_3 || (VAR_0->keycmp(VAR_0, VAR_1, VAR_3->key) != 0))
  return ((void*)0);

 return VAR_3->datum;
}
