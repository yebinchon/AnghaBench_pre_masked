
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {scalar_t__ idleMonitorOn; } ;


 int FUNC_0 (struct snd_korg1212*) ;

__attribute__((used)) static void FUNC_1(struct snd_korg1212 *VAR_0)
{
        if (VAR_0->idleMonitorOn) {
  FUNC_0(VAR_0);
                VAR_0->idleMonitorOn = 0;
        }
}
