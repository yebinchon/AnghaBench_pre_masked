
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ first_segment; scalar_t__ first_v_segment; int advance; int voff; } ;
typedef TYPE_1__ chardata ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(int VAR_7, chardata *VAR_8, int VAR_9)
{
   int VAR_10 = VAR_7, VAR_11, VAR_12 = 0, VAR_13;

   VAR_8->first_segment = FUNC_2(VAR_4);
   VAR_8->first_v_segment = FUNC_2(VAR_5) - VAR_9;
   FUNC_1(VAR_8->first_segment == FUNC_2(VAR_4));
   FUNC_1(VAR_8->first_v_segment + VAR_9 == FUNC_2(VAR_5));


   VAR_11 = VAR_7+1;
   while (VAR_0[VAR_11*3] == 255)
      ++VAR_11;
   VAR_8->advance = VAR_11 - VAR_10 + 1;

   VAR_2[0] = VAR_2[1] = 0;
   VAR_3[0] = VAR_3[1] = 0;

   for (VAR_13=2; VAR_13 < VAR_1; ++VAR_13) {
      for (VAR_7=VAR_10; VAR_7 < VAR_11; ++VAR_7) {
         if (VAR_0[VAR_13*3*VAR_6+VAR_7*3+1] < 255) {
            VAR_12 = VAR_13;
            break;
         }
      }
      if (VAR_12)
         break;
   }
   VAR_8->voff = VAR_12 > 2;
   if (VAR_12 > 2)
      VAR_12 = 3;

   for (VAR_7=VAR_10; VAR_7 < VAR_11; ++VAR_7) {
      int VAR_14;
      for (VAR_14=2; VAR_14 < VAR_1; ++VAR_14) {
         if (VAR_0[VAR_14*3*VAR_6+VAR_7*3+1] < 255) {
            if (VAR_0[VAR_14*3*VAR_6+VAR_7*3+0] == 255) {
               int VAR_15=0;
               while (VAR_14+VAR_15 < VAR_1 && VAR_0[(VAR_14+VAR_15)*3*VAR_6+VAR_7*3+0] == 255 && VAR_0[(VAR_14+VAR_15)*3*VAR_6+VAR_7*3+1] == 0) {
                  VAR_0[(VAR_14+VAR_15)*3*VAR_6+VAR_7*3+0] = 0;
                  ++VAR_15;
               }
               FUNC_0(VAR_7-VAR_10,VAR_14-VAR_12,VAR_15,0);
            }
            if (VAR_0[VAR_14*3*VAR_6+VAR_7*3+2] == 255) {
               int VAR_16=0;
               while (VAR_7+VAR_16 < VAR_11 && VAR_0[VAR_14*3*VAR_6+(VAR_7+VAR_16)*3+2] == 255 && VAR_0[VAR_14*3*VAR_6+(VAR_7+VAR_16)*3+1] == 0) {
                  VAR_0[VAR_14*3*VAR_6+(VAR_7+VAR_16)*3+2] = 0;
                  ++VAR_16;
               }
               FUNC_0(VAR_7-VAR_10,VAR_14-VAR_12,VAR_16,1);
            }
         }
      }
   }
   return VAR_11;
}
