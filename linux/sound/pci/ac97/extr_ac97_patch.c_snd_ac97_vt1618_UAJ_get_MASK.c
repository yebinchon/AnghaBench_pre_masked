
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct TYPE_4__ {unsigned short* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int page_mutex; } ;
struct TYPE_6__ {unsigned short mask; unsigned short shift; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,int) ;
 int FUNC_3 (struct snd_ac97*,int,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_4 (struct snd_kcontrol*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 unsigned short VAR_5, VAR_6;
 struct snd_ac97 *VAR_7 = FUNC_4(VAR_3);

 FUNC_0(&VAR_7->page_mutex);

 VAR_5 = FUNC_2(VAR_7, VAR_0) & VAR_1;
 FUNC_3(VAR_7, VAR_0, VAR_1, 0);

 VAR_6 = FUNC_2(VAR_7, 0x60) &
  VAR_2[VAR_3->private_value].mask;

 FUNC_3(VAR_7, VAR_0, VAR_1, VAR_5);
 FUNC_1(&VAR_7->page_mutex);

 VAR_4->value.enumerated.item[0] = VAR_6 >>
  VAR_2[VAR_3->private_value].shift;

 return 0;
}
