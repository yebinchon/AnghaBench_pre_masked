
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_entry {void* ptr; } ;
struct hash_table {unsigned int size; struct hash_table_entry* array; } ;



int FUNC_0(const struct hash_table *VAR_0, int (*VAR_1)(void *, void *), void *VAR_2)
{
    int VAR_3 = 0;
    unsigned int VAR_4;
    unsigned int VAR_5 = VAR_0->size;
    struct hash_table_entry *VAR_6 = VAR_0->array;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
     void *VAR_7 = VAR_6->ptr;
     VAR_6++;
     if (VAR_7) {
      int VAR_8 = VAR_1(VAR_7, VAR_2);
      if (VAR_8 < 0)
       return VAR_8;
      VAR_3 += VAR_8;
     }
    }
    return VAR_3;
}
