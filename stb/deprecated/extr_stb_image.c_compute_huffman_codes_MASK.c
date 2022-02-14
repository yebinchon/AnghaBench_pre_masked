
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zhuffman ;
struct TYPE_5__ {int z_distance; int z_length; } ;
typedef TYPE_1__ zbuf ;
typedef int stbi__uint8 ;
typedef int codelength_sizes ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(zbuf *VAR_0)
{
   static stbi__uint8 VAR_1[19] = { 16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15 };
   zhuffman VAR_2;
   stbi__uint8 VAR_3[286+32+137];
   stbi__uint8 VAR_4[19];
   int VAR_5,VAR_6;

   int VAR_7 = FUNC_5(VAR_0,5) + 257;
   int VAR_8 = FUNC_5(VAR_0,5) + 1;
   int VAR_9 = FUNC_5(VAR_0,4) + 4;

   FUNC_2(VAR_4, 0, sizeof(VAR_4));
   for (VAR_5=0; VAR_5 < VAR_9; ++VAR_5) {
      int VAR_10 = FUNC_5(VAR_0,3);
      VAR_4[VAR_1[VAR_5]] = (stbi__uint8) VAR_10;
   }
   if (!FUNC_3(&VAR_2, VAR_4, 19)) return 0;

   VAR_6 = 0;
   while (VAR_6 < VAR_7 + VAR_8) {
      int VAR_11 = FUNC_4(VAR_0, &VAR_2);
      FUNC_0(VAR_11 >= 0 && VAR_11 < 19);
      if (VAR_11 < 16)
         VAR_3[VAR_6++] = (stbi__uint8) VAR_11;
      else if (VAR_11 == 16) {
         VAR_11 = FUNC_5(VAR_0,2)+3;
         FUNC_2(VAR_3+VAR_6, VAR_3[VAR_6-1], VAR_11);
         VAR_6 += VAR_11;
      } else if (VAR_11 == 17) {
         VAR_11 = FUNC_5(VAR_0,3)+3;
         FUNC_2(VAR_3+VAR_6, 0, VAR_11);
         VAR_6 += VAR_11;
      } else {
         FUNC_0(VAR_11 == 18);
         VAR_11 = FUNC_5(VAR_0,7)+11;
         FUNC_2(VAR_3+VAR_6, 0, VAR_11);
         VAR_6 += VAR_11;
      }
   }
   if (VAR_6 != VAR_7+VAR_8) return FUNC_1("bad codelengths","Corrupt PNG");
   if (!FUNC_3(&VAR_0->z_length, VAR_3, VAR_7)) return 0;
   if (!FUNC_3(&VAR_0->z_distance, VAR_3+VAR_7, VAR_8)) return 0;
   return 1;
}
