
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_akm4xxx*,int ,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_akm4xxx *VAR_5, unsigned int VAR_6)
{
 unsigned char VAR_7;

 if (VAR_6 == 0)

  return;


 if (VAR_6 > 108000)
  VAR_7 = VAR_3 | VAR_1;
 else if (VAR_6 > 54000)
  VAR_7 = VAR_2 | VAR_0;
 else
  VAR_7 = 0;


 FUNC_0(VAR_5, VAR_4, VAR_2 | VAR_3 |
   VAR_0 | VAR_1, VAR_7);
}
