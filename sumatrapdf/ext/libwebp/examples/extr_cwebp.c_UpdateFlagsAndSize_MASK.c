
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int size; int * bytes; } ;
typedef TYPE_1__ MetadataPayload ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const MetadataPayload* const VAR_1,
                              int VAR_2, int VAR_3,
                              uint32_t* VAR_4, uint64_t* VAR_5) {
  if (VAR_2 && VAR_1->bytes != ((void*)0) && VAR_1->size > 0) {
    *VAR_4 |= VAR_3;
    *VAR_5 += VAR_0 + VAR_1->size + (VAR_1->size & 1);
    return 1;
  }
  return 0;
}
