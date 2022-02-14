
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_6__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_2__ fz_irect ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int,int ,int ) ;

fz_irect
FUNC_3(fz_rect VAR_2)
{
 fz_irect VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2.x0 + 0.001f);
 VAR_3.x0 = FUNC_2(VAR_4, VAR_1, VAR_0);
 VAR_4 = FUNC_1(VAR_2.y0 + 0.001f);
 VAR_3.y0 = FUNC_2(VAR_4, VAR_1, VAR_0);
 VAR_4 = FUNC_0(VAR_2.x1 - 0.001f);
 VAR_3.x1 = FUNC_2(VAR_4, VAR_1, VAR_0);
 VAR_4 = FUNC_0(VAR_2.y1 - 0.001f);
 VAR_3.y1 = FUNC_2(VAR_4, VAR_1, VAR_0);

 return VAR_3;
}
