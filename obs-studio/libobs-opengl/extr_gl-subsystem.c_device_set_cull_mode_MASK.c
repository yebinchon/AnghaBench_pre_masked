
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur_cull_mode; } ;
typedef TYPE_1__ gs_device_t ;
typedef enum gs_cull_mode { ____Placeholder_gs_cull_mode } gs_cull_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(gs_device_t *VAR_6, enum gs_cull_mode VAR_7)
{
 if (VAR_6->cur_cull_mode == VAR_7)
  return;

 if (VAR_6->cur_cull_mode == VAR_5)
  FUNC_2(VAR_1);

 VAR_6->cur_cull_mode = VAR_7;

 if (VAR_7 == VAR_3)
  FUNC_0(VAR_0);
 else if (VAR_7 == VAR_4)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_1);
}
