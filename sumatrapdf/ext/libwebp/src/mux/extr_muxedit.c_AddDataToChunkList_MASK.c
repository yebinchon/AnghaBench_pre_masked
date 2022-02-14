
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPData ;
typedef int WebPChunk ;


 scalar_t__ FUNC_0 (int *,int const* const,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static WebPMuxError FUNC_4(
    const WebPData* const VAR_1, int VAR_2, uint32_t VAR_3,
    WebPChunk** VAR_4) {
  WebPChunk VAR_5;
  WebPMuxError VAR_6;
  FUNC_1(&VAR_5);
  VAR_6 = FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3);
  if (VAR_6 != VAR_0) goto Err;
  VAR_6 = FUNC_3(&VAR_5, VAR_4);
  if (VAR_6 != VAR_0) goto Err;
  return VAR_0;
 Err:
  FUNC_2(&VAR_5);
  return VAR_6;
}
