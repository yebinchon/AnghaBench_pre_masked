
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int* segments_; } ;
struct TYPE_8__ {int num_segments_; int update_map_; } ;
struct TYPE_7__ {TYPE_1__* dqm_; TYPE_4__ proba_; TYPE_3__ segment_hdr_; } ;
typedef TYPE_2__ VP8Encoder ;
typedef TYPE_3__ VP8EncSegmentHeader ;
typedef TYPE_4__ VP8EncProba ;
typedef int VP8BitWriter ;
struct TYPE_6__ {int fstrength_; int quant_; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int * const,int const) ;
 int FUNC_1 (int * const,unsigned int,int) ;
 int FUNC_2 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_3(VP8BitWriter* const VAR_1,
                             const VP8Encoder* const VAR_2) {
  const VP8EncSegmentHeader* const VAR_3 = &VAR_2->segment_hdr_;
  const VP8EncProba* const VAR_4 = &VAR_2->proba_;
  if (FUNC_0(VAR_1, (VAR_3->num_segments_ > 1))) {

    const int VAR_5 = 1;
    int VAR_6;
    FUNC_0(VAR_1, VAR_3->update_map_);
    if (FUNC_0(VAR_1, VAR_5)) {

      FUNC_0(VAR_1, 1);
      for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        FUNC_2(VAR_1, VAR_2->dqm_[VAR_6].quant_, 7);
      }
      for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        FUNC_2(VAR_1, VAR_2->dqm_[VAR_6].fstrength_, 6);
      }
    }
    if (VAR_3->update_map_) {
      for (VAR_6 = 0; VAR_6 < 3; ++VAR_6) {
        if (FUNC_0(VAR_1, (VAR_4->segments_[VAR_6] != 255u))) {
          FUNC_1(VAR_1, VAR_4->segments_[VAR_6], 8);
        }
      }
    }
  }
}
