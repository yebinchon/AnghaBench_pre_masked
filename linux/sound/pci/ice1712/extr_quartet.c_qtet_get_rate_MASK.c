
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (unsigned char*) ;
 unsigned char VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char FUNC_1 (struct snd_ice1712*) ;
 unsigned int* VAR_2 ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_ice1712 *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 VAR_5 = FUNC_1(VAR_3) & VAR_0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_1[VAR_4] == VAR_5)
   return VAR_2[VAR_4];
 return 0;
}
