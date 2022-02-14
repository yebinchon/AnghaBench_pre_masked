
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_7__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_2__ fz_irect ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;

fz_irect
FUNC_4(fz_rect VAR_2)
{
 fz_irect VAR_3;
 if (FUNC_3(VAR_2))
 {
  VAR_3.x0 = 0;
  VAR_3.y0 = 0;
  VAR_3.x1 = 0;
  VAR_3.y1 = 0;
 }
 else
 {
  VAR_3.x0 = FUNC_2(FUNC_1(VAR_2.x0), VAR_1, VAR_0);
  VAR_3.y0 = FUNC_2(FUNC_1(VAR_2.y0), VAR_1, VAR_0);
  VAR_3.x1 = FUNC_2(FUNC_0(VAR_2.x1), VAR_1, VAR_0);
  VAR_3.y1 = FUNC_2(FUNC_0(VAR_2.y1), VAR_1, VAR_0);
 }
 return VAR_3;
}
