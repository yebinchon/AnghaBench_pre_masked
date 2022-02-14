
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int probability ;
struct TYPE_3__ {size_t count; int ** probs; int * symbols; } ;
typedef TYPE_1__ lzma_range_encoder ;



__attribute__((used)) static inline void
FUNC_0(lzma_range_encoder *VAR_0, probability *VAR_1, uint32_t VAR_2)
{
 VAR_0->symbols[VAR_0->count] = VAR_2;
 VAR_0->probs[VAR_0->count] = VAR_1;
 ++VAR_0->count;
}
