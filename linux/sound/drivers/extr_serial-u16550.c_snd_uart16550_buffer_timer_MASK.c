
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct snd_uart16550 {int open_lock; } ;


 int VAR_0 ;
 struct snd_uart16550* FUNC_0 (struct snd_uart16550*,struct timer_list*,int ) ;
 int FUNC_1 (struct snd_uart16550*) ;
 int FUNC_2 (struct snd_uart16550*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_1)
{
 unsigned long VAR_2;
 struct snd_uart16550 *VAR_3;

 VAR_3 = FUNC_0(VAR_3, VAR_1, VAR_0);
 FUNC_3(&VAR_3->open_lock, VAR_2);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_4(&VAR_3->open_lock, VAR_2);
}
