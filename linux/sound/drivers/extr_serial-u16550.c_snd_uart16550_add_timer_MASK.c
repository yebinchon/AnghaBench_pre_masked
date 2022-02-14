
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {int timer_running; int buffer_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct snd_uart16550 *VAR_2)
{
 if (!VAR_2->timer_running) {

  FUNC_0(&VAR_2->buffer_timer, VAR_1 + (VAR_0 + 255) / 256);
  VAR_2->timer_running = 1;
 }
}
