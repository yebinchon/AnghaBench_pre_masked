
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int akm; scalar_t__ (* is_spdif_master ) (struct snd_ice1712*) ;} ;
struct ak4114 {struct snd_ice1712* change_callback_private; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ak4114*) ;
 scalar_t__ FUNC_2 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_3(struct ak4114 *VAR_0, unsigned char VAR_1,
          unsigned char VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_0->change_callback_private;
 int VAR_4;
 if (VAR_3->is_spdif_master(VAR_3) && VAR_2) {

  VAR_4 = FUNC_1(VAR_0);


  FUNC_0(VAR_3->akm, VAR_4);
 }
}
