
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {int client; scalar_t__ voices; } ;


 int FUNC_0 (struct snd_emux*) ;
 int FUNC_1 (int) ;

void
FUNC_2(struct snd_emux *VAR_0)
{
 if (VAR_0->voices)
  FUNC_0(VAR_0);

 if (VAR_0->client >= 0) {
  FUNC_1(VAR_0->client);
  VAR_0->client = -1;
 }
}
