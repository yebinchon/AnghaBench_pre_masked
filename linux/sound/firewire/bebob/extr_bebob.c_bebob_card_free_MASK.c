
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct snd_bebob* private_data; } ;
struct snd_bebob {int card_index; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_bebob*) ;

__attribute__((used)) static void
FUNC_4(struct snd_card *VAR_2)
{
 struct snd_bebob *VAR_3 = VAR_2->private_data;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_3->card_index, VAR_1);
 FUNC_2(&VAR_0);

 FUNC_3(VAR_3);
}
