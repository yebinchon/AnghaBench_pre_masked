
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int width; int height; scalar_t__ use_argb; scalar_t__ argb; scalar_t__ argb_stride; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (double,double) ;
 scalar_t__ FUNC_1 (double,double) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__ const*,int ,int ,int,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int const*,size_t const,int const*,size_t const,int,int,int,int,float*,float*) ;

int FUNC_8(const WebPPicture* VAR_1, const WebPPicture* VAR_2,
                          int VAR_3, float VAR_4[5]) {
  int VAR_5, VAR_6, VAR_7;
  int VAR_8 = 0;
  WebPPicture VAR_9, VAR_10;
  double VAR_11 = 0., VAR_12 = 0.;
  if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ||
      VAR_1->width != VAR_2->width || VAR_1->height != VAR_2->height ||
      VAR_4 == ((void*)0)) {
    return 0;
  }

  FUNC_2();
  if (!FUNC_4(&VAR_9) || !FUNC_4(&VAR_10)) return 0;
  VAR_5 = VAR_1->width;
  VAR_6 = VAR_1->height;
  if (!FUNC_5(VAR_1, 0, 0, VAR_5, VAR_6, &VAR_9)) goto Error;
  if (!FUNC_5(VAR_2, 0, 0, VAR_5, VAR_6, &VAR_10)) goto Error;


  if (VAR_9 == 0 && !FUNC_6(&VAR_9)) goto Error;
  if (VAR_10 == 0 && !FUNC_6(&VAR_10)) goto Error;
  for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
    float VAR_13;
    const size_t VAR_14 = 4 * (size_t)VAR_9;
    const size_t VAR_15 = 4 * (size_t)VAR_10;

    const int VAR_16 = VAR_7 ^ VAR_0;
    if (!FUNC_7((const uint8_t*)VAR_9 + VAR_16, VAR_14,
                             (const uint8_t*)VAR_10 + VAR_16, VAR_15,
                             VAR_5, VAR_6, 4, VAR_3, &VAR_13, VAR_4 + VAR_7)) {
      goto Error;
    }
    VAR_12 += VAR_13;
    VAR_11 += VAR_5 * VAR_6;
  }

  VAR_4[4] = (VAR_3 == 1) ? (float)FUNC_0(VAR_12, VAR_11)
                           : (float)FUNC_1(VAR_12, VAR_11);
  VAR_8 = 1;

 Error:
  FUNC_3(&VAR_9);
  FUNC_3(&VAR_10);
  return VAR_8;
}
