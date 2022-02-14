
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; scalar_t__ passthru; scalar_t__ thru_bits; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_rme9652*) ;
 int FUNC_3 (struct snd_rme9652*,int) ;
 int FUNC_4 (struct snd_rme9652*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct snd_rme9652 *VAR_4)
{
 unsigned int VAR_5;
 VAR_4->control_register =
     VAR_2 | FUNC_1(7);

 FUNC_4(VAR_4, VAR_1, VAR_4->control_register);

 FUNC_2(VAR_4);
 FUNC_0(VAR_4);



 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  FUNC_4(VAR_4, VAR_3 + VAR_5 * 4, 0);

 VAR_4->thru_bits = 0;
 VAR_4->passthru = 0;



 FUNC_3(VAR_4, 48000);
}
