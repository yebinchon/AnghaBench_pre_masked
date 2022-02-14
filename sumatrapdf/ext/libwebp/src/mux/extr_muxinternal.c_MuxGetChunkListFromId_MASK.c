
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unknown_; int xmp_; int exif_; int anim_; int iccp_; int vp8x_; } ;
typedef TYPE_1__ WebPMux ;
typedef int WebPChunkId ;
typedef int WebPChunk ;







 int FUNC_0 (int ) ;

WebPChunk** FUNC_1(const WebPMux* VAR_0, WebPChunkId VAR_1) {
  FUNC_0(VAR_0 != ((void*)0));
  switch (VAR_1) {
    case 129: return (WebPChunk**)&VAR_0->vp8x_;
    case 130: return (WebPChunk**)&VAR_0->iccp_;
    case 132: return (WebPChunk**)&VAR_0->anim_;
    case 131: return (WebPChunk**)&VAR_0->exif_;
    case 128: return (WebPChunk**)&VAR_0->xmp_;
    default: return (WebPChunk**)&VAR_0->unknown_;
  }
}
