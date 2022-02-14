
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {struct nm256* private_data; } ;
struct nm256 {unsigned short* ac97_regs; } ;


 int FUNC_0 (unsigned short) ;

__attribute__((used)) static unsigned short
FUNC_1(struct snd_ac97 *VAR_0, unsigned short VAR_1)
{
 struct nm256 *VAR_2 = VAR_0->private_data;
 int VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 < 0)
  return 0;
 return VAR_2->ac97_regs[VAR_3];
}
