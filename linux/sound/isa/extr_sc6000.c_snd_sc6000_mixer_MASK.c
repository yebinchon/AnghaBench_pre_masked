
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {struct snd_card* card; } ;
struct snd_ctl_elem_id {int index; int name; void* iface; } ;
struct snd_card {int dummy; } ;
typedef int id2 ;
typedef int id1 ;


 void* VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_wss *VAR_1)
{
 struct snd_card *VAR_2 = VAR_1->card;
 struct snd_ctl_elem_id VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_3 = VAR_0;
 VAR_4 = VAR_0;

 FUNC_2(VAR_3, "Aux Playback Switch");
 FUNC_2(VAR_4, "FM Playback Switch");
 VAR_5 = FUNC_1(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_2(VAR_3, "Aux Playback Volume");
 FUNC_2(VAR_4, "FM Playback Volume");
 VAR_5 = FUNC_1(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_3, "Aux Playback Switch"); VAR_3 = 1;
 FUNC_2(VAR_4, "CD Playback Switch");
 VAR_5 = FUNC_1(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_2(VAR_3, "Aux Playback Volume");
 FUNC_2(VAR_4, "CD Playback Volume");
 VAR_5 = FUNC_1(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
