
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wm8776 {int card; TYPE_2__* ctl; } ;
struct TYPE_3__ {int * p; } ;
struct snd_kcontrol_new {int private_value; int info; TYPE_1__ tlv; int access; int put; int get; int name; int iface; } ;
struct snd_kcontrol {int dummy; } ;
typedef int cont ;
struct TYPE_4__ {int flags; int type; int max; int * tlv; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_kcontrol_new*,int ,int) ;
 int FUNC_1 (int ,struct snd_kcontrol*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new*,struct snd_wm8776*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_3(struct snd_wm8776 *VAR_15, int VAR_16)
{
 struct snd_kcontrol_new VAR_17;
 struct snd_kcontrol *VAR_18;

 FUNC_0(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.iface = VAR_5;
 VAR_17.private_value = VAR_16;
 VAR_17.name = VAR_15->ctl[VAR_16].name;
 VAR_17.access = VAR_3;
 if (VAR_15->ctl[VAR_16].flags & VAR_7 ||
     VAR_15->ctl[VAR_16].flags & VAR_6)
  VAR_17.access |= VAR_2;
 VAR_17.tlv.p = ((void*)0);
 VAR_17.get = VAR_11;
 VAR_17.put = VAR_12;

 switch (VAR_15->ctl[VAR_16].type) {
 case 128:
  VAR_17.info = VAR_14;
  VAR_17.access |= VAR_4;
  VAR_17.tlv.p = VAR_15->ctl[VAR_16].tlv;
  break;
 case 130:
  VAR_15->ctl[VAR_16].max = 1;
  if (VAR_15->ctl[VAR_16].flags & VAR_8)
   VAR_17.info = VAR_10;
  else
   VAR_17.info = VAR_9;
  break;
 case 129:
  VAR_17.info = VAR_13;
  break;
 default:
  return -VAR_0;
 }
 VAR_18 = FUNC_2(&VAR_17, VAR_15);
 if (!VAR_18)
  return -VAR_1;

 return FUNC_1(VAR_15->card, VAR_18);
}
