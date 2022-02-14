
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct rme32 {TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct rme32* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_info *VAR_2)
{
 struct rme32 *VAR_3 = FUNC_2(VAR_1);
 static const char * const VAR_4[4] = {
  "Optical", "Coaxial", "Internal", "XLR"
 };
 int VAR_5;

 switch (VAR_3->pci->device) {
 case 130:
 case 129:
  VAR_5 = 3;
  break;
 case 128:
  VAR_5 = 4;
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }
 return FUNC_1(VAR_2, 1, VAR_5, VAR_4);
}
