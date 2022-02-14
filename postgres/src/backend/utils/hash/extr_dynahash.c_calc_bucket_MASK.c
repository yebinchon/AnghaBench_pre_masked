
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int high_mask; int max_bucket; int low_mask; } ;
typedef TYPE_1__ HASHHDR ;



__attribute__((used)) static inline uint32
FUNC_0(HASHHDR *VAR_0, uint32 VAR_1)
{
 uint32 VAR_2;

 VAR_2 = VAR_1 & VAR_0->high_mask;
 if (VAR_2 > VAR_0->max_bucket)
  VAR_2 = VAR_2 & VAR_0->low_mask;

 return VAR_2;
}
