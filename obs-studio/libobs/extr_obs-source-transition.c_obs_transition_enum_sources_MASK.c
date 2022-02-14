
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* transition_sources; } ;
typedef TYPE_1__ obs_source_t ;
typedef int (* obs_source_enum_proc_t ) (TYPE_1__*,scalar_t__,void*) ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(obs_source_t *VAR_0,
     obs_source_enum_proc_t VAR_1, void *VAR_2)
{
 FUNC_0(VAR_0);
 for (size_t VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  if (VAR_0->transition_sources[VAR_3])
   VAR_1(VAR_0, VAR_0->transition_sources[VAR_3],
      VAR_2);
 }
 FUNC_1(VAR_0);
}
