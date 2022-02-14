
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu {int dummy; } ;
struct snd_card {struct snd_motu* private_data; } ;


 int FUNC_0 (struct snd_motu*) ;
 int FUNC_1 (struct snd_motu*) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_0)
{
 struct snd_motu *VAR_1 = VAR_0->private_data;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
