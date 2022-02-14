
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ address; scalar_t__ size; scalar_t__ fileOffset; } ;
typedef TYPE_1__ cache_map_t ;
struct TYPE_6__ {size_t mappingCount; } ;
typedef TYPE_2__ cache_hdr_t ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ut64 FUNC_0(uint64_t VAR_1, cache_hdr_t *VAR_2, cache_map_t *VAR_3, RBuffer *VAR_4, ut64 VAR_5, ut32 *VAR_6, ut32 *VAR_7) {
 ut64 VAR_8 = VAR_0;
 uint32_t VAR_9;

 VAR_1 -= VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_2->mappingCount; ++VAR_9) {
  if (VAR_1 >= VAR_3[VAR_9].address && VAR_1 < VAR_3[VAR_9].address + VAR_3[VAR_9].size) {
   VAR_8 = VAR_3[VAR_9].fileOffset + VAR_1 - VAR_3[VAR_9].address;
   if (VAR_6) {
    *VAR_6 = VAR_1 - VAR_3[VAR_9].address;
   }
   if (VAR_7) {
    *VAR_7 = VAR_3[VAR_9].size - (VAR_1 - VAR_3[VAR_9].address);
   }
   break;
  }
 }

 return VAR_8;
}
