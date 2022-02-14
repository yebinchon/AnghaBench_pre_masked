
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vp8_frm_hdr ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int width; int height; int (* writer ) (int*,int,TYPE_1__ const* const) ;} ;
typedef TYPE_1__ WebPPicture ;
typedef int WebPEncodingError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,TYPE_1__ const* const) ;

__attribute__((used)) static WebPEncodingError FUNC_1(const WebPPicture* const VAR_6,
                                           int VAR_7, size_t VAR_8) {
  uint8_t VAR_9[VAR_3];
  uint32_t VAR_10;

  if (VAR_8 >= VAR_4) {
    return VAR_1;
  }


  VAR_10 = 0
       | (VAR_7 << 1)
       | (1 << 4)
       | ((uint32_t)VAR_8 << 5);
  VAR_9[0] = (VAR_10 >> 0) & 0xff;
  VAR_9[1] = (VAR_10 >> 8) & 0xff;
  VAR_9[2] = (VAR_10 >> 16) & 0xff;

  VAR_9[3] = (VAR_5 >> 16) & 0xff;
  VAR_9[4] = (VAR_5 >> 8) & 0xff;
  VAR_9[5] = (VAR_5 >> 0) & 0xff;

  VAR_9[6] = VAR_6->width & 0xff;
  VAR_9[7] = VAR_6->width >> 8;
  VAR_9[8] = VAR_6->height & 0xff;
  VAR_9[9] = VAR_6->height >> 8;

  if (!VAR_6->writer(VAR_9, sizeof(VAR_9), VAR_6)) {
    return VAR_0;
  }
  return VAR_2;
}
