
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int dst_width; scalar_t__ dst; } ;
typedef TYPE_1__ WebPRescaler ;
struct TYPE_7__ {int output_; TYPE_1__* rescaler; } ;
typedef TYPE_2__ VP8LDecoder ;


 int FUNC_0 (int * const,int const,int,int ) ;
 int FUNC_1 (int * const,int const,int) ;
 int FUNC_2 (TYPE_1__* const) ;
 scalar_t__ FUNC_3 (TYPE_1__* const) ;

__attribute__((used)) static int FUNC_4(const VP8LDecoder* const VAR_0, int VAR_1) {
  WebPRescaler* const VAR_2 = VAR_0->rescaler;
  uint32_t* const VAR_3 = (uint32_t*)VAR_2->dst;
  const int VAR_4 = VAR_2->dst_width;
  int VAR_5 = 0;
  while (FUNC_3(VAR_2)) {
    FUNC_2(VAR_2);
    FUNC_1(VAR_3, VAR_4, 1);
    FUNC_0(VAR_3, VAR_4, VAR_1, VAR_0->output_);
    ++VAR_1;
    ++VAR_5;
  }
  return VAR_5;
}
