
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int info_flags; int input_lock; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_mpu401*) ;
 int FUNC_1 (struct snd_mpu401*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct snd_mpu401*) ;

__attribute__((used)) static void FUNC_6(struct snd_mpu401 *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->info_flags & VAR_0) {
  FUNC_2(&VAR_3->input_lock, VAR_4);
  if (FUNC_4(VAR_2, &VAR_3->mode))
   FUNC_1(VAR_3);
  else
   FUNC_0(VAR_3);
  FUNC_3(&VAR_3->input_lock, VAR_4);
 }
 if (! (VAR_3->info_flags & VAR_1))


  FUNC_5(VAR_3);
}
