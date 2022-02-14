
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int* residue_types; TYPE_3__* codebooks; int channels; TYPE_2__* residue_config; } ;
typedef TYPE_1__ vorb ;
typedef int uint8 ;
struct TYPE_18__ {int dimensions; } ;
struct TYPE_17__ {int classbook; unsigned int begin; unsigned int end; int part_size; int** classdata; int classifications; int** residue_books; } ;
typedef TYPE_2__ Residue ;
typedef TYPE_3__ Codebook ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,float**,int,int*,int*,int,int) ;
 int FUNC_3 (float*,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,float*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,...) ;

__attribute__((used)) static void FUNC_9(vorb *VAR_1, float *VAR_2[], int VAR_3, int VAR_4, int VAR_5, uint8 *VAR_6)
{
   int VAR_7,VAR_8,VAR_9;
   Residue *VAR_10 = VAR_1->residue_config + VAR_5;
   int VAR_11 = VAR_1->residue_types[VAR_5];
   int VAR_12 = VAR_10->classbook;
   int VAR_13 = VAR_1->codebooks[VAR_12].dimensions;
   unsigned int VAR_14 = VAR_11 == 2 ? VAR_4*2 : VAR_4;
   unsigned int VAR_15 = (VAR_10->begin < VAR_14 ? VAR_10->begin : VAR_14);
   unsigned int VAR_16 = (VAR_10->end < VAR_14 ? VAR_10->end : VAR_14);
   int VAR_17 = VAR_16 - VAR_15;
   int VAR_18 = VAR_17 / VAR_10->part_size;
   int VAR_19 = FUNC_6(VAR_1);

   uint8 ***VAR_20 = (uint8 ***) FUNC_7(VAR_1,VAR_1->channels, VAR_18 * sizeof(**VAR_20));




   FUNC_0(VAR_1);

   for (VAR_7=0; VAR_7 < VAR_3; ++VAR_7)
      if (!VAR_6[VAR_7])
         FUNC_3(VAR_2[VAR_7], 0, sizeof(float) * VAR_4);

   if (VAR_11 == 2 && VAR_3 != 1) {
      for (VAR_8=0; VAR_8 < VAR_3; ++VAR_8)
         if (!VAR_6[VAR_8])
            break;
      if (VAR_8 == VAR_3)
         goto done;

      for (VAR_9=0; VAR_9 < 8; ++VAR_9) {
         int VAR_21 = 0, VAR_22 = 0;
         if (VAR_3 == 2) {
            while (VAR_21 < VAR_18) {
               int VAR_23 = VAR_10->begin + VAR_21*VAR_10->part_size;
               int VAR_24 = (VAR_23 & 1), VAR_25 = VAR_23>>1;
               if (VAR_9 == 0) {
                  Codebook *VAR_26 = VAR_1->codebooks+VAR_10->classbook;
                  int VAR_27;
                  FUNC_1(VAR_27,VAR_1,VAR_26);
                  if (VAR_27 == VAR_0) goto done;

                  VAR_20[0][VAR_22] = VAR_10->classdata[VAR_27];






               }
               for (VAR_7=0; VAR_7 < VAR_13 && VAR_21 < VAR_18; ++VAR_7, ++VAR_21) {
                  int VAR_28 = VAR_10->begin + VAR_21*VAR_10->part_size;

                  int VAR_29 = VAR_20[0][VAR_22][VAR_7];



                  int VAR_30 = VAR_10->residue_books[VAR_29][VAR_9];
                  if (VAR_30 >= 0) {
                     Codebook *VAR_31 = VAR_1->codebooks + VAR_30;





                     if (!FUNC_2(VAR_1, VAR_31, VAR_2, VAR_3, &VAR_24, &VAR_25, VAR_4, VAR_10->part_size))
                        goto done;

                  } else {
                     VAR_28 += VAR_10->part_size;
                     VAR_24 = VAR_28 & 1;
                     VAR_25 = VAR_28 >> 1;
                  }
               }

               ++VAR_22;

            }
         } else if (VAR_3 == 1) {
            while (VAR_21 < VAR_18) {
               int VAR_32 = VAR_10->begin + VAR_21*VAR_10->part_size;
               int VAR_33 = 0, VAR_34 = VAR_32;
               if (VAR_9 == 0) {
                  Codebook *VAR_35 = VAR_1->codebooks+VAR_10->classbook;
                  int VAR_36;
                  FUNC_1(VAR_36,VAR_1,VAR_35);
                  if (VAR_36 == VAR_0) goto done;

                  VAR_20[0][VAR_22] = VAR_10->classdata[VAR_36];






               }
               for (VAR_7=0; VAR_7 < VAR_13 && VAR_21 < VAR_18; ++VAR_7, ++VAR_21) {
                  int VAR_37 = VAR_10->begin + VAR_21*VAR_10->part_size;

                  int VAR_38 = VAR_20[0][VAR_22][VAR_7];



                  int VAR_39 = VAR_10->residue_books[VAR_38][VAR_9];
                  if (VAR_39 >= 0) {
                     Codebook *VAR_40 = VAR_1->codebooks + VAR_39;
                     if (!FUNC_2(VAR_1, VAR_40, VAR_2, VAR_3, &VAR_33, &VAR_34, VAR_4, VAR_10->part_size))
                        goto done;
                  } else {
                     VAR_37 += VAR_10->part_size;
                     VAR_33 = 0;
                     VAR_34 = VAR_37;
                  }
               }

               ++VAR_22;

            }
         } else {
            while (VAR_21 < VAR_18) {
               int VAR_41 = VAR_10->begin + VAR_21*VAR_10->part_size;
               int VAR_42 = VAR_41 % VAR_3, VAR_43 = VAR_41/VAR_3;
               if (VAR_9 == 0) {
                  Codebook *VAR_44 = VAR_1->codebooks+VAR_10->classbook;
                  int VAR_45;
                  FUNC_1(VAR_45,VAR_1,VAR_44);
                  if (VAR_45 == VAR_0) goto done;

                  VAR_20[0][VAR_22] = VAR_10->classdata[VAR_45];






               }
               for (VAR_7=0; VAR_7 < VAR_13 && VAR_21 < VAR_18; ++VAR_7, ++VAR_21) {
                  int VAR_46 = VAR_10->begin + VAR_21*VAR_10->part_size;

                  int VAR_47 = VAR_20[0][VAR_22][VAR_7];



                  int VAR_48 = VAR_10->residue_books[VAR_47][VAR_9];
                  if (VAR_48 >= 0) {
                     Codebook *VAR_49 = VAR_1->codebooks + VAR_48;
                     if (!FUNC_2(VAR_1, VAR_49, VAR_2, VAR_3, &VAR_42, &VAR_43, VAR_4, VAR_10->part_size))
                        goto done;
                  } else {
                     VAR_46 += VAR_10->part_size;
                     VAR_42 = VAR_46 % VAR_3;
                     VAR_43 = VAR_46 / VAR_3;
                  }
               }

               ++VAR_22;

            }
         }
      }
      goto done;
   }
   FUNC_0(VAR_1);

   for (VAR_9=0; VAR_9 < 8; ++VAR_9) {
      int VAR_50 = 0, VAR_51=0;
      while (VAR_50 < VAR_18) {
         if (VAR_9 == 0) {
            for (VAR_8=0; VAR_8 < VAR_3; ++VAR_8) {
               if (!VAR_6[VAR_8]) {
                  Codebook *VAR_52 = VAR_1->codebooks+VAR_10->classbook;
                  int VAR_53;
                  FUNC_1(VAR_53,VAR_1,VAR_52);
                  if (VAR_53 == VAR_0) goto done;

                  VAR_20[VAR_8][VAR_51] = VAR_10->classdata[VAR_53];






               }
            }
         }
         for (VAR_7=0; VAR_7 < VAR_13 && VAR_50 < VAR_18; ++VAR_7, ++VAR_50) {
            for (VAR_8=0; VAR_8 < VAR_3; ++VAR_8) {
               if (!VAR_6[VAR_8]) {

                  int VAR_54 = VAR_20[VAR_8][VAR_51][VAR_7];



                  int VAR_55 = VAR_10->residue_books[VAR_54][VAR_9];
                  if (VAR_55 >= 0) {
                     float *VAR_56 = VAR_2[VAR_8];
                     int VAR_57 = VAR_10->begin + VAR_50 * VAR_10->part_size;
                     int VAR_58 = VAR_10->part_size;
                     Codebook *VAR_59 = VAR_1->codebooks + VAR_55;
                     if (!FUNC_4(VAR_1, VAR_59, VAR_56, VAR_57, VAR_58, VAR_11))
                        goto done;
                  }
               }
            }
         }

         ++VAR_51;

      }
   }
  done:
   FUNC_0(VAR_1);

   FUNC_8(VAR_1,VAR_20);



   FUNC_5(VAR_1,VAR_19);
}
