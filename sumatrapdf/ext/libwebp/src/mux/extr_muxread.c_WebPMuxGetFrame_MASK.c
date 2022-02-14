
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int * header_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef int WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_9__ {int images_; } ;
typedef TYPE_2__ WebPMux ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__ const**,int ,TYPE_1__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

WebPMuxError FUNC_3(
    const WebPMux* VAR_2, uint32_t VAR_3, WebPMuxFrameInfo* VAR_4) {
  WebPMuxError VAR_5;
  WebPMuxImage* VAR_6;


  if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0)) {
    return VAR_0;
  }


  VAR_5 = FUNC_2((const WebPMuxImage**)&VAR_2->images_, VAR_3, &VAR_6);
  if (VAR_5 != VAR_1) return VAR_5;


  if (VAR_6->header_ == ((void*)0)) {
    return FUNC_1(VAR_6, VAR_4);
  } else {
    return FUNC_0(VAR_6, VAR_4);
  }
}
