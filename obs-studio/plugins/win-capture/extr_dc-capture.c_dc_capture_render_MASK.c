
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {scalar_t__ texture_written; scalar_t__ valid; } ;
typedef int gs_effect_t ;


 int FUNC_0 (struct dc_capture*,int *) ;

void FUNC_1(struct dc_capture *VAR_0, gs_effect_t *VAR_1)
{
 if (VAR_0->valid && VAR_0->texture_written)
  FUNC_0(VAR_0, VAR_1);
}
