
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es18xx {int dummy; } ;


 int FUNC_0 (struct snd_es18xx*,unsigned char) ;
 int FUNC_1 (struct snd_es18xx*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_es18xx *VAR_0, unsigned char VAR_1)
{
 if (VAR_1 < 0xa0)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}
