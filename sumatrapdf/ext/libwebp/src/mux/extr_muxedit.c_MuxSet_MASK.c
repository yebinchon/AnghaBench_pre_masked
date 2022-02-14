
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WebPMuxError ;
struct TYPE_4__ {int unknown_; int xmp_; int exif_; int anim_; int iccp_; int vp8x_; } ;
typedef TYPE_1__ WebPMux ;
typedef int WebPData ;
typedef int WebPChunk ;
struct TYPE_5__ {int id; } ;
typedef size_t CHUNK_INDEX ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static WebPMuxError FUNC_5(WebPMux* const VAR_8, uint32_t VAR_9,
                           const WebPData* const VAR_10, int VAR_11) {
  WebPChunk VAR_12;
  WebPMuxError VAR_13 = VAR_6;
  const CHUNK_INDEX VAR_14 = FUNC_0(VAR_9);
  FUNC_4(VAR_8 != ((void*)0));
  FUNC_4(!FUNC_2(VAR_7[VAR_14].id));

  FUNC_1(&VAR_12);
  FUNC_3(VAR_4, &VAR_8->vp8x_);
  FUNC_3(VAR_2, &VAR_8->iccp_);
  FUNC_3(VAR_0, &VAR_8->anim_);
  FUNC_3(VAR_1, &VAR_8->exif_);
  FUNC_3(VAR_5, &VAR_8->xmp_);
  FUNC_3(VAR_3, &VAR_8->unknown_);
  return VAR_13;
}
