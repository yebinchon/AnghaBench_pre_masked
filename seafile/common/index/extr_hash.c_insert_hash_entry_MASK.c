
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_entry {void* ptr; unsigned int hash; } ;
struct hash_table {int nr; } ;


 struct hash_table_entry* FUNC_0 (unsigned int,struct hash_table*) ;

__attribute__((used)) static void **FUNC_1(unsigned int VAR_0, void *VAR_1, struct hash_table *VAR_2)
{
    struct hash_table_entry *VAR_3 = FUNC_0(VAR_0, VAR_2);

    if (!VAR_3->ptr) {
        VAR_3->ptr = VAR_1;
        VAR_3->hash = VAR_0;
        VAR_2->nr++;
        return ((void*)0);
    }
    return &VAR_3->ptr;
}
