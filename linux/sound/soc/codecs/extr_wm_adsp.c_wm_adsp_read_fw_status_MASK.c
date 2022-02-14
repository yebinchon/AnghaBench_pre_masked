
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;


 int FUNC_0 (struct wm_adsp*,char*,unsigned int,int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct wm_adsp *VAR_0,
       int VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_4 = FUNC_1(VAR_0->regmap, VAR_0->base + VAR_2[VAR_3], &VAR_2[VAR_3]);
  if (VAR_4) {
   FUNC_0(VAR_0, "Failed to read SCRATCH%u: %d\n", VAR_3, VAR_4);
   return;
  }
 }
}
