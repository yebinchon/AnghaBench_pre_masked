
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_3, unsigned int VAR_4)
{
 unsigned char VAR_5, VAR_6;

 VAR_5 = FUNC_2(FUNC_1(VAR_3, VAR_0));
 VAR_6 = VAR_5 & ~VAR_2;
 if (VAR_5 != VAR_6)
  FUNC_3(VAR_6, FUNC_1(VAR_3, VAR_0));
 FUNC_4(VAR_4, FUNC_0(VAR_3, VAR_1));
 if (VAR_5 != VAR_6)
  FUNC_3(VAR_5, FUNC_1(VAR_3, VAR_0));
 FUNC_4(VAR_4, FUNC_0(VAR_3, VAR_1));
}
