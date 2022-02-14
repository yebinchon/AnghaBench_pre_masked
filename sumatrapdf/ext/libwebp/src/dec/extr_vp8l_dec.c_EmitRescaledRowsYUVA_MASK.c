
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int last_out_row_; TYPE_2__* rescaler; } ;
typedef TYPE_1__ VP8LDecoder ;
struct TYPE_7__ {int src_width; } ;


 scalar_t__ FUNC_0 (TYPE_1__ const* const,int) ;
 int FUNC_1 (int *,int,int ,int const,int ) ;
 int FUNC_2 (TYPE_2__*,int const) ;
 int FUNC_3 (TYPE_2__*,int const,int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const VP8LDecoder* const VAR_0,
                                uint8_t* VAR_1, int VAR_2, int VAR_3) {
  int VAR_4 = 0;
  int VAR_5 = VAR_0->last_out_row_;
  while (VAR_4 < VAR_3) {
    const int VAR_6 = VAR_3 - VAR_4;
    const int VAR_7 = FUNC_2(VAR_0->rescaler, VAR_6);
    int VAR_8;
    FUNC_1(VAR_1, VAR_2, VAR_0->rescaler->src_width, VAR_7, 0);
    VAR_8 =
        FUNC_3(VAR_0->rescaler, VAR_6, VAR_1, VAR_2);
    FUNC_4(VAR_8 == VAR_7);
    VAR_4 += VAR_8;
    VAR_1 += VAR_7 * VAR_2;
    VAR_5 += FUNC_0(VAR_0, VAR_5);
  }
  return VAR_5;
}
