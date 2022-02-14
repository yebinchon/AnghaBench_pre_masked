
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
typedef int WebPFeatureFlags ;
struct TYPE_2__ {int id; } ;
typedef size_t CHUNK_INDEX ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ FUNC_1 (int const* const,int ,int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static WebPMuxError FUNC_2(const WebPMux* const VAR_4, CHUNK_INDEX VAR_5,
                                  WebPFeatureFlags VAR_6,
                                  uint32_t VAR_7,
                                  int VAR_8, int* VAR_9) {
  const WebPMuxError VAR_10 =
      FUNC_1(VAR_4, VAR_3[VAR_5].id, VAR_9);
  if (VAR_10 != VAR_2) return VAR_10;
  if (VAR_8 > -1 && *VAR_9 > VAR_8) return VAR_1;
  if (VAR_6 != VAR_0 && FUNC_0(VAR_7 & VAR_6, *VAR_9)) {
    return VAR_1;
  }
  return VAR_2;
}
