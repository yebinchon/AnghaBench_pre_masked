
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dshash_table_handle ;
struct TYPE_5__ {int find_locked; int find_exclusively_locked; scalar_t__ size_log2; int * buckets; TYPE_4__* control; void* arg; int params; int * area; } ;
typedef TYPE_1__ dshash_table ;
typedef int dshash_parameters ;
typedef int dsa_pointer ;
typedef int dsa_area ;
struct TYPE_6__ {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int) ;

dshash_table *
FUNC_3(dsa_area *VAR_1, const dshash_parameters *VAR_2,
     dshash_table_handle VAR_3, void *VAR_4)
{
 dshash_table *VAR_5;
 dsa_pointer VAR_6;


 VAR_5 = FUNC_2(sizeof(dshash_table));


 VAR_6 = VAR_3;


 VAR_5->area = VAR_1;
 VAR_5->params = *VAR_2;
 VAR_5->arg = VAR_4;
 VAR_5->control = FUNC_1(VAR_1, VAR_6);
 VAR_5->find_locked = 0;
 VAR_5->find_exclusively_locked = 0;
 FUNC_0(VAR_5->control->magic == VAR_0);






 VAR_5->buckets = ((void*)0);
 VAR_5->size_log2 = 0;

 return VAR_5;
}
