
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 scalar_t__ FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  FUNC_3(VAR_5);

  FUNC_2(VAR_2);


  if (!FUNC_4(VAR_5))
   return 0;

  if (FUNC_5(VAR_5)) {





   FUNC_0(VAR_5->dev, "mic-gnd shorted\n");
   VAR_7 = 0;
   VAR_8++;
   if (VAR_8 == VAR_0)
    return VAR_3;
  } else {
   FUNC_0(VAR_5->dev, "mic-gnd open\n");
   VAR_8 = 0;
   VAR_7++;
   if (VAR_7 == VAR_0)
    return VAR_4;
  }
 }

 FUNC_1(VAR_5->dev, "Error detecting headset vs headphones, bad contact?, assuming headphones\n");
 return VAR_3;
}
