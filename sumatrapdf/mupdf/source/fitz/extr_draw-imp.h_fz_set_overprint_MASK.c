
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* mask; } ;
typedef TYPE_1__ fz_overprint ;



__attribute__((used)) static void inline FUNC_0(fz_overprint *VAR_0, int VAR_1)
{
 VAR_0->mask[VAR_1>>5] |= 1<<(VAR_1&31);
}
