
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {int dummy; } ;
struct snd_ac97 {struct snd_m3* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_m3*) ;
 unsigned short FUNC_1 (struct snd_m3*,int ) ;
 int FUNC_2 (struct snd_m3*,int,int ) ;

__attribute__((used)) static unsigned short
FUNC_3(struct snd_ac97 *VAR_2, unsigned short VAR_3)
{
 struct snd_m3 *VAR_4 = VAR_2->private_data;
 unsigned short VAR_5 = 0xffff;

 if (FUNC_0(VAR_4))
  goto fail;
 FUNC_2(VAR_4, 0x80 | (VAR_3 & 0x7f), VAR_0);
 if (FUNC_0(VAR_4))
  goto fail;
 VAR_5 = FUNC_1(VAR_4, VAR_1);
fail:
 return VAR_5;
}
