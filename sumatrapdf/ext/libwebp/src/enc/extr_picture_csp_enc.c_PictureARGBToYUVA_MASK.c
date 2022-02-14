
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int colorspace; int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;
typedef int WebPEncCSP ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const* const,int const* const,int const* const,int const* const,int,int,float,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(WebPPicture* VAR_4, WebPEncCSP VAR_5,
                             float VAR_6, int VAR_7) {
  if (VAR_4 == ((void*)0)) return 0;
  if (VAR_4->argb == ((void*)0)) {
    return FUNC_2(VAR_4, VAR_1);
  } else if ((VAR_5 & VAR_2) != VAR_3) {
    return FUNC_2(VAR_4, VAR_0);
  } else {
    const uint8_t* const VAR_8 = (const uint8_t*)VAR_4->argb;
    const uint8_t* const VAR_9 = VAR_8 + FUNC_0(0);
    const uint8_t* const VAR_10 = VAR_8 + FUNC_0(1);
    const uint8_t* const VAR_11 = VAR_8 + FUNC_0(2);
    const uint8_t* const VAR_12 = VAR_8 + FUNC_0(3);

    VAR_4->colorspace = VAR_3;
    return FUNC_1(VAR_10, VAR_11, VAR_12, VAR_9, 4, 4 * VAR_4->argb_stride,
                              VAR_6, VAR_7, VAR_4);
  }
}
