
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int alpha_; int segment_; } ;
typedef TYPE_3__ VP8MBInfo ;
struct TYPE_8__ {int num_segments_; } ;
struct TYPE_11__ {int mb_w_; int mb_h_; TYPE_2__* config_; TYPE_3__* mb_info_; TYPE_1__ segment_hdr_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_9__ {int preprocessing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__* const,int*,int) ;
 int FUNC_1 (TYPE_4__* const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(VP8Encoder* const VAR_3,
                           const int VAR_4[VAR_0 + 1]) {



  const int VAR_5 = (VAR_3->segment_hdr_.num_segments_ < VAR_2) ?
                 VAR_3->segment_hdr_.num_segments_ : VAR_2;
  int VAR_6[VAR_2];
  int VAR_7 = 0;
  int VAR_8[VAR_0 + 1];
  int VAR_9, VAR_10, VAR_11;
  int VAR_12 = 0, VAR_13 = VAR_0, VAR_14;

  int VAR_15[VAR_2], VAR_16[VAR_2];

  FUNC_3(VAR_5 >= 1);
  FUNC_3(VAR_5 <= VAR_2);


  for (VAR_10 = 0; VAR_10 <= VAR_0 && VAR_4[VAR_10] == 0; ++VAR_10) {}
  VAR_12 = VAR_10;
  for (VAR_10 = VAR_0; VAR_10 > VAR_12 && VAR_4[VAR_10] == 0; --VAR_10) {}
  VAR_13 = VAR_10;
  VAR_14 = VAR_13 - VAR_12;


  for (VAR_11 = 0, VAR_10 = 1; VAR_11 < VAR_5; ++VAR_11, VAR_10 += 2) {
    FUNC_3(VAR_10 < 2 * VAR_5);
    VAR_6[VAR_11] = VAR_12 + (VAR_10 * VAR_14) / (2 * VAR_5);
  }

  for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
    int VAR_17;
    int VAR_18;

    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
      VAR_15[VAR_10] = 0;
      VAR_16[VAR_10] = 0;
    }

    VAR_10 = 0;
    for (VAR_9 = VAR_12; VAR_9 <= VAR_13; ++VAR_9) {
      if (VAR_4[VAR_9]) {
        while (VAR_10 + 1 < VAR_5 && FUNC_2(VAR_9 - VAR_6[VAR_10 + 1]) < FUNC_2(VAR_9 - VAR_6[VAR_10])) {
          VAR_10++;
        }
        VAR_8[VAR_9] = VAR_10;

        VAR_16[VAR_10] += VAR_9 * VAR_4[VAR_9];
        VAR_15[VAR_10] += VAR_4[VAR_9];
      }
    }


    VAR_18 = 0;
    VAR_7 = 0;
    VAR_17 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
      if (VAR_15[VAR_10]) {
        const int VAR_19 = (VAR_16[VAR_10] + VAR_15[VAR_10] / 2) / VAR_15[VAR_10];
        VAR_18 += FUNC_2(VAR_6[VAR_10] - VAR_19);
        VAR_6[VAR_10] = VAR_19;
        VAR_7 += VAR_19 * VAR_15[VAR_10];
        VAR_17 += VAR_15[VAR_10];
      }
    }
    VAR_7 = (VAR_7 + VAR_17 / 2) / VAR_17;
    if (VAR_18 < 5) break;
  }


  for (VAR_10 = 0; VAR_10 < VAR_3->mb_w_ * VAR_3->mb_h_; ++VAR_10) {
    VP8MBInfo* const VAR_20 = &VAR_3->mb_info_[VAR_10];
    const int VAR_21 = VAR_20->alpha_;
    VAR_20->segment_ = VAR_8[VAR_21];
    VAR_20->alpha_ = VAR_6[VAR_8[VAR_21]];
  }

  if (VAR_5 > 1) {
    const int VAR_22 = (VAR_3->config_->preprocessing & 1);
    if (VAR_22) FUNC_1(VAR_3);
  }

  FUNC_0(VAR_3, VAR_6, VAR_7);
}
