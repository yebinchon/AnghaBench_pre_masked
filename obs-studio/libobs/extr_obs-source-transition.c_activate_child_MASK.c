
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* transition_source_active; scalar_t__* transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_3(obs_source_t *VAR_0, size_t VAR_1)
{
 bool VAR_2 = 1;

 FUNC_0(VAR_0);

 if (VAR_0->transition_sources[VAR_1] &&
     !VAR_0->transition_source_active[VAR_1]) {

  VAR_2 = FUNC_1(
   VAR_0, VAR_0->transition_sources[VAR_1]);
  if (VAR_2)
   VAR_0->transition_source_active[VAR_1] = 1;
 }

 FUNC_2(VAR_0);

 return VAR_2;
}
