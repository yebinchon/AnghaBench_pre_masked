
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hashtab_node {struct hashtab_node* next; void* datum; void* key; } ;
struct hashtab {scalar_t__ nel; size_t (* hash_value ) (struct hashtab*,void*) ;scalar_t__ (* keycmp ) (struct hashtab*,void*,void*) ;struct hashtab_node** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 struct hashtab_node* FUNC_1 (int ,int ) ;
 size_t FUNC_2 (struct hashtab*,void*) ;
 scalar_t__ FUNC_3 (struct hashtab*,void*,void*) ;
 scalar_t__ FUNC_4 (struct hashtab*,void*,void*) ;

int FUNC_5(struct hashtab *VAR_6, void *VAR_7, void *VAR_8)
{
 u32 VAR_9;
 struct hashtab_node *VAR_10, *VAR_11, *VAR_12;

 FUNC_0();

 if (!VAR_6 || VAR_6->nel == VAR_4)
  return -VAR_1;

 VAR_9 = VAR_6->hash_value(VAR_6, VAR_7);
 VAR_10 = ((void*)0);
 VAR_11 = VAR_6->htable[VAR_9];
 while (VAR_11 && VAR_6->keycmp(VAR_6, VAR_7, VAR_11->key) > 0) {
  VAR_10 = VAR_11;
  VAR_11 = VAR_11->next;
 }

 if (VAR_11 && (VAR_6->keycmp(VAR_6, VAR_7, VAR_11->key) == 0))
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_12->key = VAR_7;
 VAR_12->datum = VAR_8;
 if (VAR_10) {
  VAR_12->next = VAR_10->next;
  VAR_10->next = VAR_12;
 } else {
  VAR_12->next = VAR_6->htable[VAR_9];
  VAR_6->htable[VAR_9] = VAR_12;
 }

 VAR_6->nel++;
 return 0;
}
