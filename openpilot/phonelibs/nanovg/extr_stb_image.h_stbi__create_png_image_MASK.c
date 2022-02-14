
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__uint32 ;
struct TYPE_6__ {int * out; TYPE_1__* s; } ;
typedef TYPE_2__ stbi__png ;
struct TYPE_5__ {int img_x; int img_y; int img_n; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(stbi__png *VAR_0, stbi_uc *VAR_1, stbi__uint32 VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
   stbi_uc *VAR_7;
   int VAR_8;
   if (!VAR_6)
      return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->s->img_x, VAR_0->s->img_y, VAR_4, VAR_5);


   VAR_7 = (stbi_uc *) FUNC_3(VAR_0->s->img_x * VAR_0->s->img_y * VAR_3);
   for (VAR_8=0; VAR_8 < 7; ++VAR_8) {
      int VAR_9[] = { 0,4,0,2,0,1,0 };
      int VAR_10[] = { 0,0,4,0,2,0,1 };
      int VAR_11[] = { 8,8,4,4,2,2,1 };
      int VAR_12[] = { 8,8,8,4,4,2,2 };
      int VAR_13,VAR_14,VAR_15,VAR_16;

      VAR_15 = (VAR_0->s->img_x - VAR_9[VAR_8] + VAR_11[VAR_8]-1) / VAR_11[VAR_8];
      VAR_16 = (VAR_0->s->img_y - VAR_10[VAR_8] + VAR_12[VAR_8]-1) / VAR_12[VAR_8];
      if (VAR_15 && VAR_16) {
         stbi__uint32 VAR_17 = ((((VAR_0->s->img_n * VAR_15 * VAR_4) + 7) >> 3) + 1) * VAR_16;
         if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_15, VAR_16, VAR_4, VAR_5)) {
            FUNC_0(VAR_7);
            return 0;
         }
         for (VAR_14=0; VAR_14 < VAR_16; ++VAR_14) {
            for (VAR_13=0; VAR_13 < VAR_15; ++VAR_13) {
               int VAR_18 = VAR_14*VAR_12[VAR_8]+VAR_10[VAR_8];
               int VAR_19 = VAR_13*VAR_11[VAR_8]+VAR_9[VAR_8];
               FUNC_1(VAR_7 + VAR_18*VAR_0->s->img_x*VAR_3 + VAR_19*VAR_3,
                      VAR_0->out + (VAR_14*VAR_15+VAR_13)*VAR_3, VAR_3);
            }
         }
         FUNC_0(VAR_0->out);
         VAR_1 += VAR_17;
         VAR_2 -= VAR_17;
      }
   }
   VAR_0->out = VAR_7;

   return 1;
}
