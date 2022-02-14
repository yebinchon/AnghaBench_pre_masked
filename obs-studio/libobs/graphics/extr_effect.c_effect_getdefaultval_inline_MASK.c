
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int array; int num; } ;
struct TYPE_5__ {TYPE_1__ default_val; } ;
typedef TYPE_2__ gs_eparam_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,int ,size_t) ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static inline void FUNC_3(gs_eparam_t *VAR_1, void *VAR_2,
            size_t VAR_3)
{
 if (!VAR_1) {
  FUNC_0(VAR_0, "effect_getdefaultval_inline: invalid param");
  return;
 }

 if (!VAR_2) {
  FUNC_0(VAR_0, "effect_getdefaultval_inline: invalid data");
  return;
 }

 size_t VAR_4 = FUNC_2(VAR_3, VAR_1->default_val.num);

 FUNC_1(VAR_2, VAR_1->default_val.array, VAR_4);
}
