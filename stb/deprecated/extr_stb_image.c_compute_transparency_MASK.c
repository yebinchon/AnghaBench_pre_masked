
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi__uint8 ;
typedef scalar_t__ stbi__uint32 ;
struct TYPE_4__ {scalar_t__ img_x; scalar_t__ img_y; } ;
typedef TYPE_1__ stbi ;
struct TYPE_5__ {int* out; TYPE_1__* s; } ;
typedef TYPE_2__ png ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(png *VAR_0, stbi__uint8 VAR_1[3], int VAR_2)
{
   stbi *VAR_3 = VAR_0->s;
   stbi__uint32 VAR_4, VAR_5 = VAR_3->img_x * VAR_3->img_y;
   stbi__uint8 *VAR_6 = VAR_0->out;



   FUNC_0(VAR_2 == 2 || VAR_2 == 4);

   if (VAR_2 == 2) {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         VAR_6[1] = (VAR_6[0] == VAR_1[0] ? 0 : 255);
         VAR_6 += 2;
      }
   } else {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         if (VAR_6[0] == VAR_1[0] && VAR_6[1] == VAR_1[1] && VAR_6[2] == VAR_1[2])
            VAR_6[3] = 0;
         VAR_6 += 4;
      }
   }
   return 1;
}
