
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interwave {int wss; int pcm_status_reg; int gus; int gus_status_reg; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct snd_interwave *VAR_2 = VAR_1;
 int VAR_3, VAR_4 = 5;
 int VAR_5 = 0;

 do {
  VAR_3 = 0;
  if (FUNC_1(VAR_2->gus_status_reg)) {
   VAR_5 = 1;
   FUNC_2(VAR_0, VAR_2->gus);
   VAR_3++;
  }
  if (FUNC_1(VAR_2->pcm_status_reg) & 0x01) {
   VAR_5 = 1;
   FUNC_3(VAR_0, VAR_2->wss);
   VAR_3++;
  }
 } while (VAR_3 && --VAR_4 > 0);
 return FUNC_0(VAR_5);
}
