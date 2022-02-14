
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1889 {int dummy; } ;
struct snd_ac97 {struct snd_ad1889* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ad1889*,scalar_t__,unsigned short) ;

__attribute__((used)) static void
FUNC_1(struct snd_ac97 *VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
 struct snd_ad1889 *VAR_4 = VAR_1->private_data;
 FUNC_0(VAR_4, VAR_0 + VAR_2, VAR_3);
}
