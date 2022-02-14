
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;

__attribute__((used)) static bool FUNC_3(struct snd_soc_component *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0;

 do {
  VAR_3 = FUNC_2(VAR_2, VAR_1);
  if (VAR_3 < 0) {
   FUNC_0(VAR_2->dev,
    "Failed to read PLL lock status (%d)\n", VAR_3);
   return 0;
  } else if (VAR_3 > 0) {
   return 1;
  }
  FUNC_1(20);
 } while (VAR_4--);

 return 0;
}
