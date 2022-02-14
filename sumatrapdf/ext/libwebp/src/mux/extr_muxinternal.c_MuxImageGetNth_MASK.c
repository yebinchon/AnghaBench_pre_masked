
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int const WebPMuxImage ;
typedef int WebPMuxError ;


 int FUNC_0 (int const**,int ,int const***) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const**) ;

WebPMuxError FUNC_2(const WebPMuxImage** VAR_2, uint32_t VAR_3,
                            WebPMuxImage** VAR_4) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_4);
  if (!FUNC_0((WebPMuxImage**)VAR_2, VAR_3,
                                (WebPMuxImage***)&VAR_2)) {
    return VAR_0;
  }
  *VAR_4 = (WebPMuxImage*)*VAR_2;
  return VAR_1;
}
