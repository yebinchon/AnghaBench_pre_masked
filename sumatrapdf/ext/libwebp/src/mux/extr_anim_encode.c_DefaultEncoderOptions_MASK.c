
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bgcolor; scalar_t__ loop_count; } ;
struct TYPE_6__ {scalar_t__ verbose; scalar_t__ allow_mixed; scalar_t__ minimize_size; TYPE_1__ anim_params; } ;
typedef TYPE_2__ WebPAnimEncoderOptions ;


 int FUNC_0 (TYPE_2__* const) ;

__attribute__((used)) static void FUNC_1(WebPAnimEncoderOptions* const VAR_0) {
  VAR_0->anim_params.loop_count = 0;
  VAR_0->anim_params.bgcolor = 0xffffffff;
  VAR_0->minimize_size = 0;
  FUNC_0(VAR_0);
  VAR_0->allow_mixed = 0;
  VAR_0->verbose = 0;
}
