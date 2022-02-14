
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_iter {int last; int index; int * element; struct hash_table const* ht; } ;
struct hash_table {int num_buckets; } ;


 int FUNC_0 (char const*,int) ;

void FUNC_1(const struct hash_table* VAR_0,
                          struct hash_table_iter* VAR_1, const char* VAR_2)
{
    VAR_1->ht = VAR_0;
    if (VAR_2)
    {
        VAR_1->last = FUNC_0(VAR_2, VAR_0->num_buckets);
        VAR_1->index = VAR_1->last - 1;
    }
    else
    {
        VAR_1->last = VAR_0->num_buckets - 1;
        VAR_1->index = -1;
    }
    VAR_1->element = ((void*)0);
}
