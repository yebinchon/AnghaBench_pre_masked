
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int img_; int alpha_; int header_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef int WebPChunkId ;
typedef int WebPChunk ;





 int FUNC_0 (int ) ;

__attribute__((used)) static WebPChunk** FUNC_1(const WebPMuxImage* const VAR_0,
                                      WebPChunkId VAR_1) {
  FUNC_0(VAR_0 != ((void*)0));
  switch (VAR_1) {
    case 129: return (WebPChunk**)&VAR_0->header_;
    case 130: return (WebPChunk**)&VAR_0->alpha_;
    case 128: return (WebPChunk**)&VAR_0->img_;
    default: return ((void*)0);
  }
}
