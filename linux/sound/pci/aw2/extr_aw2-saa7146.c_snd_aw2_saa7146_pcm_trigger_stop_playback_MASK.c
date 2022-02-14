
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct snd_aw2_saa7146 *VAR_6,
            int VAR_7)
{
 unsigned int VAR_8 = 0;
 VAR_8 = FUNC_0(VAR_0);
 if (VAR_7 == 0) {

  VAR_8 &= ~(3 * VAR_5);
  FUNC_1(VAR_8, VAR_0);

  FUNC_1((VAR_3 << 16), VAR_1);
 } else if (VAR_7 == 1) {

  VAR_8 &= ~(3 * VAR_4);
  FUNC_1(VAR_8, VAR_0);

  FUNC_1((VAR_2 << 16), VAR_1);
 }
}
