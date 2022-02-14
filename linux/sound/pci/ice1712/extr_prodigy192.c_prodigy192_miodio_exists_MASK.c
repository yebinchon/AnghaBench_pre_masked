
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char const FUNC_0 (struct snd_ice1712*,unsigned char) ;
 int FUNC_1 (struct snd_ice1712*,unsigned char,unsigned char const) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_1)
{

 unsigned char VAR_2;
 const unsigned char VAR_3 = 0xd1;
 unsigned char VAR_4 = VAR_0;
 int VAR_5 = 0;

 VAR_2 = FUNC_0(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_4, VAR_3);
 if (FUNC_0(VAR_1, VAR_4) == VAR_3) {


  FUNC_1(VAR_1, VAR_4, VAR_2);
  VAR_5 = 1;
 }
 return VAR_5;
}
