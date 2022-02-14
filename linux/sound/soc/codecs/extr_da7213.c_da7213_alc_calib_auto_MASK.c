
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_5)
{
 u8 VAR_6;


 FUNC_2(VAR_5, VAR_2, VAR_0,
       VAR_0);
 do {
  VAR_6 = FUNC_1(VAR_5, VAR_2);
 } while (VAR_6 & VAR_0);


 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5->dev,
    "ALC auto calibration failed with overflow\n");
  FUNC_2(VAR_5, VAR_2,
        VAR_3 | VAR_4,
        0);
 } else {

  FUNC_2(VAR_5, VAR_2,
        VAR_3 | VAR_4,
        VAR_3 | VAR_4);
 }

}
