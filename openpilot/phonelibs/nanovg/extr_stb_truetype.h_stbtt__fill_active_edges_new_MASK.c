
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float ey; float fdx; float fx; float fdy; float sy; int direction; struct TYPE_4__* next; } ;
typedef TYPE_1__ stbtt__active_edge ;


 int FUNC_0 (int) ;
 float FUNC_1 (float) ;
 int FUNC_2 (float*,int,TYPE_1__*,float,float,float,float) ;

__attribute__((used)) static void FUNC_3(float *VAR_0, float *VAR_1, int VAR_2, stbtt__active_edge *VAR_3, float VAR_4)
{
   float VAR_5 = VAR_4+1;

   while (VAR_3) {



      FUNC_0(VAR_3->ey >= VAR_4);

      if (VAR_3->fdx == 0) {
         float VAR_6 = VAR_3->fx;
         if (VAR_6 < VAR_2) {
            if (VAR_6 >= 0) {
               FUNC_2(VAR_0,(int) VAR_6,VAR_3, VAR_6,VAR_4, VAR_6,VAR_5);
               FUNC_2(VAR_1-1,(int) VAR_6+1,VAR_3, VAR_6,VAR_4, VAR_6,VAR_5);
            } else {
               FUNC_2(VAR_1-1,0,VAR_3, VAR_6,VAR_4, VAR_6,VAR_5);
            }
         }
      } else {
         float VAR_7 = VAR_3->fx;
         float VAR_8 = VAR_3->fdx;
         float VAR_9 = VAR_7 + VAR_8;
         float VAR_10, VAR_11;
         float VAR_12,VAR_13;
         float VAR_14 = VAR_3->fdy;
         FUNC_0(VAR_3->sy <= VAR_5 && VAR_3->ey >= VAR_4);




         if (VAR_3->sy > VAR_4) {
            VAR_10 = VAR_7 + VAR_8 * (VAR_3->sy - VAR_4);
            VAR_12 = VAR_3->sy;
         } else {
            VAR_10 = VAR_7;
            VAR_12 = VAR_4;
         }
         if (VAR_3->ey < VAR_5) {
            VAR_11 = VAR_7 + VAR_8 * (VAR_3->ey - VAR_4);
            VAR_13 = VAR_3->ey;
         } else {
            VAR_11 = VAR_9;
            VAR_13 = VAR_5;
         }

         if (VAR_10 >= 0 && VAR_11 >= 0 && VAR_10 < VAR_2 && VAR_11 < VAR_2) {


            if ((int) VAR_10 == (int) VAR_11) {
               float VAR_15;

               int VAR_16 = (int) VAR_10;
               VAR_15 = VAR_13 - VAR_12;
               FUNC_0(VAR_16 >= 0 && VAR_16 < VAR_2);
               VAR_0[VAR_16] += VAR_3->direction * (1-((VAR_10 - VAR_16) + (VAR_11-VAR_16))/2) * VAR_15;
               VAR_1[VAR_16] += VAR_3->direction * VAR_15;
            } else {
               int VAR_17,VAR_18,VAR_19;
               float VAR_20, VAR_21, VAR_22, VAR_23;

               if (VAR_10 > VAR_11) {

                  float VAR_24;
                  VAR_12 = VAR_5 - (VAR_12 - VAR_4);
                  VAR_13 = VAR_5 - (VAR_13 - VAR_4);
                  VAR_24 = VAR_12, VAR_12 = VAR_13, VAR_13 = VAR_24;
                  VAR_24 = VAR_11, VAR_11 = VAR_10, VAR_10 = VAR_24;
                  VAR_8 = -VAR_8;
                  VAR_14 = -VAR_14;
                  VAR_24 = VAR_7, VAR_7 = VAR_9, VAR_9 = VAR_24;
               }

               VAR_18 = (int) VAR_10;
               VAR_19 = (int) VAR_11;

               VAR_20 = (VAR_18+1 - VAR_7) * VAR_14 + VAR_4;

               VAR_22 = VAR_3->direction;

               VAR_23 = VAR_22 * (VAR_20-VAR_12);

               VAR_0[VAR_18] += VAR_23 * (1-((VAR_10 - VAR_18)+(VAR_18+1-VAR_18))/2);

               VAR_21 = VAR_22 * VAR_14;
               for (VAR_17 = VAR_18+1; VAR_17 < VAR_19; ++VAR_17) {
                  VAR_0[VAR_17] += VAR_23 + VAR_21/2;
                  VAR_23 += VAR_21;
               }
               VAR_20 += VAR_14 * (VAR_19 - (VAR_18+1));

               FUNC_0(FUNC_1(VAR_23) <= 1.01f);

               VAR_0[VAR_19] += VAR_23 + VAR_22 * (1-((VAR_19-VAR_19)+(VAR_11-VAR_19))/2) * (VAR_13-VAR_20);

               VAR_1[VAR_19] += VAR_22 * (VAR_13-VAR_12);
            }
         } else {




            int VAR_25;
            for (VAR_25=0; VAR_25 < VAR_2; ++VAR_25) {
               float VAR_26 = VAR_4;
               float VAR_27 = (float) (VAR_25);
               float VAR_28 = (float) (VAR_25+1);
               float VAR_29 = VAR_9;
               float VAR_30 = VAR_5;
               float VAR_31,VAR_32;




               VAR_31 = (VAR_25 - VAR_7) / VAR_8 + VAR_4;
               VAR_32 = (VAR_25+1 - VAR_7) / VAR_8 + VAR_4;

               if (VAR_7 < VAR_27 && VAR_29 > VAR_28) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_27,VAR_31);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_27,VAR_31, VAR_28,VAR_32);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_28,VAR_32, VAR_29,VAR_30);
               } else if (VAR_29 < VAR_27 && VAR_7 > VAR_28) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_28,VAR_32);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_28,VAR_32, VAR_27,VAR_31);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_27,VAR_31, VAR_29,VAR_30);
               } else if (VAR_7 < VAR_27 && VAR_29 > VAR_27) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_27,VAR_31);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_27,VAR_31, VAR_29,VAR_30);
               } else if (VAR_29 < VAR_27 && VAR_7 > VAR_27) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_27,VAR_31);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_27,VAR_31, VAR_29,VAR_30);
               } else if (VAR_7 < VAR_28 && VAR_29 > VAR_28) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_28,VAR_32);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_28,VAR_32, VAR_29,VAR_30);
               } else if (VAR_29 < VAR_28 && VAR_7 > VAR_28) {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_28,VAR_32);
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_28,VAR_32, VAR_29,VAR_30);
               } else {
                  FUNC_2(VAR_0,VAR_25,VAR_3, VAR_7,VAR_26, VAR_29,VAR_30);
               }
            }
         }
      }
      VAR_3 = VAR_3->next;
   }
}
