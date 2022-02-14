
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ac97 {int subsystem_device; scalar_t__ subsystem_vendor; } ;



__attribute__((used)) static int FUNC_0(struct snd_ac97 *VAR_0, const unsigned int *VAR_1)
{
 u32 VAR_2 = ((u32)VAR_0->subsystem_vendor << 16) | VAR_0->subsystem_device;
 for (; *VAR_1; VAR_1++)
  if (*VAR_1 == VAR_2)
   return 1;
 return 0;
}
