
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_5,
    struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_0);


 VAR_9 = (VAR_8 & VAR_1) >> VAR_2;


 VAR_10 = (VAR_8 & VAR_3) >> VAR_4;


 VAR_9 = FUNC_0(VAR_9, 0x3c, 0xfc);
 VAR_10 = FUNC_0(VAR_10, 0x3c, 0xfc);


 VAR_9 = 0xfc - VAR_9;
 VAR_10 = 0xfc - VAR_10;

 VAR_6->value.integer.value[0] = VAR_9;
 VAR_6->value.integer.value[1] = VAR_10;

 return 0;
}
