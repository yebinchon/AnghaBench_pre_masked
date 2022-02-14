
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int WebPMuxError ;
struct TYPE_3__ {scalar_t__ size; int const* bytes; } ;
typedef TYPE_1__ WebPData ;
typedef int WebPChunk ;


 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static WebPMuxError FUNC_3(WebPChunk* VAR_5,
                                         const uint8_t* VAR_6, size_t VAR_7,
                                         size_t VAR_8, int VAR_9) {
  uint32_t VAR_10;
  WebPData VAR_11;


  if (VAR_7 < VAR_0) return VAR_4;
  VAR_10 = FUNC_1(VAR_6 + VAR_2);
  if (VAR_10 > VAR_1) return VAR_3;

  {
    const size_t VAR_12 = FUNC_2(VAR_10);
    if (VAR_12 > VAR_8) return VAR_3;
    if (VAR_12 > VAR_7) return VAR_4;
  }


  VAR_11.bytes = VAR_6 + VAR_0;
  VAR_11.size = VAR_10;
  return FUNC_0(VAR_5, &VAR_11, VAR_9, FUNC_1(VAR_6 + 0));
}
