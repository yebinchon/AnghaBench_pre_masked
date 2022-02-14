
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WebPChunkId ;
struct TYPE_2__ {scalar_t__ id; } ;
typedef int CHUNK_INDEX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static CHUNK_INDEX FUNC_0(WebPChunkId VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_2[VAR_4].id != VAR_1; ++VAR_4) {
    if (VAR_3 == VAR_2[VAR_4].id) return (CHUNK_INDEX)VAR_4;
  }
  return VAR_0;
}
