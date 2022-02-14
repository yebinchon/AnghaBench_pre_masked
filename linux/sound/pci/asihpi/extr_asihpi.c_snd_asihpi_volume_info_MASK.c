
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
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,short*,short*,short*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_info *VAR_4)
{
 u32 VAR_5 = VAR_3->private_value;
 u32 VAR_6;
 u16 VAR_7;

 short VAR_8;
 short VAR_9;
 short VAR_10;

 VAR_7 = FUNC_1(VAR_5,
   &VAR_8, &VAR_9, &VAR_10);
 if (VAR_7) {
  VAR_9 = 0;
  VAR_8 = -10000;
  VAR_10 = VAR_2;
 }

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7)
  VAR_6 = VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->count = VAR_6;
 VAR_4->value.integer.min = VAR_8 / VAR_2;
 VAR_4->value.integer.max = VAR_9 / VAR_2;
 VAR_4->value.integer.step = VAR_10 / VAR_2;
 return 0;
}
