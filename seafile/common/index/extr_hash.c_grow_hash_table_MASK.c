
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_entry {unsigned int hash; void* ptr; } ;
struct hash_table {unsigned int size; scalar_t__ nr; struct hash_table_entry* array; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct hash_table_entry* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct hash_table_entry*) ;
 int FUNC_3 (unsigned int,void*,struct hash_table*) ;

__attribute__((used)) static void FUNC_4(struct hash_table *VAR_0)
{
    unsigned int VAR_1;
    unsigned int VAR_2 = VAR_0->size, VAR_3;
    struct hash_table_entry *VAR_4 = VAR_0->array, *VAR_5;

    VAR_3 = FUNC_0(VAR_2);
    VAR_5 = FUNC_1(sizeof(struct hash_table_entry), VAR_3);
    VAR_0->size = VAR_3;
    VAR_0->array = VAR_5;
    VAR_0->nr = 0;
    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
        unsigned int VAR_6 = VAR_4[VAR_1].hash;
        void *VAR_7 = VAR_4[VAR_1].ptr;
        if (VAR_7)
            FUNC_3(VAR_6, VAR_7, VAR_0);
    }
    FUNC_2(VAR_4);
}
