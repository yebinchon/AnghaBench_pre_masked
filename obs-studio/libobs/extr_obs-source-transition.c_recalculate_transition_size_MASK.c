
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ transition_actual_cy; scalar_t__ transition_actual_cx; struct TYPE_7__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(obs_source_t *VAR_0)
{
 uint32_t VAR_1 = 0, VAR_2 = 0;
 obs_source_t *VAR_3;

 FUNC_0(VAR_0);

 for (size_t VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = VAR_0->transition_sources[VAR_4];
  if (VAR_3) {
   uint32_t VAR_5 = FUNC_2(VAR_3);
   uint32_t VAR_6 = FUNC_1(VAR_3);
   if (VAR_5 > VAR_1)
    VAR_1 = VAR_5;
   if (VAR_6 > VAR_2)
    VAR_2 = VAR_6;
  }
 }

 FUNC_3(VAR_0);

 VAR_0->transition_actual_cx = VAR_1;
 VAR_0->transition_actual_cy = VAR_2;
}
