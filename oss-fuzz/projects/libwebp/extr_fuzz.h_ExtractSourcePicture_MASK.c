
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int kImagesData ;
struct TYPE_4__ {int width; int height; int argb_stride; } ;
typedef TYPE_1__ WebPPicture ;


 size_t FUNC_0 (size_t const,int const*,size_t,int * const) ;
 int FUNC_1 (TYPE_1__* const,int const* const,int) ;
 int const* VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const* VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const* VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;

__attribute__((used)) static int FUNC_2(WebPPicture* const VAR_9,
                                const uint8_t VAR_10[], size_t VAR_11,
                                uint32_t* const VAR_12) {
  if (VAR_9 == ((void*)0)) return 0;


  const uint8_t* VAR_13[] = {
      VAR_0,
      VAR_3,
      VAR_6
  };
  const int VAR_14[] = {
      VAR_2,
      VAR_5,
      VAR_8
  };
  const int VAR_15[] = {
      VAR_1,
      VAR_4,
      VAR_7
  };
  const size_t VAR_16 = sizeof(VAR_13) / sizeof(VAR_13[0]);
  const size_t VAR_17 = FUNC_0(VAR_16 - 1, VAR_10, VAR_11, VAR_12);
  const uint8_t* const VAR_18 = VAR_13[VAR_17];
  VAR_9->width = VAR_14[VAR_17];
  VAR_9->height = VAR_15[VAR_17];
  VAR_9->argb_stride = VAR_9->width * 4 * sizeof(uint8_t);


  return FUNC_1(VAR_9, VAR_18, VAR_9->argb_stride);
}
