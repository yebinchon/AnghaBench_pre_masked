
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1, int VAR_2)
{
 int VAR_3[] = {2, 3, 4, 8, 12, 16, 24, 32};
 int VAR_4;

 if (VAR_2 < 1000000 * VAR_3[0]) {
  FUNC_2("Base clock rate %d is too low\n", VAR_2);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {

  if (3072000 * VAR_3[VAR_4] >= VAR_2)
   return VAR_4;
 }

 FUNC_1(VAR_1->dev, "Base clock rate %d is too high\n", VAR_2);
 return -VAR_0;
}
