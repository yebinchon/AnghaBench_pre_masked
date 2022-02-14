
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct es1938 {int dummy; } ;


 int FUNC_0 (struct es1938*,int) ;
 int FUNC_1 (struct es1938*,int,unsigned char) ;
 struct es1938* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct es1938 *VAR_2 = FUNC_2(VAR_0);
 unsigned char VAR_3, VAR_4;
 int VAR_5;
 VAR_4 = VAR_1->value.integer.value[0] ? 0x0c : 0x04;
 VAR_3 = FUNC_0(VAR_2, 0x50) & 0x0c;
 VAR_5 = VAR_4 != VAR_3;
 if (VAR_5) {
  FUNC_1(VAR_2, 0x50, VAR_4 & ~0x04);
  FUNC_1(VAR_2, 0x50, VAR_4);
 }
 return VAR_5;
}
