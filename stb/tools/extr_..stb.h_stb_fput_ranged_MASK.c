
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(FILE *VAR_0, int VAR_1, int VAR_2, stb_uint VAR_3)
{
   VAR_1 -= VAR_2;
   if (VAR_3 <= (1 << 31))
      FUNC_0((stb_uint) VAR_1 < VAR_3);
   if (VAR_3 > (1 << 24)) FUNC_1(VAR_1 >> 24, VAR_0);
   if (VAR_3 > (1 << 16)) FUNC_1(VAR_1 >> 16, VAR_0);
   if (VAR_3 > (1 << 8)) FUNC_1(VAR_1 >> 8, VAR_0);
   FUNC_1(VAR_1,VAR_0);
}
