
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WebPMuxError ;
struct TYPE_4__ {int xmp_; int exif_; int anim_; int iccp_; int vp8x_; } ;
typedef TYPE_1__ WebPMux ;
typedef int WebPData ;
struct TYPE_5__ {int id; } ;
typedef size_t CHUNK_INDEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static WebPMuxError FUNC_4(const WebPMux* const VAR_8, CHUNK_INDEX VAR_9,
                           uint32_t VAR_10, WebPData* const VAR_11) {
  FUNC_3(VAR_8 != ((void*)0));
  FUNC_3(!FUNC_0(VAR_7[VAR_9].id));
  FUNC_2(VAR_11);

  FUNC_1(VAR_4, VAR_8->vp8x_);
  FUNC_1(VAR_2, VAR_8->iccp_);
  FUNC_1(VAR_0, VAR_8->anim_);
  FUNC_1(VAR_1, VAR_8->exif_);
  FUNC_1(VAR_5, VAR_8->xmp_);
  FUNC_3(VAR_9 != VAR_3);
  return VAR_6;
}
