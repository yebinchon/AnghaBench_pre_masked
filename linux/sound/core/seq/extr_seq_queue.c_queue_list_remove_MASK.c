
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int owner; int klocked; int owner_lock; } ;


 int VAR_0 ;
 struct snd_seq_queue** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct snd_seq_queue *FUNC_4(int VAR_3, int VAR_4)
{
 struct snd_seq_queue *VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_2, VAR_6);
 VAR_5 = VAR_1[VAR_3];
 if (VAR_5) {
  FUNC_0(&VAR_5->owner_lock);
  if (VAR_5->owner == VAR_4) {

   VAR_5->klocked = 1;
   FUNC_2(&VAR_5->owner_lock);
   VAR_1[VAR_3] = ((void*)0);
   VAR_0--;
   FUNC_3(&VAR_2, VAR_6);
   return VAR_5;
  }
  FUNC_2(&VAR_5->owner_lock);
 }
 FUNC_3(&VAR_2, VAR_6);
 return ((void*)0);
}
