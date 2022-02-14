
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;






__attribute__((used)) static unsigned char FUNC_0(struct snd_cs4231 *VAR_7, int VAR_8,
        int VAR_9)
{
 unsigned char VAR_10;

 VAR_10 = VAR_4;
 switch (VAR_8) {
 case 130:
  VAR_10 = VAR_6;
  break;
 case 132:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 131:
  VAR_10 = VAR_0;
  break;
 }
 if (VAR_9 > 1)
  VAR_10 |= VAR_5;
 return VAR_10;
}
