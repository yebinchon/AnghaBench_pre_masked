
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi__uint8 ;
typedef int stbi__uint32 ;
struct TYPE_5__ {int* out; TYPE_1__* s; } ;
typedef TYPE_2__ png ;
struct TYPE_4__ {int img_x; int img_y; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(png *VAR_0, stbi__uint8 *VAR_1, int VAR_2, int VAR_3)
{
   stbi__uint32 VAR_4, VAR_5 = VAR_0->s->img_x * VAR_0->s->img_y;
   stbi__uint8 *VAR_6, *VAR_7, *VAR_8 = VAR_0->out;

   VAR_6 = (stbi__uint8 *) FUNC_3(VAR_5 * VAR_3);
   if (VAR_6 == ((void*)0)) return FUNC_1("outofmem", "Out of memory");


   VAR_7 = VAR_6;

   if (VAR_3 == 3) {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         int VAR_9 = VAR_8[VAR_4]*4;
         VAR_6[0] = VAR_1[VAR_9 ];
         VAR_6[1] = VAR_1[VAR_9+1];
         VAR_6[2] = VAR_1[VAR_9+2];
         VAR_6 += 3;
      }
   } else {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         int VAR_10 = VAR_8[VAR_4]*4;
         VAR_6[0] = VAR_1[VAR_10 ];
         VAR_6[1] = VAR_1[VAR_10+1];
         VAR_6[2] = VAR_1[VAR_10+2];
         VAR_6[3] = VAR_1[VAR_10+3];
         VAR_6 += 4;
      }
   }
   FUNC_2(VAR_0->out);
   VAR_0->out = VAR_7;

   FUNC_0(VAR_2);

   return 1;
}
