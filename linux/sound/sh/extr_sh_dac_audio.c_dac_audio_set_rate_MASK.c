
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {int wakeups_per_second; int rate; } ;



__attribute__((used)) static void FUNC_0(struct snd_sh_dac *VAR_0)
{
 VAR_0->wakeups_per_second = 1000000000 / VAR_0->rate;
}
