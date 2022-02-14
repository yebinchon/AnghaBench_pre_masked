
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WEBP_CSP_MODE ;
struct TYPE_8__ {TYPE_3__* rescaler; TYPE_1__* output_; } ;
typedef TYPE_2__ VP8LDecoder ;
struct TYPE_9__ {int src_width; } ;
struct TYPE_7__ {int colorspace; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int const,int,int * const) ;
 int FUNC_1 (int * const,int,int ,int const,int ) ;
 int FUNC_2 (TYPE_3__*,int const) ;
 int FUNC_3 (TYPE_3__*,int const,int * const,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const VP8LDecoder* const VAR_0,
                                uint8_t* VAR_1, int VAR_2, int VAR_3,
                                uint8_t* const VAR_4, int VAR_5) {
  const WEBP_CSP_MODE VAR_6 = VAR_0->output_->colorspace;
  int VAR_7 = 0;
  int VAR_8 = 0;
  while (VAR_7 < VAR_3) {
    uint8_t* const VAR_9 = VAR_1 + VAR_7 * VAR_2;
    uint8_t* const VAR_10 = VAR_4 + VAR_8 * VAR_5;
    const int VAR_11 = VAR_3 - VAR_7;
    const int VAR_12 = FUNC_2(VAR_0->rescaler, VAR_11);
    int VAR_13;
    FUNC_4(VAR_12 > 0 && VAR_12 <= VAR_11);
    FUNC_1(VAR_9, VAR_2,
                     VAR_0->rescaler->src_width, VAR_12, 0);
    VAR_13 =
        FUNC_3(VAR_0->rescaler, VAR_11, VAR_9, VAR_2);
    FUNC_4(VAR_13 == VAR_12);
    VAR_7 += VAR_13;
    VAR_8 += FUNC_0(VAR_0->rescaler, VAR_6, VAR_5, VAR_10);
  }
  return VAR_8;
}
