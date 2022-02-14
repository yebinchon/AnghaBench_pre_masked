
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * symbols; } ;
typedef TYPE_1__ lzma_range_encoder ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(lzma_range_encoder *VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < 5; ++VAR_2)
  VAR_1->symbols[VAR_1->count++] = VAR_0;
}
