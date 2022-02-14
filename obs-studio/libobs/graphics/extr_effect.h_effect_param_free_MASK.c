
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct gs_effect_param* array; } ;
struct gs_effect_param {TYPE_1__ annotations; TYPE_1__ default_val; TYPE_1__ cur_val; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;

__attribute__((used)) static inline void FUNC_2(struct gs_effect_param *VAR_0)
{
 FUNC_0(VAR_0->name);

 FUNC_1(VAR_0->cur_val);
 FUNC_1(VAR_0->default_val);

 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->annotations.num; VAR_1++)
  FUNC_2(VAR_0->annotations.array + VAR_1);

 FUNC_1(VAR_0->annotations);
}
