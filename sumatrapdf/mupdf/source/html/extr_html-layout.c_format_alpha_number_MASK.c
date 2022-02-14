
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, char *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 - VAR_4 + 1;
 int VAR_7[40];
 int VAR_8, VAR_9;

 if (VAR_4 > 256)
  --VAR_6;


 VAR_8 = 0;
 while (VAR_3 > 0)
 {
  --VAR_3;
  VAR_9 = VAR_3 % VAR_6 + VAR_4;
  if (VAR_4 > 256 && VAR_9 > VAR_4 + 16)
   ++VAR_9;
  VAR_7[VAR_8++] = VAR_9;
  VAR_3 /= VAR_6;
 }

 while (VAR_8 > 0)
  VAR_1 += FUNC_0(VAR_1, VAR_7[--VAR_8]);
 *VAR_1++ = '.';
 *VAR_1++ = ' ';
 *VAR_1 = 0;
}
