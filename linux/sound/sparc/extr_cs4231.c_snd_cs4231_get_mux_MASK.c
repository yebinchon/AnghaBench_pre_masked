
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
struct snd_cs4231 {int* image; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct snd_cs4231* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_cs4231 *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;

 FUNC_1(&VAR_5->lock, VAR_6);
 VAR_4->value.enumerated.item[0] =
  (VAR_5->image[VAR_0] & VAR_1) >> 6;
 VAR_4->value.enumerated.item[1] =
  (VAR_5->image[VAR_2] & VAR_1) >> 6;
 FUNC_2(&VAR_5->lock, VAR_6);

 return 0;
}
