
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;


 TYPE_1__ FUNC_0 (float,float) ;

__attribute__((used)) static fz_point
FUNC_1(fz_point VAR_0, fz_point VAR_1, float VAR_2)
{
 return FUNC_0(VAR_0.x + VAR_2 * (VAR_1.x - VAR_0.x), VAR_0.y + VAR_2 * (VAR_1.y - VAR_0.y));
}
