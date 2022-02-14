
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {long* cs4245_shadow; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct oxygen *VAR_5 = VAR_3->private_data;
 struct dg *VAR_6 = VAR_5->model_data;
 int VAR_7;
 int VAR_8 = 0;
 long VAR_9 = VAR_4->value.integer.value[0];
 long VAR_10 = VAR_4->value.integer.value[1];

 if ((VAR_9 > 255) || (VAR_9 < 0) || (VAR_10 > 255) || (VAR_10 < 0))
  return -VAR_2;

 FUNC_1(&VAR_5->mutex);
 if ((VAR_6->cs4245_shadow[VAR_0] != ~VAR_9) ||
     (VAR_6->cs4245_shadow[VAR_1] != ~VAR_10)) {
  VAR_6->cs4245_shadow[VAR_0] = ~VAR_9;
  VAR_6->cs4245_shadow[VAR_1] = ~VAR_10;
  VAR_7 = FUNC_0(VAR_5, VAR_0);
  if (VAR_7 >= 0)
   VAR_7 = FUNC_0(VAR_5, VAR_1);
  VAR_8 = VAR_7 >= 0 ? 1 : VAR_7;
 }
 FUNC_2(&VAR_5->mutex);

 return VAR_8;
}
