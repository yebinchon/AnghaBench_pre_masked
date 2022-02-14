
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;



__attribute__((used)) static void FUNC_0(uint16 *VAR_0, int VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4 = -1;
   int VAR_5 = 65536;
   int VAR_6;
   for (VAR_6=0; VAR_6 < VAR_1; ++VAR_6) {
      if (VAR_0[VAR_6] > VAR_4 && VAR_0[VAR_6] < VAR_0[VAR_1]) { *VAR_2 = VAR_6; VAR_4 = VAR_0[VAR_6]; }
      if (VAR_0[VAR_6] < VAR_5 && VAR_0[VAR_6] > VAR_0[VAR_1]) { *VAR_3 = VAR_6; VAR_5 = VAR_0[VAR_6]; }
   }
}
