
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card_sb16 {int fm_res; } ;
struct snd_card {struct snd_card_sb16* private_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct snd_card_sb16 *VAR_1 = VAR_0->private_data;

 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_1->fm_res);
}
