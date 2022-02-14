
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt__edge ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(stbtt__edge *VAR_0, int VAR_1)
{
   int VAR_2,VAR_3;
   for (VAR_2=1; VAR_2 < VAR_1; ++VAR_2) {
      stbtt__edge VAR_4 = VAR_0[VAR_2], *VAR_5 = &VAR_4;
      VAR_3 = VAR_2;
      while (VAR_3 > 0) {
         stbtt__edge *VAR_6 = &VAR_0[VAR_3-1];
         int VAR_7 = FUNC_0(VAR_5,VAR_6);
         if (!VAR_7) break;
         VAR_0[VAR_3] = VAR_0[VAR_3-1];
         --VAR_3;
      }
      if (VAR_2 != VAR_3)
         VAR_0[VAR_3] = VAR_4;
   }
}
