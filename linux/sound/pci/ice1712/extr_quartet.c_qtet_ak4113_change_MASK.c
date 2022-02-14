
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int akm; } ;
struct ak4113 {struct snd_ice1712* change_callback_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct ak4113*) ;

__attribute__((used)) static void FUNC_3(struct ak4113 *VAR_1, unsigned char VAR_2,
  unsigned char VAR_3)
{
 struct snd_ice1712 *VAR_4 = VAR_1->change_callback_private;
 int VAR_5;
 if ((FUNC_1(VAR_4) == VAR_0) &&
   VAR_3) {

  VAR_5 = FUNC_2(VAR_1);


  FUNC_0(VAR_4->akm, VAR_5);
 }
}
