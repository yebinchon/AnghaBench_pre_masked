
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {int clkSource; int clkRate; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_korg1212*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_korg1212 *VAR_1, int VAR_2)
{

 if (VAR_2 < 0 || VAR_2 > 2)
  return -VAR_0;

        VAR_1->clkSource = VAR_2;

        FUNC_0(VAR_1, VAR_1->clkRate);

        return 0;
}
