
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea6330t {unsigned char mleft; unsigned char mright; unsigned char* regs; int bus; int device; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ) ;
 struct tea6330t* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct tea6330t *VAR_4 = FUNC_3(VAR_2);
 int VAR_5, VAR_6, VAR_7;
 unsigned char VAR_8[3];
 unsigned char VAR_9, VAR_10;

 VAR_9 = (VAR_3->value.integer.value[0] % 44) + 0x14;
 VAR_10 = (VAR_3->value.integer.value[1] % 44) + 0x14;
 FUNC_0(VAR_4->bus);
 VAR_5 = VAR_9 != VAR_4->mleft || VAR_10 != VAR_4->mright;
 VAR_4->mleft = VAR_9;
 VAR_4->mright = VAR_10;
 VAR_6 = 0;
 if (VAR_4->regs[VAR_0] != 0) {
  VAR_8[VAR_6++] = VAR_0;
  VAR_8[VAR_6++] = VAR_4->regs[VAR_0] = VAR_4->mleft;
 }
 if (VAR_4->regs[VAR_1] != 0) {
  if (VAR_6 == 0)
   VAR_8[VAR_6++] = VAR_1;
  VAR_8[VAR_6++] = VAR_4->regs[VAR_1] = VAR_4->mright;
 }
 if (VAR_6 > 0) {
  if ((VAR_7 = FUNC_1(VAR_4->device, VAR_8, VAR_6)) < 0)
   VAR_5 = VAR_7;
 }
 FUNC_2(VAR_4->bus);
 return VAR_5;
}
