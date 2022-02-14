
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int running; int lock; int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_rme9652*) ;
 int FUNC_3 (struct snd_rme9652*) ;
 int FUNC_4 (struct snd_rme9652*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_rme9652 *VAR_2,
       unsigned int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 FUNC_5(&VAR_2->lock);

 if ((VAR_4 = VAR_2->running)) {
  FUNC_3(VAR_2);
 }

 VAR_3 >>= 7;
 VAR_5 = 0;
 while (VAR_3) {
  VAR_5++;
  VAR_3 >>= 1;
 }

 VAR_2->control_register &= ~VAR_1;
 VAR_2->control_register |= FUNC_1(VAR_5);

 FUNC_4(VAR_2, VAR_0, VAR_2->control_register);

 FUNC_0(VAR_2);

 if (VAR_4)
  FUNC_2(VAR_2);

 FUNC_6(&VAR_2->lock);

 return 0;
}
