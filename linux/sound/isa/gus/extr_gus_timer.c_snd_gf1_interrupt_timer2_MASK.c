
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {int sticks; } ;
struct TYPE_2__ {struct snd_timer* timer2; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int FUNC_0 (struct snd_timer*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_gus_card * VAR_0)
{
 struct snd_timer *VAR_1 = VAR_0->gf1.timer2;

 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_1, VAR_1->sticks);
}
