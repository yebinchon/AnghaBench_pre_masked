
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {struct snd_card* card; } ;
struct snd_ctl_elem_id {int index; int name; int iface; } ;
struct snd_card {int dummy; } ;
typedef int id2 ;
typedef int id1 ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_wss*) ;
 int FUNC_4 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_5 (struct snd_card*,struct snd_ctl_elem_id*,struct snd_ctl_elem_id*) ;
 int * VAR_5 ;
 int FUNC_6 (struct snd_wss*,int ,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct snd_wss *VAR_6)
{
 struct snd_card *VAR_7 = VAR_6->card;
 struct snd_ctl_elem_id VAR_8, VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = VAR_9 = VAR_4;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++)
  if ((VAR_11 = FUNC_2(VAR_7, FUNC_3(&VAR_5[VAR_10], VAR_6))) < 0)
   return VAR_11;
 FUNC_6(VAR_6, VAR_1, 0x9f);
 FUNC_6(VAR_6, VAR_2, 0x9f);
 FUNC_6(VAR_6, VAR_0, 0x9f);
 FUNC_6(VAR_6, VAR_3, 0x9f);

 FUNC_7(VAR_8, "Aux Playback Switch");
 FUNC_7(VAR_9, "Synth Playback Switch");
 if ((VAR_11 = FUNC_5(VAR_7, &VAR_8, &VAR_9)) < 0)
  return VAR_11;
 FUNC_7(VAR_8, "Aux Playback Volume");
 FUNC_7(VAR_9, "Synth Playback Volume");
 if ((VAR_11 = FUNC_5(VAR_7, &VAR_8, &VAR_9)) < 0)
  return VAR_11;

 FUNC_7(VAR_8, "Aux Playback Switch"); VAR_8 = 1;
 FUNC_7(VAR_9, "CD Playback Switch");
 if ((VAR_11 = FUNC_5(VAR_7, &VAR_8, &VAR_9)) < 0)
  return VAR_11;
 FUNC_7(VAR_8, "Aux Playback Volume");
 FUNC_7(VAR_9, "CD Playback Volume");
 if ((VAR_11 = FUNC_5(VAR_7, &VAR_8, &VAR_9)) < 0)
  return VAR_11;
 return 0;
}
