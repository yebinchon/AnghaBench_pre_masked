
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 int VAR_5, VAR_6;



 VAR_6 = FUNC_2(VAR_4, VAR_0, 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "Failed to reset DSP: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_2, 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "Failed to reset component: %d\n", VAR_6);
  return VAR_6;
 }



 for (VAR_5 = VAR_1; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_4, VAR_5));
  if (VAR_6 < 0) {
   FUNC_0(VAR_4->dev, "Failed to reset: %d\n", VAR_6);
   return VAR_6;
  }
 }

 return VAR_6;
}
