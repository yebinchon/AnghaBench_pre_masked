
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int dummy; } ;
struct snd_card {scalar_t__ private_data; } ;


 int FUNC_0 (struct snd_rme9652*) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct snd_rme9652 *VAR_1 = (struct snd_rme9652 *) VAR_0->private_data;

 if (VAR_1)
  FUNC_0(VAR_1);
}
