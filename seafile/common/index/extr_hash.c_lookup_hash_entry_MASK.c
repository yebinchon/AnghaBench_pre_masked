
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_entry {unsigned int hash; scalar_t__ ptr; } ;
struct hash_table {unsigned int size; struct hash_table_entry* array; } ;



__attribute__((used)) static struct hash_table_entry *FUNC_0(unsigned int VAR_0, const struct hash_table *VAR_1)
{
    unsigned int VAR_2 = VAR_1->size, VAR_3 = VAR_0 % VAR_2;
    struct hash_table_entry *VAR_4 = VAR_1->array;

    while (VAR_4[VAR_3].ptr) {
        if (VAR_4[VAR_3].hash == VAR_0)
            break;
        VAR_3++;
        if (VAR_3 >= VAR_2)
            VAR_3 = 0;
    }
    return VAR_4 + VAR_3;
}
