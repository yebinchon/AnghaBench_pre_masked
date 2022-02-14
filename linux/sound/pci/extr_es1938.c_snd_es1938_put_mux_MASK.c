
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned char* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct es1938 {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct es1938*,int,int,unsigned char) ;
 struct es1938* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct es1938 *VAR_3 = FUNC_1(VAR_1);
 unsigned char VAR_4 = VAR_2->value.enumerated.item[0];

 if (VAR_4 > 7)
  return -VAR_0;
 return FUNC_0(VAR_3, 0x1c, 0x07, VAR_4) != VAR_4;
}
