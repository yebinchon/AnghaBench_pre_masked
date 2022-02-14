
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; int * array; } ;
struct obs_core_audio {TYPE_1__ render_order; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct obs_core_audio *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->render_order.num; VAR_1++)
  FUNC_0(VAR_0->render_order.array[VAR_1]);
}
