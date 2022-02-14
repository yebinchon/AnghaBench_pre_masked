
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {unsigned int i2c_capture_source; unsigned int** i2c_capture_volume; int emu_lock; scalar_t__ port; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
typedef int ngain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct snd_emu10k1*,int ,int) ;
 struct snd_emu10k1* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 struct snd_emu10k1 *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;
 u32 VAR_14;




 VAR_8 = VAR_6->value.enumerated.item[0];


 if (VAR_8 >= 2)
  return -VAR_4;
 VAR_12 = (VAR_7->i2c_capture_source != VAR_8);
 if (VAR_12) {
  FUNC_2(VAR_7, VAR_2, 0);
  FUNC_4(&VAR_7->emu_lock, VAR_13);
  VAR_11 = FUNC_0(VAR_7->port + VAR_3);
  if (VAR_8==0)
   FUNC_1(VAR_11 | 0x4, VAR_7->port + VAR_3);
  else
   FUNC_1(VAR_11 & ~0x4, VAR_7->port + VAR_3);
  FUNC_5(&VAR_7->emu_lock, VAR_13);

  VAR_9 = VAR_7->i2c_capture_volume[VAR_8][0];
  VAR_10 = VAR_7->i2c_capture_volume[VAR_7->i2c_capture_source][0];
  if (VAR_9 != VAR_10)
   FUNC_2(VAR_7, VAR_0, ((VAR_9) & 0xff));
  VAR_9 = VAR_7->i2c_capture_volume[VAR_8][1];
  VAR_10 = VAR_7->i2c_capture_volume[VAR_7->i2c_capture_source][1];
  if (VAR_9 != VAR_10)
   FUNC_2(VAR_7, VAR_1, ((VAR_9) & 0xff));

  VAR_14 = 1 << (VAR_8 + 2);
  FUNC_2(VAR_7, VAR_2, VAR_14);
  VAR_7->i2c_capture_source = VAR_8;
 }
        return VAR_12;
}
