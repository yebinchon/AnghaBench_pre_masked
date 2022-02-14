
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wm_adsp*,char*,int) ;
 int FUNC_1 (struct wm_adsp*,char*) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct wm_adsp *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6) {
  VAR_5 = FUNC_2(VAR_3->regmap, VAR_3->base + VAR_1, &VAR_4);
  if (VAR_5 != 0)
   return VAR_5;

  if (VAR_4 & VAR_0)
   break;

  FUNC_3(250, 500);
 }

 if (!(VAR_4 & VAR_0)) {
  FUNC_1(VAR_3, "Failed to start DSP RAM\n");
  return -VAR_2;
 }

 FUNC_0(VAR_3, "RAM ready after %d polls\n", VAR_6);

 return 0;
}
