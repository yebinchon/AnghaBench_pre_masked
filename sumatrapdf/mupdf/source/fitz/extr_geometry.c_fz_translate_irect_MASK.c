
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_1__ fz_irect ;


 void* FUNC_0 (int,void*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;

fz_irect
FUNC_3(fz_irect VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_0)) return VAR_0;
 if (FUNC_2(VAR_0)) return VAR_0;
 VAR_0.x0 = FUNC_0(VAR_3, VAR_0.x0, VAR_1);
 VAR_0.y0 = FUNC_0(VAR_3, VAR_0.y0, VAR_2);
 VAR_0.x1 = FUNC_0(VAR_3, VAR_0.x1, VAR_1);
 VAR_0.y1 = FUNC_0(VAR_3, VAR_0.y1, VAR_2);
 return VAR_0;
}
