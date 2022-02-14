
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bgindex; int w; int h; int * out; int ** pal; } ;
typedef TYPE_1__ stbi_gif ;
typedef int stbi__uint8 ;



__attribute__((used)) static void FUNC_0(stbi_gif *VAR_0)
{
   int VAR_1;
   stbi__uint8 *VAR_2 = VAR_0->pal[VAR_0->bgindex];

   for (VAR_1 = 0; VAR_1 < VAR_0->w * VAR_0->h * 4; VAR_1 += 4) {
      stbi__uint8 *VAR_3 = &VAR_0->out[VAR_1];
      VAR_3[0] = VAR_2[2];
      VAR_3[1] = VAR_2[1];
      VAR_3[2] = VAR_2[0];
      VAR_3[3] = VAR_2[3];
   }
}
