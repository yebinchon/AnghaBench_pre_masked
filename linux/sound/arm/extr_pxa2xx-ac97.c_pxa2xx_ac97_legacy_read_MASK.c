
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int num; } ;


 int FUNC_0 (int ,unsigned short) ;

__attribute__((used)) static unsigned short FUNC_1(struct snd_ac97 *VAR_0,
           unsigned short VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->num, VAR_1);
 if (VAR_2 < 0)
  return 0;
 else
  return (unsigned short)(VAR_2 & 0xffff);
}
