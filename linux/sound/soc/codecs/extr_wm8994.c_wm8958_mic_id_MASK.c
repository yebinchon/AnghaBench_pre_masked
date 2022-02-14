
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8994_priv {int mic_detecting; int jack_mic; TYPE_1__* micdet; int open_circuit_work; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_7(void *VAR_4, u16 VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4;
 struct wm8994_priv *VAR_7 = FUNC_3(VAR_6);


 if (!(VAR_5 & VAR_2)) {

  FUNC_0(VAR_6->dev, "Detected open circuit\n");

  FUNC_2(VAR_3,
       &VAR_7->open_circuit_work,
       FUNC_1(2500));
  return;
 }




 if (VAR_5 & 0x600) {
  FUNC_0(VAR_6->dev, "Detected microphone\n");

  VAR_7->mic_detecting = 0;
  VAR_7->jack_mic = 1;

  FUNC_6(VAR_6);

  FUNC_4(VAR_7->micdet[0].jack, VAR_1,
        VAR_1);
 }


 if (VAR_5 & 0xfc) {
  FUNC_0(VAR_6->dev, "Detected headphone\n");
  VAR_7->mic_detecting = 0;

  FUNC_6(VAR_6);


  FUNC_5(VAR_6);

  FUNC_4(VAR_7->micdet[0].jack, VAR_0,
        VAR_1);
 }
}
