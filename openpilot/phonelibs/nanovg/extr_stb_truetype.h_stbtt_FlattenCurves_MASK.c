
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; float x; float y; int cy; int cx; } ;
typedef TYPE_1__ stbtt_vertex ;
typedef int stbtt__point ;
typedef int points ;


 int FUNC_0 (int*,void*) ;
 scalar_t__ FUNC_1 (int,void*) ;



 int FUNC_2 (int*,int ,float,float) ;
 int FUNC_3 (int*,int*,float,float,int ,int ,float,float,float,int ) ;

__attribute__((used)) static stbtt__point *FUNC_4(stbtt_vertex *VAR_0, int VAR_1, float VAR_2, int **VAR_3, int *VAR_4, void *VAR_5)
{
   stbtt__point *VAR_6=0;
   int VAR_7=0;

   float VAR_8 = VAR_2 * VAR_2;
   int VAR_9,VAR_10=0,VAR_11=0, VAR_12;


   for (VAR_9=0; VAR_9 < VAR_1; ++VAR_9)
      if (VAR_0[VAR_9].type == 128)
         ++VAR_10;

   *VAR_4 = VAR_10;
   if (VAR_10 == 0) return 0;

   *VAR_3 = (int *) FUNC_1(sizeof(**VAR_3) * VAR_10, VAR_5);

   if (*VAR_3 == 0) {
      *VAR_4 = 0;
      return 0;
   }


   for (VAR_12=0; VAR_12 < 2; ++VAR_12) {
      float VAR_13=0,VAR_14=0;
      if (VAR_12 == 1) {
         VAR_6 = (stbtt__point *) FUNC_1(VAR_7 * sizeof(VAR_6[0]), VAR_5);
         if (VAR_6 == ((void*)0)) goto error;
      }
      VAR_7 = 0;
      VAR_10= -1;
      for (VAR_9=0; VAR_9 < VAR_1; ++VAR_9) {
         switch (VAR_0[VAR_9].type) {
            case 128:

               if (VAR_10 >= 0)
                  (*VAR_3)[VAR_10] = VAR_7 - VAR_11;
               ++VAR_10;
               VAR_11 = VAR_7;

               VAR_13 = VAR_0[VAR_9].x, VAR_14 = VAR_0[VAR_9].y;
               FUNC_2(VAR_6, VAR_7++, VAR_13,VAR_14);
               break;
            case 129:
               VAR_13 = VAR_0[VAR_9].x, VAR_14 = VAR_0[VAR_9].y;
               FUNC_2(VAR_6, VAR_7++, VAR_13, VAR_14);
               break;
            case 130:
               FUNC_3(VAR_6, &VAR_7, VAR_13,VAR_14,
                                        VAR_0[VAR_9].cx, VAR_0[VAR_9].cy,
                                        VAR_0[VAR_9].x, VAR_0[VAR_9].y,
                                        VAR_8, 0);
               VAR_13 = VAR_0[VAR_9].x, VAR_14 = VAR_0[VAR_9].y;
               break;
         }
      }
      (*VAR_3)[VAR_10] = VAR_7 - VAR_11;
   }

   return VAR_6;
error:
   FUNC_0(VAR_6, VAR_5);
   FUNC_0(*VAR_3, VAR_5);
   *VAR_3 = 0;
   *VAR_4 = 0;
   return ((void*)0);
}
