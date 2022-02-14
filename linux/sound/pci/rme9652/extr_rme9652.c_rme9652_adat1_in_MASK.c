
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct snd_rme9652 *VAR_1)
{
 if (VAR_1->control_register & VAR_0)
  return 1;
 return 0;
}
