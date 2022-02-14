
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NVGpoint ;



__attribute__((used)) static void FUNC_0(NVGpoint* VAR_0, int VAR_1)
{
 NVGpoint VAR_2;
 int VAR_3 = 0, VAR_4 = VAR_1-1;
 while (VAR_3 < VAR_4) {
  VAR_2 = VAR_0[VAR_3];
  VAR_0[VAR_3] = VAR_0[VAR_4];
  VAR_0[VAR_4] = VAR_2;
  VAR_3++;
  VAR_4--;
 }
}
