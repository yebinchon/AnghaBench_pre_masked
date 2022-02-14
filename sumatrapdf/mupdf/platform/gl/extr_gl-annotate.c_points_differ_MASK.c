
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ fz_point ;


 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(fz_point VAR_0, fz_point VAR_1, float VAR_2)
{
 if (FUNC_0(VAR_0.x - VAR_1.x) > VAR_2) return 1;
 if (FUNC_0(VAR_0.y - VAR_1.y) > VAR_2) return 1;
 return 0;
}
