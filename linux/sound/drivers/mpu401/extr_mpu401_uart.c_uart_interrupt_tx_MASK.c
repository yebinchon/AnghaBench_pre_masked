
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int output_lock; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_mpu401*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct snd_mpu401 *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_3(VAR_0, &VAR_2->mode) &&
     FUNC_3(VAR_1, &VAR_2->mode)) {
  FUNC_1(&VAR_2->output_lock, VAR_3);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_2->output_lock, VAR_3);
 }
}
