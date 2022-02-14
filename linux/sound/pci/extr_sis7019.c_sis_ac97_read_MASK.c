
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u32 ;
struct snd_ac97 {size_t num; int private_data; } ;





 unsigned short FUNC_0 (int ,size_t,unsigned short) ;

__attribute__((used)) static unsigned short FUNC_1(struct snd_ac97 *VAR_0, unsigned short VAR_1)
{
 static const u32 VAR_2[3] = {
  128,
  130,
  129,
 };
 return FUNC_0(VAR_0->private_data, VAR_0->num,
     (VAR_1 << 8) | VAR_2[VAR_0->num]);
}
