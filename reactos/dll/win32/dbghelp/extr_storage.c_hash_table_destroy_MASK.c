
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_elt {int name; struct hash_table_elt* next; } ;
struct hash_table {int num_buckets; struct hash_table_elt** buckets; scalar_t__ num_elts; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct hash_table* VAR_0)
{
}
