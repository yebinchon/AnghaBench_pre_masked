
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {int segment_; int skip_; int is_i4x4_; int* imodes_; void* uvmode_; } ;
typedef TYPE_3__ VP8MBData ;
struct TYPE_7__ {int* segments_; } ;
struct TYPE_6__ {scalar_t__ update_map_; } ;
struct TYPE_9__ {size_t* intra_t_; size_t* intra_l_; int skip_p_; scalar_t__ use_skip_proba_; TYPE_2__ proba_; TYPE_1__ segment_hdr_; TYPE_3__* mb_data_; } ;
typedef TYPE_4__ VP8Decoder ;
typedef int VP8BitReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int * const,size_t const,char*) ;
 void* VAR_13 ;
 size_t*** VAR_14 ;
 int* VAR_15 ;
 int FUNC_1 (size_t*,size_t* const,int) ;
 int FUNC_2 (size_t* const,int const,int) ;

__attribute__((used)) static void FUNC_3(VP8BitReader* const VAR_16,
                           VP8Decoder* const VAR_17, int VAR_18) {
  uint8_t* const VAR_19 = VAR_17->intra_t_ + 4 * VAR_18;
  uint8_t* const VAR_20 = VAR_17->intra_l_;
  VP8MBData* const VAR_21 = VAR_17->mb_data_ + VAR_18;



  if (VAR_17->segment_hdr_.update_map_) {

    VAR_21->segment_ = !FUNC_0(VAR_16, VAR_17->proba_.segments_[0], "segments")
                    ? FUNC_0(VAR_16, VAR_17->proba_.segments_[1], "segments")
                    : FUNC_0(VAR_16, VAR_17->proba_.segments_[2], "segments") + 2;
  } else {
    VAR_21->segment_ = 0;
  }
  if (VAR_17->use_skip_proba_) VAR_21->skip_ = FUNC_0(VAR_16, VAR_17->skip_p_, "skip");

  VAR_21->is_i4x4_ = !FUNC_0(VAR_16, 145, "block-size");
  if (!VAR_21->is_i4x4_) {

    const int VAR_22 =
        FUNC_0(VAR_16, 156, "pred-modes") ?
            (FUNC_0(VAR_16, 128, "pred-modes") ? VAR_12 : VAR_11) :
            (FUNC_0(VAR_16, 163, "pred-modes") ? VAR_13 : VAR_10);
    VAR_21->imodes_[0] = VAR_22;
    FUNC_2(VAR_19, VAR_22, 4 * sizeof(*VAR_19));
    FUNC_2(VAR_20, VAR_22, 4 * sizeof(*VAR_20));
  } else {
    uint8_t* VAR_23 = VAR_21->imodes_;
    int VAR_24;
    for (VAR_24 = 0; VAR_24 < 4; ++VAR_24) {
      int VAR_25 = VAR_20[VAR_24];
      int VAR_26;
      for (VAR_26 = 0; VAR_26 < 4; ++VAR_26) {
        const uint8_t* const VAR_27 = VAR_14[VAR_19[VAR_26]][VAR_25];
        VAR_25 = !FUNC_0(VAR_16, VAR_27[0], "pred-modes") ? VAR_0 :
                  !FUNC_0(VAR_16, VAR_27[1], "pred-modes") ? VAR_6 :
                    !FUNC_0(VAR_16, VAR_27[2], "pred-modes") ? VAR_7 :
                      !FUNC_0(VAR_16, VAR_27[3], "pred-modes") ?
                        (!FUNC_0(VAR_16, VAR_27[4], "pred-modes") ? VAR_2 :
                          (!FUNC_0(VAR_16, VAR_27[5], "pred-modes") ? VAR_5
                                                                 : VAR_9)) :
                        (!FUNC_0(VAR_16, VAR_27[6], "pred-modes") ? VAR_4 :
                          (!FUNC_0(VAR_16, VAR_27[7], "pred-modes") ? VAR_8 :
                            (!FUNC_0(VAR_16, VAR_27[8], "pred-modes") ? VAR_1
                                                                   : VAR_3))
                        );

        VAR_19[VAR_26] = VAR_25;
      }
      FUNC_1(VAR_23, VAR_19, 4 * sizeof(*VAR_19));
      VAR_23 += 4;
      VAR_20[VAR_24] = VAR_25;
    }
  }

  VAR_21->uvmode_ = !FUNC_0(VAR_16, 142, "pred-modes-uv") ? VAR_10
                 : !FUNC_0(VAR_16, 114, "pred-modes-uv") ? VAR_13
                 : FUNC_0(VAR_16, 183, "pred-modes-uv") ? VAR_12 : VAR_11;
}
