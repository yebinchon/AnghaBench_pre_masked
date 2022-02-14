
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_intelhad {int need_reset; int connected; } ;


 int FUNC_0 (struct snd_intelhad*) ;
 int FUNC_1 (struct snd_intelhad*) ;

__attribute__((used)) static void FUNC_2(struct snd_intelhad *VAR_0)
{
 if (!VAR_0->need_reset || !VAR_0->connected)
  return;


 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 VAR_0->need_reset = 0;
}
