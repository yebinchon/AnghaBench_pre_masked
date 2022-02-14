
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fbo; scalar_t__ texture; } ;
typedef TYPE_1__ gs_texture_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;

void FUNC_3(gs_texture_t *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->texture)
  FUNC_2(1, &VAR_0->texture);

 if (VAR_0->fbo)
  FUNC_1(VAR_0->fbo);

 FUNC_0(VAR_0);
}
