
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, char *VAR_1, size_t VAR_2)
{
   int VAR_3 = VAR_0[0]*256 + VAR_0[1];
   int VAR_4;
   for (VAR_4=0; VAR_4 < VAR_3 && VAR_4+1 < (int) VAR_2; ++VAR_4)
      VAR_1[VAR_4] = (char) VAR_0[VAR_4+2];
   VAR_1[VAR_4] = 0;
}
