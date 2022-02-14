
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_6__ {char* zout; char* zout_end; char* zout_start; int z_distance; int z_length; } ;
typedef TYPE_1__ stbi__zbuf ;


 int FUNC_0 (char*,char*) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(stbi__zbuf *VAR_4)
{
   char *VAR_5 = VAR_4->zout;
   for(;;) {
      int VAR_6 = FUNC_2(VAR_4, &VAR_4->z_length);
      if (VAR_6 < 256) {
         if (VAR_6 < 0) return FUNC_0("bad huffman code","Corrupt PNG");
         if (VAR_5 >= VAR_4->zout_end) {
            if (!FUNC_1(VAR_4, VAR_5, 1)) return 0;
            VAR_5 = VAR_4->zout;
         }
         *VAR_5++ = (char) VAR_6;
      } else {
         stbi_uc *VAR_7;
         int VAR_8,VAR_9;
         if (VAR_6 == 256) {
            VAR_4->zout = VAR_5;
            return 1;
         }
         VAR_6 -= 257;
         VAR_8 = VAR_2[VAR_6];
         if (VAR_3[VAR_6]) VAR_8 += FUNC_3(VAR_4, VAR_3[VAR_6]);
         VAR_6 = FUNC_2(VAR_4, &VAR_4->z_distance);
         if (VAR_6 < 0) return FUNC_0("bad huffman code","Corrupt PNG");
         VAR_9 = VAR_0[VAR_6];
         if (VAR_1[VAR_6]) VAR_9 += FUNC_3(VAR_4, VAR_1[VAR_6]);
         if (VAR_5 - VAR_4->zout_start < VAR_9) return FUNC_0("bad dist","Corrupt PNG");
         if (VAR_5 + VAR_8 > VAR_4->zout_end) {
            if (!FUNC_1(VAR_4, VAR_5, VAR_8)) return 0;
            VAR_5 = VAR_4->zout;
         }
         VAR_7 = (stbi_uc *) (VAR_5 - VAR_9);
         if (VAR_9 == 1) {
            stbi_uc VAR_10 = *VAR_7;
            if (VAR_8) { do *VAR_5++ = VAR_10; while (--VAR_8); }
         } else {
            if (VAR_8) { do *VAR_5++ = *VAR_7++; while (--VAR_8); }
         }
      }
   }
}
