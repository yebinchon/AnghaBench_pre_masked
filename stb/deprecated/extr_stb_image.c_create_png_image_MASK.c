
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbi__uint8 ;
typedef int stbi__uint32 ;
struct TYPE_6__ {int * out; TYPE_1__* s; } ;
typedef TYPE_2__ png ;
struct TYPE_5__ {int img_x; int img_y; } ;


 int FUNC_0 (TYPE_2__*,int *,int,int,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(png *VAR_1, stbi__uint8 *VAR_2, stbi__uint32 VAR_3, int VAR_4, int VAR_5)
{
   stbi__uint8 *VAR_6;
   int VAR_7;
   int VAR_8;
   if (!VAR_5)
      return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->s->img_x, VAR_1->s->img_y);
   VAR_8 = VAR_0;
   VAR_0 = 0;


   VAR_6 = (stbi__uint8 *) FUNC_2(VAR_1->s->img_x * VAR_1->s->img_y * VAR_4);
   for (VAR_7=0; VAR_7 < 7; ++VAR_7) {
      int VAR_9[] = { 0,4,0,2,0,1,0 };
      int VAR_10[] = { 0,0,4,0,2,0,1 };
      int VAR_11[] = { 8,8,4,4,2,2,1 };
      int VAR_12[] = { 8,8,8,4,4,2,2 };
      int VAR_13,VAR_14,VAR_15,VAR_16;

      VAR_15 = (VAR_1->s->img_x - VAR_9[VAR_7] + VAR_11[VAR_7]-1) / VAR_11[VAR_7];
      VAR_16 = (VAR_1->s->img_y - VAR_10[VAR_7] + VAR_12[VAR_7]-1) / VAR_12[VAR_7];
      if (VAR_15 && VAR_16) {
         if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_15, VAR_16)) {
            FUNC_1(VAR_6);
            return 0;
         }
         for (VAR_14=0; VAR_14 < VAR_16; ++VAR_14)
            for (VAR_13=0; VAR_13 < VAR_15; ++VAR_13)
               FUNC_3(VAR_6 + (VAR_14*VAR_12[VAR_7]+VAR_10[VAR_7])*VAR_1->s->img_x*VAR_4 + (VAR_13*VAR_11[VAR_7]+VAR_9[VAR_7])*VAR_4,
                      VAR_1->out + (VAR_14*VAR_15+VAR_13)*VAR_4, VAR_4);
         FUNC_1(VAR_1->out);
         VAR_2 += (VAR_15*VAR_4+1)*VAR_16;
         VAR_3 -= (VAR_15*VAR_4+1)*VAR_16;
      }
   }
   VAR_1->out = VAR_6;

   VAR_0 = VAR_8;
   return 1;
}
