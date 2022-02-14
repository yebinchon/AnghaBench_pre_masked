
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {scalar_t__* controls; int control_lock; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_card*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,struct snd_emu8000*) ;
 int FUNC_5 (struct snd_card*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct snd_card *VAR_3, struct snd_emu8000 *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (FUNC_2(!VAR_4 || !VAR_3))
  return -VAR_0;

 FUNC_6(&VAR_4->control_lock);

 FUNC_1(VAR_4->controls, 0, sizeof(VAR_4->controls));
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if ((VAR_6 = FUNC_3(VAR_3, VAR_4->controls[VAR_5] = FUNC_4(VAR_2[VAR_5], VAR_4))) < 0)
   goto __error;
 }
 return 0;

__error:
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&VAR_3->controls_rwsem);
  if (VAR_4->controls[VAR_5])
   FUNC_5(VAR_3, VAR_4->controls[VAR_5]);
  FUNC_7(&VAR_3->controls_rwsem);
 }
 return VAR_6;
}
