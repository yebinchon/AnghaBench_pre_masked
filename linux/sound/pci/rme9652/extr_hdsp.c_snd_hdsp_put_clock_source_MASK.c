
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hdsp {scalar_t__ io_type; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hdsp*) ;
 scalar_t__ FUNC_1 (struct hdsp*,int) ;
 int FUNC_2 (struct hdsp*) ;
 struct hdsp* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct hdsp *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_4))
  return -VAR_0;
 VAR_6 = VAR_3->value.enumerated.item[0];
 if (VAR_6 < 0) VAR_6 = 0;
 if (VAR_4->io_type == VAR_1) {
  if (VAR_6 > 9)
   VAR_6 = 9;
 } else {
  if (VAR_6 > 6)
   VAR_6 = 6;
 }
 FUNC_4(&VAR_4->lock);
 if (VAR_6 != FUNC_0(VAR_4))
  VAR_5 = (FUNC_1(VAR_4, VAR_6) == 0) ? 1 : 0;
 else
  VAR_5 = 0;
 FUNC_5(&VAR_4->lock);
 return VAR_5;
}
