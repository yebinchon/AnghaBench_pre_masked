
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_2__ {int * shared_typmod_registry; int * shared_typmod_table; int * shared_record_table; } ;
typedef int Datum ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(dsm_segment *VAR_1, Datum VAR_2)
{

 if (VAR_0->shared_record_table != ((void*)0))
 {
  FUNC_0(VAR_0->shared_record_table);
  VAR_0->shared_record_table = ((void*)0);
 }
 if (VAR_0->shared_typmod_table != ((void*)0))
 {
  FUNC_0(VAR_0->shared_typmod_table);
  VAR_0->shared_typmod_table = ((void*)0);
 }
 VAR_0->shared_typmod_registry = ((void*)0);
}
