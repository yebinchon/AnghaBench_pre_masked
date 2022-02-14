
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int WebPChunkId ;
struct TYPE_2__ {scalar_t__ tag; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

WebPChunkId FUNC_0(uint32_t VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_2[VAR_4].tag != VAR_0; ++VAR_4) {
    if (VAR_3 == VAR_2[VAR_4].tag) return VAR_2[VAR_4].id;
  }
  return VAR_1;
}
