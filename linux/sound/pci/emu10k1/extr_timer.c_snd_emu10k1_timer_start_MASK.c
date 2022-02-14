
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int sticks; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 struct snd_emu10k1* FUNC_2 (struct snd_timer*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_timer *VAR_3)
{
 struct snd_emu10k1 *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = VAR_3->sticks - 1;
 if (VAR_6 < 5 )
  VAR_6 = 5;
 FUNC_3(&VAR_4->reg_lock, VAR_5);
 FUNC_1(VAR_4, VAR_0);
 FUNC_0(VAR_6 & VAR_2, VAR_4->port + VAR_1);
 FUNC_4(&VAR_4->reg_lock, VAR_5);
 return 0;
}
