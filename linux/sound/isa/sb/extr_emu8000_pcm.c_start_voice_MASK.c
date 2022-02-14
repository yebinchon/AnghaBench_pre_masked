
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8k_pcm {int* panning; int timer_running; int timer_lock; int timer; int pitch; struct snd_emu8000* emu; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int,int) ;
 int FUNC_2 (struct snd_emu8000*,int,int) ;
 int FUNC_3 (struct snd_emu8000*,int,int) ;
 int FUNC_4 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_5 (struct snd_emu8000*,int,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct snd_emu8k_pcm *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct snd_emu8000 *VAR_4 = VAR_1->emu;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = FUNC_6(VAR_1->pitch);


 FUNC_3(VAR_4, VAR_2, 0xff00);
 FUNC_5(VAR_4, VAR_2, 0xffff);
 FUNC_1(VAR_4, VAR_2, 0xffff);

 FUNC_2(VAR_4, VAR_2, 0x7f7f);

 VAR_5 = 0;
 if (VAR_1->panning[VAR_2] == 0)
  VAR_6 = 0xff;
 else
  VAR_6 = (-VAR_1->panning[VAR_2]) & 0xff;
 VAR_5 = (VAR_5 << 8) | (VAR_7 << 16) | VAR_6;
 FUNC_4(VAR_4, VAR_2, VAR_5);
 FUNC_0(VAR_4, VAR_2, VAR_7 << 16);


 FUNC_8(&VAR_1->timer_lock, VAR_3);
 if (! VAR_1->timer_running) {
  FUNC_7(&VAR_1->timer, VAR_0 + 1);
  VAR_1->timer_running = 1;
 }
 FUNC_9(&VAR_1->timer_lock, VAR_3);
}
