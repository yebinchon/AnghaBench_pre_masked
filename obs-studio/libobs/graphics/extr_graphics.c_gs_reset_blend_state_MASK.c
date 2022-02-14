
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ src_c; scalar_t__ dest_c; scalar_t__ src_a; scalar_t__ dest_a; int enabled; } ;
struct TYPE_5__ {TYPE_1__ cur_blend_state; } ;
typedef TYPE_2__ graphics_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_3 ;

void FUNC_3(void)
{
 graphics_t *VAR_4 = VAR_3;

 if (!FUNC_2("gs_preprocessor_name"))
  return;

 if (!VAR_4->cur_blend_state.enabled)
  FUNC_1(1);

 if (VAR_4->cur_blend_state.src_c != VAR_2 ||
     VAR_4->cur_blend_state.dest_c != VAR_0 ||
     VAR_4->cur_blend_state.src_a != VAR_1 ||
     VAR_4->cur_blend_state.dest_a != VAR_0)
  FUNC_0(VAR_2,
        VAR_0, VAR_1,
        VAR_0);
}
