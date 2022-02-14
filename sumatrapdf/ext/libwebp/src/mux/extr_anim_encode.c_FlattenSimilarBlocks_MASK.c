
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; int* argb; int argb_stride; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {int const y_offset_; int const height_; int const x_offset_; int const width_; } ;
typedef TYPE_2__ FrameRectangle ;


 scalar_t__ FUNC_0 (int const,int,int const) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const WebPPicture* const VAR_0,
                                const FrameRectangle* const VAR_1,
                                WebPPicture* const VAR_2, float VAR_3) {
  const int VAR_4 = FUNC_1(VAR_3);
  int VAR_5, VAR_6;
  int VAR_7 = 0;
  const int VAR_8 = 8;
  const int VAR_9 = (VAR_1->y_offset_ + VAR_8) & ~(VAR_8 - 1);
  const int VAR_10 = (VAR_1->y_offset_ + VAR_1->height_) & ~(VAR_8 - 1);
  const int VAR_11 = (VAR_1->x_offset_ + VAR_8) & ~(VAR_8 - 1);
  const int VAR_12 = (VAR_1->x_offset_ + VAR_1->width_) & ~(VAR_8 - 1);
  FUNC_2(VAR_0 != ((void*)0) && VAR_2 != ((void*)0) && VAR_1 != ((void*)0));
  FUNC_2(VAR_0->width == VAR_2->width && VAR_0->height == VAR_2->height);
  FUNC_2((VAR_8 & (VAR_8 - 1)) == 0);

  for (VAR_6 = VAR_9; VAR_6 < VAR_10; VAR_6 += VAR_8) {
    for (VAR_5 = VAR_11; VAR_5 < VAR_12; VAR_5 += VAR_8) {
      int VAR_13 = 0;
      int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
      int VAR_17, VAR_18;
      const uint32_t* const VAR_19 = VAR_0->argb + VAR_6 * VAR_0->argb_stride + VAR_5;
      uint32_t* const VAR_20 = VAR_2->argb + VAR_6 * VAR_2->argb_stride + VAR_5;
      for (VAR_18 = 0; VAR_18 < VAR_8; ++VAR_18) {
        for (VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17) {
          const uint32_t VAR_21 = VAR_19[VAR_17 + VAR_18 * VAR_0->argb_stride];
          const int VAR_22 = VAR_21 >> 24;
          if (VAR_22 == 0xff &&
              FUNC_0(VAR_21, VAR_20[VAR_17 + VAR_18 * VAR_2->argb_stride],
                               VAR_4)) {
            ++VAR_13;
            VAR_14 += (VAR_21 >> 16) & 0xff;
            VAR_15 += (VAR_21 >> 8) & 0xff;
            VAR_16 += (VAR_21 >> 0) & 0xff;
          }
        }
      }


      if (VAR_13 == VAR_8 * VAR_8) {
        const uint32_t VAR_23 = (0x00 << 24) |
                               ((VAR_14 / VAR_13) << 16) |
                               ((VAR_15 / VAR_13) << 8) |
                               ((VAR_16 / VAR_13) << 0);
        for (VAR_18 = 0; VAR_18 < VAR_8; ++VAR_18) {
          for (VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17) {
            VAR_20[VAR_17 + VAR_18 * VAR_2->argb_stride] = VAR_23;
          }
        }
        VAR_7 = 1;
      }
    }
  }
  return VAR_7;
}
