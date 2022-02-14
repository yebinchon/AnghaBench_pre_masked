
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dshash_table ;
struct TYPE_6__ {int * shared_typmod_table; int * shared_record_table; TYPE_1__* shared_typmod_registry; int * segment; int * area; } ;
struct TYPE_5__ {int typmod_table_handle; int record_table_handle; } ;
typedef TYPE_1__ SharedRecordTypmodRegistry ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_6(SharedRecordTypmodRegistry *VAR_6)
{
 MemoryContext VAR_7;
 dshash_table *VAR_8;
 dshash_table *VAR_9;

 FUNC_0(FUNC_1());


 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_0->segment != ((void*)0));
 FUNC_0(VAR_0->area != ((void*)0));
 FUNC_0(VAR_0->shared_typmod_registry == ((void*)0));
 FUNC_0(VAR_0->shared_record_table == ((void*)0));
 FUNC_0(VAR_0->shared_typmod_table == ((void*)0));
 FUNC_0(VAR_1 == 0);

 VAR_7 = FUNC_2(VAR_2);


 VAR_8 = FUNC_4(VAR_0->area,
         &VAR_4,
         VAR_6->record_table_handle,
         VAR_0->area);
 VAR_9 = FUNC_4(VAR_0->area,
         &VAR_5,
         VAR_6->typmod_table_handle,
         ((void*)0));

 FUNC_2(VAR_7);






 FUNC_5(VAR_0->segment,
      VAR_3,
      FUNC_3(VAR_6));





 VAR_0->shared_typmod_registry = VAR_6;
 VAR_0->shared_record_table = VAR_8;
 VAR_0->shared_typmod_table = VAR_9;
}
