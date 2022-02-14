
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
struct snd_ac97_template {struct atmel_ac97c* private_data; } ;
struct atmel_ac97c {int ac97; int ac97_bus; } ;


 int FUNC_0 (struct snd_ac97_template*,int ,int) ;
 int FUNC_1 (int ,struct snd_ac97_template*,int *) ;

__attribute__((used)) static int FUNC_2(struct atmel_ac97c *VAR_0)
{
 struct snd_ac97_template VAR_1;
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.private_data = VAR_0;
 return FUNC_1(VAR_0->ac97_bus, &VAR_1, &VAR_0->ac97);
}
