
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct gs_device {TYPE_1__* cur_render_target; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gs_device const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline uint32_t FUNC_3(const struct gs_device *VAR_1)
{
 if (!VAR_1->cur_render_target)
  return FUNC_0(VAR_1);

 if (VAR_1->cur_render_target->type == VAR_0)
  return FUNC_2(VAR_1->cur_render_target);
 else
  return FUNC_1(VAR_1->cur_render_target);
}
