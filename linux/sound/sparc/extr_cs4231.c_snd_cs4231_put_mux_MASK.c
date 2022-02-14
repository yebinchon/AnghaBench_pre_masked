
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_cs4231 {unsigned short* image; int lock; } ;


 size_t VAR_0 ;
 unsigned short VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_cs4231*,size_t,unsigned short) ;
 struct snd_cs4231* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4,
         struct snd_ctl_elem_value *VAR_5)
{
 struct snd_cs4231 *VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;
 unsigned short VAR_8, VAR_9;
 int VAR_10;

 if (VAR_5->value.enumerated.item[0] > 3 ||
     VAR_5->value.enumerated.item[1] > 3)
  return -VAR_3;
 VAR_8 = VAR_5->value.enumerated.item[0] << 6;
 VAR_9 = VAR_5->value.enumerated.item[1] << 6;

 FUNC_2(&VAR_6->lock, VAR_7);

 VAR_8 = (VAR_6->image[VAR_0] & ~VAR_1) | VAR_8;
 VAR_9 = (VAR_6->image[VAR_2] & ~VAR_1) | VAR_9;
 VAR_10 = VAR_8 != VAR_6->image[VAR_0] ||
   VAR_9 != VAR_6->image[VAR_2];
 FUNC_0(VAR_6, VAR_0, VAR_8);
 FUNC_0(VAR_6, VAR_2, VAR_9);

 FUNC_3(&VAR_6->lock, VAR_7);

 return VAR_10;
}
