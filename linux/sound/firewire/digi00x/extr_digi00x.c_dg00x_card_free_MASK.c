
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int dummy; } ;
struct snd_card {struct snd_dg00x* private_data; } ;


 int FUNC_0 (struct snd_dg00x*) ;
 int FUNC_1 (struct snd_dg00x*) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_0)
{
 struct snd_dg00x *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
