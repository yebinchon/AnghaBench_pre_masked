
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int id; } ;
struct snd_ice1712 {int card; struct psc724_spec* spec; } ;
struct snd_ctl_elem_id {int name; int iface; } ;
struct TYPE_4__ {int* regs; TYPE_1__* ctl; } ;
struct psc724_spec {int hp_connected; TYPE_2__ wm8776; } ;
typedef int elem_id ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_1 (struct snd_ice1712*,int) ;
 struct snd_kcontrol* FUNC_2 (int ,struct snd_ctl_elem_id*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct snd_ice1712 *VAR_5, bool VAR_6)
{
 struct psc724_spec *VAR_7 = VAR_5->spec;
 struct snd_ctl_elem_id VAR_8;
 struct snd_kcontrol *VAR_9;
 u16 VAR_10 = VAR_7->wm8776.regs[VAR_4] & ~VAR_3;

 FUNC_1(VAR_5, !VAR_6);
 if (!VAR_6)
  VAR_10 |= VAR_3;
 FUNC_4(&VAR_7->wm8776, VAR_10);
 VAR_7->hp_connected = VAR_6;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.iface = VAR_0;
 FUNC_5(VAR_8.name, "Master Speakers Playback Switch",
      sizeof(VAR_8.name));
 VAR_9 = FUNC_2(VAR_5->card, &VAR_8);
 FUNC_3(VAR_5->card, VAR_1, &VAR_9->id);

 FUNC_5(VAR_8.name, VAR_7->wm8776.ctl[VAR_2].name,
      sizeof(VAR_8.name));
 VAR_9 = FUNC_2(VAR_5->card, &VAR_8);
 FUNC_3(VAR_5->card, VAR_1, &VAR_9->id);
}
