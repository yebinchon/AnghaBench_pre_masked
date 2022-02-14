
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * block_count; int coded_size; int ** residual_bytes; int * segment_quant; int * segment_level; } ;
typedef TYPE_2__ WebPAuxStats ;
struct TYPE_9__ {int percent_; TYPE_4__* pic_; int * block_count_; int coded_size_; int ** residual_bytes_; TYPE_1__* dqm_; } ;
typedef TYPE_3__ VP8Encoder ;
struct TYPE_10__ {TYPE_2__* stats; } ;
struct TYPE_7__ {int quant_; int fstrength_; } ;


 int FUNC_0 (TYPE_3__* const) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int,int *) ;

__attribute__((used)) static void FUNC_2(VP8Encoder* const VAR_1) {

  WebPAuxStats* const VAR_2 = VAR_1->pic_->stats;
  if (VAR_2 != ((void*)0)) {
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
      VAR_2->segment_level[VAR_3] = VAR_1->dqm_[VAR_3].fstrength_;
      VAR_2->segment_quant[VAR_3] = VAR_1->dqm_[VAR_3].quant_;
      for (VAR_4 = 0; VAR_4 <= 2; ++VAR_4) {
        VAR_2->residual_bytes[VAR_4][VAR_3] = VAR_1->residual_bytes_[VAR_4][VAR_3];
      }
    }
    FUNC_0(VAR_1);
    VAR_2->coded_size = VAR_1->coded_size_;
    for (VAR_3 = 0; VAR_3 < 3; ++VAR_3) {
      VAR_2->block_count[VAR_3] = VAR_1->block_count_[VAR_3];
    }
  }



}
