
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {int name; int iface; } ;
struct snd_card {int dummy; } ;
typedef int id2 ;
typedef int id1 ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_1)
{
 struct snd_ctl_elem_id VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_2 = VAR_3 = VAR_0;


 FUNC_2(VAR_2, "Aux Playback Volume");
 FUNC_2(VAR_3, "Synth Playback Volume");
 VAR_4 = FUNC_1(VAR_1, &VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_2(VAR_2, "Master Playback Switch");
 FUNC_2(VAR_3, "Synth Playback Switch");
 VAR_4 = FUNC_1(VAR_1, &VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
