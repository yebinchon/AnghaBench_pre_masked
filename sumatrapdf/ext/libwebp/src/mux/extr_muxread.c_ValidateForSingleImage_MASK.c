
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_3__ {int images_; } ;
typedef TYPE_1__ WebPMux ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static WebPMuxError FUNC_1(const WebPMux* const VAR_5) {
  const int VAR_6 = FUNC_0(VAR_5->images_, VAR_1);
  const int VAR_7 = FUNC_0(VAR_5->images_, VAR_0);

  if (VAR_6 == 0) {

    return VAR_3;
  } else if (VAR_6 == 1 && VAR_7 == 0) {

    return VAR_4;
  } else {

    return VAR_2;
  }
}
