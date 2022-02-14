
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int* data; int* ctrl; } ;
struct snd_dbri {TYPE_3__ mm; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_dbri*,int) ;
 int FUNC_1 (int ,char*,int,int,int,unsigned short) ;
 scalar_t__ FUNC_2 (int) ;
 struct snd_dbri* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_dbri *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = VAR_2->private_value & 0xff;
 int VAR_6 = (VAR_2->private_value >> 8) & 0xff;
 int VAR_7 = (VAR_2->private_value >> 16) & 0xff;
 int VAR_8 = (VAR_2->private_value >> 24) & 1;
 int VAR_9 = 0;
 unsigned short VAR_10;

 if (FUNC_2(!VAR_4))
  return -VAR_1;

 VAR_10 = (VAR_3->value.integer.value[0] & VAR_7);
 if (VAR_8 == 1)
  VAR_10 = VAR_7 - VAR_10;
 VAR_10 <<= VAR_6;

 if (VAR_5 < 4) {
  VAR_4->mm.data[VAR_5] = (VAR_4->mm.data[VAR_5] &
           ~(VAR_7 << VAR_6)) | VAR_10;
  VAR_9 = (VAR_10 != VAR_4->mm.data[VAR_5]);
 } else {
  VAR_4->mm.ctrl[VAR_5 - 4] = (VAR_4->mm.ctrl[VAR_5 - 4] &
        ~(VAR_7 << VAR_6)) | VAR_10;
  VAR_9 = (VAR_10 != VAR_4->mm.ctrl[VAR_5 - 4]);
 }

 FUNC_1(VAR_0, "put_single: mask=0x%x, changed=%d, "
  "mixer-value=%ld, mm-value=0x%x\n",
  VAR_7, VAR_9, VAR_3->value.integer.value[0],
  VAR_4->mm.data[VAR_5 & 3]);

 if (VAR_9) {



  FUNC_0(VAR_4, 1);
  FUNC_4(125);
  FUNC_0(VAR_4, 0);
 }
 return VAR_9;
}
