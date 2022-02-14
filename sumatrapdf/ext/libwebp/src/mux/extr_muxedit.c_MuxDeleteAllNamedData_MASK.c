
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int WebPMuxError ;
typedef int WebPMux ;
typedef int WebPChunkId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int * const,int const) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static WebPMuxError FUNC_5(WebPMux* const VAR_1, uint32_t VAR_2) {
  const WebPChunkId VAR_3 = FUNC_0(VAR_2);
  FUNC_4(VAR_1 != ((void*)0));
  if (FUNC_2(VAR_3)) return VAR_0;
  return FUNC_1(FUNC_3(VAR_1, VAR_3), VAR_2);
}
