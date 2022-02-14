
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wm8776 {struct snd_card* card; } ;
struct snd_kcontrol_volatile {int access; } ;
struct snd_kcontrol {int id; struct snd_kcontrol_volatile* vd; } ;
struct snd_ctl_elem_id {int iface; int name; } ;
struct snd_card {int dummy; } ;
typedef int elem_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 unsigned int FUNC_2 (struct snd_kcontrol*,int *) ;
 int FUNC_3 (struct snd_card*,int ,int *) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_5(struct snd_wm8776 *VAR_3,
        const char *VAR_4,
        bool VAR_5)
{
 struct snd_card *VAR_6 = VAR_3->card;
 struct snd_kcontrol *VAR_7;
 struct snd_kcontrol_volatile *VAR_8;
 struct snd_ctl_elem_id VAR_9;
 unsigned int VAR_10;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 FUNC_4(VAR_9.name, VAR_4, sizeof(VAR_9.name));
 VAR_9.iface = VAR_1;
 VAR_7 = FUNC_1(VAR_6, &VAR_9);
 if (!VAR_7)
  return;
 VAR_10 = FUNC_2(VAR_7, &VAR_7->id);
 VAR_8 = &VAR_7->vd[VAR_10];
 if (VAR_5)
  VAR_8->access &= ~VAR_0;
 else
  VAR_8->access |= VAR_0;
 FUNC_3(VAR_6, VAR_2, &VAR_7->id);
}
