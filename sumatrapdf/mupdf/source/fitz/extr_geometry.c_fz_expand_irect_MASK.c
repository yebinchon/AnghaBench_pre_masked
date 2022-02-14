
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_1__ fz_irect ;


 scalar_t__ FUNC_0 (TYPE_1__) ;

fz_irect
FUNC_1(fz_irect VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0)) return VAR_0;
 VAR_0.x0 -= VAR_1;
 VAR_0.y0 -= VAR_1;
 VAR_0.x1 += VAR_1;
 VAR_0.y1 += VAR_1;
 return VAR_0;
}
