
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ak4117 {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ak4117*,scalar_t__) ;
 struct ak4117* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct ak4117 *VAR_4 = FUNC_1(VAR_2);
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_3->value.bytes.data[VAR_5] = FUNC_0(VAR_4, VAR_0 + VAR_5);
 return 0;
}
