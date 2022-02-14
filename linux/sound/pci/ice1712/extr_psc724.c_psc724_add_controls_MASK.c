
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_kcontrol_new {int private_value; int put; int get; int info; int access; int name; int iface; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int card; struct psc724_spec* spec; } ;
struct TYPE_10__ {TYPE_2__* ctl; } ;
struct TYPE_9__ {TYPE_1__* ctl; } ;
struct psc724_spec {TYPE_4__ wm8766; TYPE_3__ wm8776; } ;
typedef int cont ;
struct TYPE_11__ {int name; } ;
struct TYPE_8__ {int * name; } ;
struct TYPE_7__ {int * name; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int * VAR_32 ;
 int * VAR_33 ;
 int * VAR_34 ;
 int * VAR_35 ;
 int * VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 int * VAR_39 ;
 int * VAR_40 ;
 int * VAR_41 ;
 int * VAR_42 ;
 int * VAR_43 ;
 int FUNC_1 (struct snd_kcontrol_new*,int ,int) ;
 TYPE_5__* VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int * VAR_47 ;
 int * VAR_48 ;
 int * VAR_49 ;
 int * VAR_50 ;
 int * VAR_51 ;
 int * VAR_52 ;
 int FUNC_2 (int ,struct snd_kcontrol*) ;
 int VAR_53 ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,struct snd_ice1712*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_54)
{
 struct snd_kcontrol_new VAR_55;
 struct snd_kcontrol *VAR_56;
 int VAR_57, VAR_58;
 struct psc724_spec *VAR_59 = VAR_54->spec;

 VAR_59->wm8776.ctl[VAR_20].name = VAR_42;
 VAR_59->wm8776.ctl[VAR_19].name = VAR_41;
 VAR_59->wm8776.ctl[VAR_21].name = VAR_43;
 VAR_59->wm8776.ctl[VAR_17].name = ((void*)0);
 VAR_59->wm8776.ctl[VAR_18].name = VAR_39;
 VAR_59->wm8776.ctl[VAR_28].name = VAR_40;
 VAR_59->wm8776.ctl[VAR_22].name = VAR_38;
 VAR_59->wm8776.ctl[VAR_23].name = VAR_29;
 VAR_59->wm8776.ctl[VAR_24].name = VAR_30;
 VAR_59->wm8776.ctl[VAR_25].name = VAR_31;
 VAR_59->wm8776.ctl[VAR_26].name = VAR_32;
 VAR_59->wm8776.ctl[VAR_27].name = VAR_33;
 FUNC_5(&VAR_59->wm8776);
 VAR_59->wm8766.ctl[VAR_4].name = VAR_52;
 VAR_59->wm8766.ctl[VAR_6].name = VAR_37;
 VAR_59->wm8766.ctl[VAR_8].name = ((void*)0);
 VAR_59->wm8766.ctl[VAR_3].name = VAR_51;
 VAR_59->wm8766.ctl[VAR_5].name = VAR_36;
 VAR_59->wm8766.ctl[VAR_7].name = ((void*)0);
 VAR_59->wm8766.ctl[VAR_13].name = VAR_50;
 VAR_59->wm8766.ctl[VAR_14].name = VAR_35;
 VAR_59->wm8766.ctl[VAR_15].name = ((void*)0);
 VAR_59->wm8766.ctl[VAR_9].name = VAR_49;
 VAR_59->wm8766.ctl[VAR_10].name = VAR_34;
 VAR_59->wm8766.ctl[VAR_11].name = ((void*)0);
 VAR_59->wm8766.ctl[VAR_12].name = VAR_47;
 VAR_59->wm8766.ctl[VAR_16].name = VAR_48;
 FUNC_4(&VAR_59->wm8766);

 FUNC_1(&VAR_55, 0, sizeof(VAR_55));
 VAR_55.iface = VAR_2;
 for (VAR_58 = 0; VAR_58 < FUNC_0(VAR_44); VAR_58++) {
  VAR_55.private_value = VAR_58;
  VAR_55.name = VAR_44[VAR_58].name;
  VAR_55.access = VAR_1;
  VAR_55.info = VAR_53;
  VAR_55.get = VAR_45;
  VAR_55.put = VAR_46;
  VAR_56 = FUNC_3(&VAR_55, VAR_54);
  if (!VAR_56)
   return -VAR_0;
  VAR_57 = FUNC_2(VAR_54->card, VAR_56);
  if (VAR_57 < 0)
   return VAR_57;
 }

 return 0;
}
