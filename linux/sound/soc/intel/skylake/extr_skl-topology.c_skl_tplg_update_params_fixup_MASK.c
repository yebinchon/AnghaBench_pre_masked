
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skl_pipe_params {scalar_t__ stream; } ;
struct skl_module_fmt {int dummy; } ;
struct skl_module_cfg {int params_fixup; int converter; TYPE_4__* module; } ;
struct TYPE_8__ {TYPE_3__* formats; } ;
struct TYPE_7__ {TYPE_2__* outputs; TYPE_1__* inputs; } ;
struct TYPE_6__ {struct skl_module_fmt fmt; } ;
struct TYPE_5__ {struct skl_module_fmt fmt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skl_module_fmt*,struct skl_pipe_params*,int) ;

__attribute__((used)) static void FUNC_1(struct skl_module_cfg *VAR_1,
  struct skl_pipe_params *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;
 struct skl_module_fmt *VAR_6, *VAR_7;


 VAR_6 = &VAR_1->module->formats[0].inputs[0].fmt;
 VAR_7 = &VAR_1->module->formats[0].outputs[0].fmt;

 if (VAR_2->stream == VAR_0) {
  if (VAR_3) {
   VAR_4 = VAR_1->params_fixup;
   VAR_5 = (~VAR_1->converter) &
     VAR_1->params_fixup;
  } else {
   VAR_5 = VAR_1->params_fixup;
   VAR_4 = (~VAR_1->converter) &
     VAR_1->params_fixup;
  }
 } else {
  if (VAR_3) {
   VAR_5 = VAR_1->params_fixup;
   VAR_4 = (~VAR_1->converter) &
     VAR_1->params_fixup;
  } else {
   VAR_4 = VAR_1->params_fixup;
   VAR_5 = (~VAR_1->converter) &
     VAR_1->params_fixup;
  }
 }

 FUNC_0(VAR_6, VAR_2, VAR_4);
 FUNC_0(VAR_7, VAR_2, VAR_5);
}
