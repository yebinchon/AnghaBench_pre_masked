
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_separation_behavior ;



__attribute__((used)) static inline fz_separation_behavior
FUNC_0(const fz_separations *VAR_0, int VAR_1)
{
 return (fz_separation_behavior)((VAR_0->state[VAR_1>>5]>>((2*VAR_1) & 31)) & 3);
}
