
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ stbi_uc ;
struct TYPE_3__ {size_t bgindex; int w; scalar_t__* out; scalar_t__** pal; } ;
typedef TYPE_1__ stbi__gif ;



__attribute__((used)) static void FUNC_0(stbi__gif *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5, VAR_6;
   stbi_uc *VAR_7 = VAR_0->pal[VAR_0->bgindex];
   for (VAR_6 = VAR_2; VAR_6 < VAR_4; VAR_6 += 4 * VAR_0->w) {
      for (VAR_5 = VAR_1; VAR_5 < VAR_3; VAR_5 += 4) {
         stbi_uc *VAR_8 = &VAR_0->out[VAR_6 + VAR_5];
         VAR_8[0] = VAR_7[2];
         VAR_8[1] = VAR_7[1];
         VAR_8[2] = VAR_7[0];
         VAR_8[3] = 0;
      }
   }
}
