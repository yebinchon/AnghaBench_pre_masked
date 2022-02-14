
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl4 {int chset; int off_voices; TYPE_1__* voices; int on_voices; int reg_lock; } ;
struct TYPE_2__ {int number; int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_opl4*,scalar_t__,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct snd_opl4 *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3->reg_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_4(VAR_3, VAR_2 + VAR_5, VAR_0);
 FUNC_6(&VAR_3->reg_lock, VAR_4);

 FUNC_0(&VAR_3->off_voices);
 FUNC_0(&VAR_3->on_voices);
 FUNC_2(VAR_3->voices, 0, sizeof(VAR_3->voices));
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->voices[VAR_5].number = VAR_5;
  FUNC_1(&VAR_3->voices[VAR_5].list, &VAR_3->off_voices);
 }

 FUNC_3(VAR_3->chset);
}
