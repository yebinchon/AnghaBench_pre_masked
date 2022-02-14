
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {unsigned int info_flags; int use_lock; } ;


 int VAR_0 ;
 struct snd_seq_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_seq_queue*) ;
 scalar_t__ FUNC_2 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_3 (int,int) ;
 int FUNC_4 (struct snd_seq_queue*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct snd_seq_queue *FUNC_7(int VAR_1, int VAR_2, unsigned int VAR_3)
{
 struct snd_seq_queue *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_4->info_flags = VAR_3;
 FUNC_4(VAR_4, VAR_1, 1);
 FUNC_6(&VAR_4->use_lock);
 if (FUNC_2(VAR_4) < 0) {
  FUNC_5(&VAR_4->use_lock);
  FUNC_1(VAR_4);
  return FUNC_0(-VAR_0);
 }
 return VAR_4;
}
