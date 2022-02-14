
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct axg_spdifin {int map; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct axg_spdifin* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_3);
 struct axg_spdifin *VAR_6 = FUNC_4(VAR_5);
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
  unsigned int VAR_9;

  FUNC_2(VAR_6->map, VAR_0,
       VAR_1,
       FUNC_0(VAR_1, VAR_7));

  FUNC_1(VAR_6->map, VAR_2, &VAR_9);

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   unsigned int VAR_10 = VAR_7 * 4 + VAR_8;

   VAR_4->value.iec958.status[VAR_10] =
    (VAR_9 >> (VAR_8 * 8)) & 0xff;
  }
 }

 return 0;
}
