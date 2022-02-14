
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dq_uv_ac_; int dq_uv_dc_; int dq_y2_ac_; int dq_y2_dc_; int dq_y1_dc_; int base_quant_; } ;
typedef TYPE_1__ VP8Encoder ;
typedef int VP8BitWriter ;


 int FUNC_0 (int * const,int ,int) ;
 int FUNC_1 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_2(VP8BitWriter* const VAR_0,
                     const VP8Encoder* const VAR_1) {
  FUNC_0(VAR_0, VAR_1->base_quant_, 7);
  FUNC_1(VAR_0, VAR_1->dq_y1_dc_, 4);
  FUNC_1(VAR_0, VAR_1->dq_y2_dc_, 4);
  FUNC_1(VAR_0, VAR_1->dq_y2_ac_, 4);
  FUNC_1(VAR_0, VAR_1->dq_uv_dc_, 4);
  FUNC_1(VAR_0, VAR_1->dq_uv_ac_, 4);
}
