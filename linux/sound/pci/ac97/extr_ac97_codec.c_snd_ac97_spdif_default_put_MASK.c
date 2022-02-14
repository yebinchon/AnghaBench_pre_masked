
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {unsigned int spdif_status; int flags; scalar_t__ id; int reg_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;



 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,int ) ;
 int FUNC_3 (struct snd_ac97*,int ,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_24, struct snd_ctl_elem_value *VAR_25)
{
 struct snd_ac97 *VAR_26 = FUNC_4(VAR_24);
 unsigned int VAR_27 = 0;
 unsigned short VAR_28 = 0;
 int VAR_29;

 VAR_27 = VAR_28 = VAR_25->value.iec958.status[0] & (VAR_17|VAR_16);
 if (VAR_25->value.iec958.status[0] & VAR_17) {
  VAR_27 |= VAR_25->value.iec958.status[0] & (VAR_20|VAR_19);
  switch (VAR_27 & VAR_20) {
  case 132: VAR_28 |= 0<<12; break;
  case 131: VAR_28 |= 2<<12; break;
  case 133: VAR_28 |= 3<<12; break;
  default: VAR_28 |= 1<<12; break;
  }
  if ((VAR_27 & VAR_18) == VAR_19)
   VAR_28 |= 1<<3;
 } else {
  VAR_27 |= VAR_25->value.iec958.status[0] & (VAR_14|VAR_15);
  VAR_27 |= ((VAR_25->value.iec958.status[1] & (VAR_21|VAR_22)) << 8);
  VAR_27 |= ((VAR_25->value.iec958.status[3] & VAR_23) << 24);
  if ((VAR_27 & VAR_13) == VAR_14)
   VAR_28 |= 1<<3;
  if (!(VAR_27 & VAR_15))
   VAR_28 |= 1<<2;
  VAR_28 |= ((VAR_27 >> 8) & 0xff) << 4;
  switch ((VAR_27 >> 24) & 0xff) {
  case 129: VAR_28 |= 0<<12; break;
  case 128: VAR_28 |= 2<<12; break;
  case 130: VAR_28 |= 3<<12; break;
  default: VAR_28 |= 1<<12; break;
  }
 }

 FUNC_0(&VAR_26->reg_mutex);
 VAR_29 = VAR_26->spdif_status != VAR_27;
 VAR_26->spdif_status = VAR_27;

 if (VAR_26->flags & VAR_1) {
  int VAR_30 = (VAR_28 >> 12) & 0x03;
  switch (VAR_30) {
  case 0: VAR_30 = 1; break;
  case 2: VAR_30 = 0; break;
  default: VAR_30 = 0; break;
  }
  VAR_29 |= FUNC_3(VAR_26, VAR_0, 0x3fff, ((VAR_28 & 0xcfff) | (VAR_30 << 12)));
 } else if (VAR_26->flags & VAR_7) {
  int VAR_31;
  VAR_31 = VAR_27 & (VAR_14|VAR_15) ? 0 : VAR_3;
  VAR_31 |= VAR_27 & VAR_16 ? VAR_4 : VAR_6;
  VAR_29 |= FUNC_3(VAR_26, VAR_2,
            VAR_5 | VAR_3,
            VAR_31);
 } else if (VAR_26->id == VAR_10) {
  VAR_29 |= FUNC_3(VAR_26,
            VAR_12,
            0xff38,
            ((VAR_28 << 4) & 0xff00) |
            ((VAR_28 << 2) & 0x0038));
 } else {
  unsigned short VAR_32 = FUNC_2(VAR_26, VAR_9);
  FUNC_3(VAR_26, VAR_9, VAR_8, 0);

  VAR_29 |= FUNC_3(VAR_26, VAR_11, 0x3fff, VAR_28);
  if (VAR_32 & VAR_8) {
   FUNC_3(VAR_26, VAR_9, VAR_8, VAR_8);
                }
 }
 FUNC_1(&VAR_26->reg_mutex);

 return VAR_29;
}
