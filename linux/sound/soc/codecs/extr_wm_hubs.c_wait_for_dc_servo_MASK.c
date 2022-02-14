
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int dcs_done; scalar_t__ dcs_done_irq; } ;
struct snd_soc_component {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct wm_hubs_data* FUNC_4 (struct snd_soc_component*) ;
 unsigned int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct snd_soc_component *VAR_3, unsigned int VAR_4)
{
 struct wm_hubs_data *VAR_5 = FUNC_4(VAR_3);
 unsigned int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 unsigned int VAR_9;

 VAR_9 = VAR_4 | VAR_0 | VAR_1;


 FUNC_6(VAR_3, VAR_2, VAR_9);

 FUNC_0(VAR_3->dev, "Waiting for DC servo...\n");

 if (VAR_5->dcs_done_irq)
  VAR_8 = 4;
 else
  VAR_8 = 400;

 do {
  VAR_7++;

  if (VAR_5->dcs_done_irq)
   FUNC_7(&VAR_5->dcs_done,
          FUNC_2(250));
  else
   FUNC_3(1);

  VAR_6 = FUNC_5(VAR_3, VAR_2);
  FUNC_0(VAR_3->dev, "DC servo: %x\n", VAR_6);
 } while (VAR_6 & VAR_4 && VAR_7 < VAR_8);

 if (VAR_6 & VAR_4)
  FUNC_1(VAR_3->dev, "Timed out waiting for DC Servo %x\n",
   VAR_4);
}
