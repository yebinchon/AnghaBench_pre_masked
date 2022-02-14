
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int WebPEncodingError ;
struct TYPE_17__ {TYPE_3__* cur_pos; } ;
typedef TYPE_1__ VP8LRefsCursor ;
struct TYPE_18__ {scalar_t__ error_; } ;
typedef TYPE_2__ VP8LBitWriter ;
typedef int VP8LBackwardRefs ;
struct TYPE_19__ {int const len; } ;
typedef TYPE_3__ PixOrCopy ;
typedef int HuffmanTreeCode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const* const) ;
 int FUNC_1 (TYPE_3__ const* const) ;
 scalar_t__ FUNC_2 (TYPE_3__ const* const) ;
 scalar_t__ FUNC_3 (TYPE_3__ const* const) ;
 scalar_t__ FUNC_4 (TYPE_3__ const* const) ;
 int FUNC_5 (TYPE_3__ const* const,int const) ;
 int FUNC_6 (int const,int*,int*,int*) ;
 int FUNC_7 (TYPE_2__* const,int,int) ;
 TYPE_1__ FUNC_8 (int const* const) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (TYPE_2__* const,int const*,int const) ;
 int FUNC_13 (TYPE_2__* const,int const*,int,int,int) ;

__attribute__((used)) static WebPEncodingError FUNC_14(
    VP8LBitWriter* const VAR_3, int VAR_4, int VAR_5,
    const VP8LBackwardRefs* const VAR_6,
    const uint16_t* VAR_7,
    const HuffmanTreeCode* const VAR_8) {
  const int VAR_9 = VAR_5 ? FUNC_11(VAR_4, VAR_5) : 1;
  const int VAR_10 = (VAR_5 == 0) ? 0 : -(1 << VAR_5);

  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = VAR_11 & VAR_10;
  int VAR_14 = VAR_12 & VAR_10;
  int VAR_15 = VAR_7[0];
  const HuffmanTreeCode* VAR_16 = VAR_8 + 5 * VAR_15;
  VP8LRefsCursor VAR_17 = FUNC_8(VAR_6);
  while (FUNC_10(&VAR_17)) {
    const PixOrCopy* const VAR_18 = VAR_17.cur_pos;
    if ((VAR_13 != (VAR_11 & VAR_10)) || (VAR_14 != (VAR_12 & VAR_10))) {
      VAR_13 = VAR_11 & VAR_10;
      VAR_14 = VAR_12 & VAR_10;
      VAR_15 = VAR_7[(VAR_12 >> VAR_5) * VAR_9 +
                                       (VAR_11 >> VAR_5)];
      VAR_16 = VAR_8 + 5 * VAR_15;
    }
    if (FUNC_3(VAR_18)) {
      static const uint8_t VAR_19[] = { 1, 2, 0, 3 };
      int VAR_20;
      for (VAR_20 = 0; VAR_20 < 4; ++VAR_20) {
        const int VAR_21 = FUNC_5(VAR_18, VAR_19[VAR_20]);
        FUNC_12(VAR_3, VAR_16 + VAR_20, VAR_21);
      }
    } else if (FUNC_2(VAR_18)) {
      const int VAR_22 = FUNC_0(VAR_18);
      const int VAR_23 = 256 + VAR_0 + VAR_22;
      FUNC_12(VAR_3, VAR_16, VAR_23);
    } else {
      int VAR_24, VAR_25;
      int VAR_26;

      const int VAR_27 = FUNC_1(VAR_18);
      FUNC_6(VAR_18->len, &VAR_26, &VAR_25, &VAR_24);
      FUNC_13(VAR_3, VAR_16, 256 + VAR_26, VAR_24, VAR_25);




      FUNC_6(VAR_27, &VAR_26, &VAR_25, &VAR_24);
      FUNC_12(VAR_3, VAR_16 + 4, VAR_26);
      FUNC_7(VAR_3, VAR_24, VAR_25);
    }
    VAR_11 += FUNC_4(VAR_18);
    while (VAR_11 >= VAR_4) {
      VAR_11 -= VAR_4;
      ++VAR_12;
    }
    FUNC_9(&VAR_17);
  }
  return VAR_3->error_ ? VAR_1 : VAR_2;
}
