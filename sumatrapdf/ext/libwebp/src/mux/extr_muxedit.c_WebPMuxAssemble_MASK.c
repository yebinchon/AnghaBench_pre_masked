
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_9__ {int unknown_; int xmp_; int exif_; int images_; int anim_; int iccp_; int vp8x_; } ;
typedef TYPE_1__ WebPMux ;
struct TYPE_10__ {size_t size; int * bytes; } ;
typedef TYPE_2__ WebPData ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,size_t) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned long long,size_t) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;

WebPMuxError FUNC_12(WebPMux* VAR_4, WebPData* VAR_5) {
  size_t VAR_6 = 0;
  uint8_t* VAR_7 = ((void*)0);
  uint8_t* VAR_8 = ((void*)0);
  WebPMuxError VAR_9;

  if (VAR_5 == ((void*)0)) {
    return VAR_1;
  }

  FUNC_11(VAR_5, 0, sizeof(*VAR_5));

  if (VAR_4 == ((void*)0)) {
    return VAR_1;
  }


  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 != VAR_3) return VAR_9;
  VAR_9 = FUNC_2(VAR_4);
  if (VAR_9 != VAR_3) return VAR_9;


  VAR_6 = FUNC_0(VAR_4->vp8x_) + FUNC_0(VAR_4->iccp_)
       + FUNC_0(VAR_4->anim_) + FUNC_3(VAR_4->images_)
       + FUNC_0(VAR_4->exif_) + FUNC_0(VAR_4->xmp_)
       + FUNC_0(VAR_4->unknown_) + VAR_0;

  VAR_7 = (uint8_t*)FUNC_9(1ULL, VAR_6);
  if (VAR_7 == ((void*)0)) return VAR_2;


  VAR_8 = FUNC_6(VAR_7, VAR_6);
  VAR_8 = FUNC_1(VAR_4->vp8x_, VAR_8);
  VAR_8 = FUNC_1(VAR_4->iccp_, VAR_8);
  VAR_8 = FUNC_1(VAR_4->anim_, VAR_8);
  VAR_8 = FUNC_4(VAR_4->images_, VAR_8);
  VAR_8 = FUNC_1(VAR_4->exif_, VAR_8);
  VAR_8 = FUNC_1(VAR_4->xmp_, VAR_8);
  VAR_8 = FUNC_1(VAR_4->unknown_, VAR_8);
  FUNC_10(VAR_8 == VAR_7 + VAR_6);


  VAR_9 = FUNC_7(VAR_4);
  if (VAR_9 != VAR_3) {
    FUNC_8(VAR_7);
    VAR_7 = ((void*)0);
    VAR_6 = 0;
  }


  VAR_5->bytes = VAR_7;
  VAR_5->size = VAR_6;

  return VAR_9;
}
