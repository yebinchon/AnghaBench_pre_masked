
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea6330t {int max_bass; unsigned char bass; unsigned char* regs; int bus; int device; scalar_t__ equalizer; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ) ;
 struct tea6330t* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct tea6330t *VAR_3 = FUNC_3(VAR_1);
 int VAR_4, VAR_5;
 unsigned char VAR_6[2];
 unsigned char VAR_7;

 VAR_7 = VAR_2->value.integer.value[0] % (VAR_3->max_bass + 1);
 FUNC_0(VAR_3->bus);
 VAR_3->bass = VAR_7;
 VAR_7 += VAR_3->equalizer ? 7 : 3;
 VAR_4 = VAR_3->regs[VAR_0] != VAR_7;
 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_3->regs[VAR_0] = VAR_7;
 if ((VAR_5 = FUNC_1(VAR_3->device, VAR_6, 2)) < 0)
  VAR_4 = VAR_5;
 FUNC_2(VAR_3->bus);
 return VAR_4;
}
