
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_effect {TYPE_3__* cur_pass; } ;
struct darray {int dummy; } ;
struct TYPE_5__ {struct darray da; } ;
struct TYPE_4__ {struct darray da; } ;
struct TYPE_6__ {TYPE_2__ pixelshader_params; TYPE_1__ vertshader_params; } ;


 int FUNC_0 (struct darray*) ;
 int FUNC_1 (struct darray*,int) ;

__attribute__((used)) static inline void FUNC_2(struct gs_effect *VAR_0,
         bool VAR_1)
{
 struct darray *VAR_2, *VAR_3;

 if (!VAR_0->cur_pass)
  return;

 VAR_2 = &VAR_0->cur_pass->vertshader_params.da;
 VAR_3 = &VAR_0->cur_pass->pixelshader_params.da;

 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_3, VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
}
