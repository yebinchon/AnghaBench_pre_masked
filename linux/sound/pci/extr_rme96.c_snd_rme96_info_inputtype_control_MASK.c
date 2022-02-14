
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct rme96 {int rev; TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int,char const**) ;
 struct rme96* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[5] = {
  "Optical", "Coaxial", "Internal", "XLR", "Analog"
 };
 struct rme96 *VAR_4 = FUNC_2(VAR_1);
 const char *VAR_5[5] = {
  VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4]
 };
 int VAR_6;

 switch (VAR_4->pci->device) {
 case 131:
 case 130:
  VAR_6 = 3;
  break;
 case 128:
  VAR_6 = 4;
  break;
 case 129:
  if (VAR_4->rev > 4) {

   VAR_6 = 4;
   VAR_5[3] = VAR_3[4];
  } else {

   VAR_6 = 5;
  }
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }
 return FUNC_1(VAR_2, 1, VAR_6, VAR_5);
}
