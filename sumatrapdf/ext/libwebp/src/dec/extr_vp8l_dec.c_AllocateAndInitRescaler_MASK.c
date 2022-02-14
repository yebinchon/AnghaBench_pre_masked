
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int rescaler_t ;
typedef int WebPRescaler ;
struct TYPE_5__ {int * rescaler; int * rescaler_memory; int status_; } ;
typedef TYPE_1__ VP8LDecoder ;
struct TYPE_6__ {int mb_w; int scaled_width; int mb_h; int scaled_height; } ;
typedef TYPE_2__ VP8Io ;


 int VAR_0 ;
 int FUNC_0 (int *,int const,int const,int *,int const,int const,int ,int const,int *) ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(VP8LDecoder* const VAR_1, VP8Io* const VAR_2) {
  const int VAR_3 = 4;
  const int VAR_4 = VAR_2->mb_w;
  const int VAR_5 = VAR_2->scaled_width;
  const int VAR_6 = VAR_2->mb_h;
  const int VAR_7 = VAR_2->scaled_height;
  const uint64_t VAR_8 = 2 * VAR_3 * (uint64_t)VAR_5;
  rescaler_t* VAR_9;
  const uint64_t VAR_10 = (uint64_t)VAR_5;
  uint32_t* VAR_11;
  const uint64_t VAR_12 = sizeof(*VAR_1->rescaler) +
                               VAR_8 * sizeof(*VAR_9) +
                               VAR_10 * sizeof(*VAR_11);
  uint8_t* VAR_13 = (uint8_t*)FUNC_1(VAR_12, sizeof(*VAR_13));
  if (VAR_13 == ((void*)0)) {
    VAR_1->status_ = VAR_0;
    return 0;
  }
  FUNC_2(VAR_1->rescaler_memory == ((void*)0));
  VAR_1->rescaler_memory = VAR_13;

  VAR_1->rescaler = (WebPRescaler*)VAR_13;
  VAR_13 += sizeof(*VAR_1->rescaler);
  VAR_9 = (rescaler_t*)VAR_13;
  VAR_13 += VAR_8 * sizeof(*VAR_9);
  VAR_11 = (uint32_t*)VAR_13;

  FUNC_0(VAR_1->rescaler, VAR_4, VAR_6, (uint8_t*)VAR_11,
                   VAR_5, VAR_7, 0, VAR_3, VAR_9);
  return 1;
}
