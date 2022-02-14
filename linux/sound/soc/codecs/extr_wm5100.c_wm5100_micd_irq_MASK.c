
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int jack_mic; int jack_detecting; int jack_flips; int jack; int dev; int jack_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct wm5100_priv*) ;
 int FUNC_7 (struct wm5100_priv*,int) ;

__attribute__((used)) static void FUNC_8(struct wm5100_priv *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_9->regmap, VAR_8, &VAR_10);
 if (VAR_11 != 0) {
  FUNC_1(VAR_9->dev, "Failed to read microphone status: %d\n",
   VAR_11);
  return;
 }

 FUNC_0(VAR_9->dev, "Microphone event: %x\n", VAR_10);

 if (!(VAR_10 & VAR_6)) {
  FUNC_2(VAR_9->dev, "Microphone detection state invalid\n");
  return;
 }


 if (!(VAR_10 & VAR_5)) {
  FUNC_0(VAR_9->dev, "Jack removal detected\n");
  VAR_9->jack_mic = 0;
  VAR_9->jack_detecting = 1;
  VAR_9->jack_flips = 0;
  FUNC_5(VAR_9->jack, 0,
        VAR_2 | VAR_1 |
        VAR_0);

  FUNC_4(VAR_9->regmap, VAR_7,
       VAR_3,
       VAR_3);
  return;
 }





 if (VAR_10 & 0x400) {
  if (VAR_9->jack_detecting) {
   FUNC_0(VAR_9->dev, "Microphone detected\n");
   VAR_9->jack_mic = 1;
   VAR_9->jack_detecting = 0;
   FUNC_5(VAR_9->jack,
         VAR_1,
         VAR_1 | VAR_0);



   FUNC_4(VAR_9->regmap, VAR_7,
        VAR_3,
        5 << VAR_4);
  } else {
   FUNC_0(VAR_9->dev, "Mic button up\n");
   FUNC_5(VAR_9->jack, 0, VAR_0);
  }

  return;
 }







 if (VAR_9->jack_detecting && (VAR_10 & 0x3f8)) {
  VAR_9->jack_flips++;

  if (VAR_9->jack_flips > 1)
   FUNC_6(VAR_9);
  else
   FUNC_7(VAR_9, !VAR_9->jack_mode);

  return;
 }




 if (VAR_10 & 0x3fc) {
  if (VAR_9->jack_mic) {
   FUNC_0(VAR_9->dev, "Mic button detected\n");
   FUNC_5(VAR_9->jack, VAR_0,
         VAR_0);
  } else if (VAR_9->jack_detecting) {
   FUNC_6(VAR_9);
  }
 }
}
