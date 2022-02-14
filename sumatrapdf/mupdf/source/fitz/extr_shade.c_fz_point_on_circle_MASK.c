
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ fz_point ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static fz_point
FUNC_2(fz_point VAR_0, float VAR_1, float VAR_2)
{
 VAR_0.x = VAR_0.x + FUNC_0(VAR_2) * VAR_1;
 VAR_0.y = VAR_0.y + FUNC_1(VAR_2) * VAR_1;
 return VAR_0;
}
