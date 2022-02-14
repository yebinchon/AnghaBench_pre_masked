
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl3 {int connection_reg; scalar_t__ hardware; int max_voices; int (* command ) (struct snd_opl3*,int,int) ;scalar_t__ use_time; TYPE_1__* voices; struct snd_hwdep* hwdep; } ;
struct snd_hwdep {int open_mutex; scalar_t__ used; } ;
struct TYPE_2__ {int keyon_reg; scalar_t__ time; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_opl3*) ;
 int FUNC_3 (struct snd_opl3*,int,int) ;

int FUNC_4(struct snd_opl3 * VAR_6)
{
 int VAR_7;
 struct snd_hwdep *VAR_8 = VAR_6->hwdep;

 FUNC_0(&VAR_8->open_mutex);
 if (VAR_8->used) {
  FUNC_1(&VAR_8->open_mutex);
  return -VAR_0;
 }
 VAR_8->used++;
 FUNC_1(&VAR_8->open_mutex);

 FUNC_2(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6->voices[VAR_7].state = VAR_5;
  VAR_6->voices[VAR_7].time = 0;
  VAR_6->voices[VAR_7].keyon_reg = 0x00;
 }
 VAR_6->use_time = 0;
 VAR_6->connection_reg = 0x00;
 if (VAR_6->hardware >= VAR_2) {

  VAR_6->command(VAR_6, VAR_4 | VAR_3,
     VAR_6->connection_reg);
  VAR_6->max_voices = VAR_1;
 }
 return 0;
}
