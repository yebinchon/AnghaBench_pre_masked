
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ NVGpoint ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static float FUNC_1(NVGpoint* VAR_0, int VAR_1)
{
 int VAR_2;
 float VAR_3 = 0;
 for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2++) {
  NVGpoint* VAR_4 = &VAR_0[0];
  NVGpoint* VAR_5 = &VAR_0[VAR_2-1];
  NVGpoint* VAR_6 = &VAR_0[VAR_2];
  VAR_3 += FUNC_0(VAR_4->x,VAR_4->y, VAR_5->x,VAR_5->y, VAR_6->x,VAR_6->y);
 }
 return VAR_3 * 0.5f;
}
