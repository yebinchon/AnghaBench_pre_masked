
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 () ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_1);
 static const unsigned char VAR_4[16] = {
  9, 6, 3, 1, 7, 4, 0, 12, 8, 5, 2, 11, 255, 255, 255, 10
 };
 unsigned char VAR_5;

 FUNC_5(&VAR_3->reg_lock);
 if (FUNC_2(VAR_3)) {
  VAR_2->value.enumerated.item[0] = 13;
 } else {
  VAR_5 = VAR_4[FUNC_1(FUNC_0(VAR_3, VAR_0)) & 15];
  if (VAR_5 == 255) {
   FUNC_3();
   VAR_5 = 0;
  }
  VAR_2->value.enumerated.item[0] = VAR_5;
 }
 FUNC_6(&VAR_3->reg_lock);
 return 0;
}
