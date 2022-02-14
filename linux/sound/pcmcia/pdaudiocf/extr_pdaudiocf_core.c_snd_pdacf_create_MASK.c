
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int ak4117_lock; int reg_lock; struct snd_card* card; } ;
struct snd_card {struct snd_pdacf* private_data; } ;


 int VAR_0 ;
 struct snd_pdacf* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pdacf*) ;
 int FUNC_3 (int *) ;

struct snd_pdacf *FUNC_4(struct snd_card *VAR_1)
{
 struct snd_pdacf *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->card = VAR_1;
 FUNC_1(&VAR_2->reg_lock);
 FUNC_3(&VAR_2->ak4117_lock);
 VAR_1->private_data = VAR_2;

 FUNC_2(VAR_2);
 return VAR_2;
}
