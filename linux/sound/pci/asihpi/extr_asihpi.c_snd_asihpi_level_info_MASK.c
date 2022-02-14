
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {short min; short max; short step; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 short VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,short*,short*,short*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_info *VAR_3)
{
 u32 VAR_4 = VAR_2->private_value;
 u16 VAR_5;
 short VAR_6;
 short VAR_7;
 short VAR_8;

 VAR_5 =
     FUNC_0(VAR_4, &VAR_6,
          &VAR_7, &VAR_8);
 if (VAR_5) {
  VAR_7 = 2400;
  VAR_6 = -1000;
  VAR_8 = 100;
 }

 VAR_3->type = VAR_1;
 VAR_3->count = 2;
 VAR_3->value.integer.min = VAR_6 / VAR_0;
 VAR_3->value.integer.max = VAR_7 / VAR_0;
 VAR_3->value.integer.step = VAR_8 / VAR_0;
 return 0;
}
