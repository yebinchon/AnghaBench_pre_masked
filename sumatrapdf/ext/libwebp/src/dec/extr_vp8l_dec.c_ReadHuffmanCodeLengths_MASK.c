
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ bit_pos_; } ;
struct TYPE_10__ {int status_; TYPE_2__ br_; } ;
typedef TYPE_1__ VP8LDecoder ;
typedef TYPE_2__ VP8LBitReader ;
struct TYPE_12__ {int value; scalar_t__ bits; } ;
typedef TYPE_3__ HuffmanCode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int const* const,int ) ;
 int FUNC_1 (TYPE_2__* const) ;
 size_t FUNC_2 (TYPE_2__* const) ;
 int const FUNC_3 (TYPE_2__* const,int const) ;
 int FUNC_4 (TYPE_2__* const,scalar_t__) ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_5(
    VP8LDecoder* const VAR_9, const int* const VAR_10,
    int VAR_11, int* const VAR_12) {
  int VAR_13 = 0;
  VP8LBitReader* const VAR_14 = &VAR_9->br_;
  int VAR_15;
  int VAR_16;
  int VAR_17 = VAR_0;
  HuffmanCode VAR_18[1 << VAR_1];

  if (!FUNC_0(VAR_18, VAR_1,
                             VAR_10,
                             VAR_3)) {
    goto End;
  }

  if (FUNC_3(VAR_14, 1)) {
    const int VAR_19 = 2 + 2 * FUNC_3(VAR_14, 3);
    VAR_16 = 2 + FUNC_3(VAR_14, VAR_19);
    if (VAR_16 > VAR_11) {
      goto End;
    }
  } else {
    VAR_16 = VAR_11;
  }

  VAR_15 = 0;
  while (VAR_15 < VAR_11) {
    const HuffmanCode* VAR_20;
    int VAR_21;
    if (VAR_16-- == 0) break;
    FUNC_1(VAR_14);
    VAR_20 = &VAR_18[FUNC_2(VAR_14) & VAR_2];
    FUNC_4(VAR_14, VAR_14->bit_pos_ + VAR_20->bits);
    VAR_21 = VAR_20->value;
    if (VAR_21 < VAR_6) {
      VAR_12[VAR_15++] = VAR_21;
      if (VAR_21 != 0) VAR_17 = VAR_21;
    } else {
      const int VAR_22 = (VAR_21 == VAR_7);
      const int VAR_23 = VAR_21 - VAR_6;
      const int VAR_24 = VAR_5[VAR_23];
      const int VAR_25 = VAR_8[VAR_23];
      int VAR_26 = FUNC_3(VAR_14, VAR_24) + VAR_25;
      if (VAR_15 + VAR_26 > VAR_11) {
        goto End;
      } else {
        const int VAR_27 = VAR_22 ? VAR_17 : 0;
        while (VAR_26-- > 0) VAR_12[VAR_15++] = VAR_27;
      }
    }
  }
  VAR_13 = 1;

 End:
  if (!VAR_13) VAR_9->status_ = VAR_4;
  return VAR_13;
}
