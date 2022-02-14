
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line {int b; int a; } ;
struct TYPE_2__ {scalar_t__ lineheight; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (float,float,int ,int ) ;

void FUNC_1(float VAR_1, float VAR_2, struct line *VAR_3, int VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
 {
  FUNC_0(VAR_1, VAR_2, VAR_3[VAR_5].a, VAR_3[VAR_5].b);
  VAR_2 += VAR_0.lineheight;
 }
}
