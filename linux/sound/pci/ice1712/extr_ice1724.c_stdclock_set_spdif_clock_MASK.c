
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_4, int VAR_5)
{
 unsigned char VAR_6;
 unsigned char VAR_7;
 VAR_6 = FUNC_1(FUNC_0(VAR_4, VAR_1));
 FUNC_2(VAR_6 | VAR_3, FUNC_0(VAR_4, VAR_1));

 VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_0));
 FUNC_2(VAR_7 & ~VAR_2, FUNC_0(VAR_4, VAR_0));
 return 0;
}
