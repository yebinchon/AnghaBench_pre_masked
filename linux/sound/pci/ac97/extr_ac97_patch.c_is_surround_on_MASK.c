
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int channel_mode; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_ac97 *VAR_0)
{
 return VAR_0->channel_mode >= 1;
}
