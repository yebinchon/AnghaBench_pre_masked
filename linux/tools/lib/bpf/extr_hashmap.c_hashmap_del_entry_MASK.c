
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {struct hashmap_entry* next; } ;



__attribute__((used)) static void FUNC_0(struct hashmap_entry **VAR_0,
         struct hashmap_entry *VAR_1)
{
 *VAR_0 = VAR_1->next;
 VAR_1->next = ((void*)0);
}
