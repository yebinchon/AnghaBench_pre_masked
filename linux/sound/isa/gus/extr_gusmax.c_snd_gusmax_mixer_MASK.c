
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {struct snd_card* card; } ;
struct snd_ctl_elem_id {int index; int name; int iface; } ;
struct snd_card {int dummy; } ;
typedef int id2 ;
typedef int id1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*,struct snd_ctl_elem_id*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_wss *VAR_7)
{
 struct snd_card *VAR_8 = VAR_7->card;
 struct snd_ctl_elem_id VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_9 = VAR_10 = VAR_0;

 FUNC_4(VAR_9, "Aux Playback Switch");
 FUNC_4(VAR_10, "Synth Playback Switch");
 if ((VAR_11 = FUNC_1(VAR_8, &VAR_9, &VAR_10)) < 0)
  return VAR_11;
 FUNC_4(VAR_9, "Aux Playback Volume");
 FUNC_4(VAR_10, "Synth Playback Volume");
 if ((VAR_11 = FUNC_1(VAR_8, &VAR_9, &VAR_10)) < 0)
  return VAR_11;

 FUNC_4(VAR_9, "Aux Playback Switch"); VAR_9 = 1;
 FUNC_4(VAR_10, "CD Playback Switch");
 if ((VAR_11 = FUNC_1(VAR_8, &VAR_9, &VAR_10)) < 0)
  return VAR_11;
 FUNC_4(VAR_9, "Aux Playback Volume");
 FUNC_4(VAR_10, "CD Playback Volume");
 if ((VAR_11 = FUNC_1(VAR_8, &VAR_9, &VAR_10)) < 0)
  return VAR_11;
 return 0;
}
