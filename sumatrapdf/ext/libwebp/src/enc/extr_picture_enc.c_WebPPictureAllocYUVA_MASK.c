
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_5__ {int y_stride; int uv_stride; int a_stride; int * a; int * v; int * u; int * y; void* memory_; scalar_t__ colorspace; } ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncCSP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 int FUNC_0 (TYPE_1__* const,int ) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(WebPPicture* const VAR_6, int VAR_7, int VAR_8) {
  const WebPEncCSP VAR_9 =
      (WebPEncCSP)((int)VAR_6->colorspace & VAR_4);
  const int VAR_10 = (int)VAR_6->colorspace & VAR_3;
  const int VAR_11 = VAR_7;
  const int VAR_12 = (int)(((int64_t)VAR_7 + 1) >> 1);
  const int VAR_13 = (int)(((int64_t)VAR_8 + 1) >> 1);
  const int VAR_14 = VAR_12;
  int VAR_15, VAR_16;
  uint64_t VAR_17, VAR_18, VAR_19, VAR_20;
  uint8_t* VAR_21;

  FUNC_4(VAR_6 != ((void*)0));

  FUNC_2(VAR_6->memory_);
  FUNC_1(VAR_6);

  if (VAR_9 != VAR_5) {
    return FUNC_0(VAR_6, VAR_1);
  }


  VAR_15 = VAR_10 ? VAR_7 : 0;
  VAR_16 = VAR_15;
  VAR_17 = (uint64_t)VAR_11 * VAR_8;
  VAR_18 = (uint64_t)VAR_14 * VAR_13;
  VAR_19 = (uint64_t)VAR_16 * VAR_8;

  VAR_20 = VAR_17 + VAR_19 + 2 * VAR_18;


  if (VAR_7 <= 0 || VAR_8 <= 0 ||
      VAR_12 <= 0 || VAR_13 <= 0) {
    return FUNC_0(VAR_6, VAR_0);
  }

  VAR_21 = (uint8_t*)FUNC_3(VAR_20, sizeof(*VAR_21));
  if (VAR_21 == ((void*)0)) {
    return FUNC_0(VAR_6, VAR_2);
  }


  VAR_6->memory_ = (void*)VAR_21;
  VAR_6->y_stride = VAR_11;
  VAR_6->uv_stride = VAR_14;
  VAR_6->a_stride = VAR_16;


  VAR_6->y = VAR_21;
  VAR_21 += VAR_17;

  VAR_6->u = VAR_21;
  VAR_21 += VAR_18;
  VAR_6->v = VAR_21;
  VAR_21 += VAR_18;

  if (VAR_19 > 0) {
    VAR_6->a = VAR_21;
    VAR_21 += VAR_19;
  }
  (void)VAR_21;
  return 1;
}
