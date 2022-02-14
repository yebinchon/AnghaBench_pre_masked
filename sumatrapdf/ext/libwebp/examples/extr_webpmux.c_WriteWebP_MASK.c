
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
typedef int WebPData ;


 char* FUNC_0 (scalar_t__ const) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int * const,int *) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(WebPMux* const VAR_2, const char* VAR_3) {
  int VAR_4;
  WebPData VAR_5;
  const WebPMuxError VAR_6 = FUNC_2(VAR_2, &VAR_5);
  if (VAR_6 != VAR_0) {
    FUNC_4(VAR_1, "Error (%s) assembling the WebP file.\n", FUNC_0(VAR_6));
    return 0;
  }
  VAR_4 = FUNC_3(VAR_3, &VAR_5);
  FUNC_1(&VAR_5);
  return VAR_4;
}
