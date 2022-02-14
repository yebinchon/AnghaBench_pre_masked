
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int count; scalar_t__* symbols; } ;
typedef TYPE_1__ lzma_range_encoder ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(lzma_range_encoder *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 do {
  VAR_1->symbols[VAR_1->count++]
    = VAR_0 + ((VAR_2 >> --VAR_3) & 1);
 } while (VAR_3 != 0);
}
