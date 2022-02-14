
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char stbi_uc ;
typedef unsigned char stbi__uint8 ;
typedef int stbi ;


 unsigned char* FUNC_0 (unsigned char*,int,int,int,int) ;
 unsigned char* FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static stbi_uc *FUNC_8(stbi *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{

   int VAR_5 = FUNC_4(VAR_0);
   int VAR_6 = FUNC_4(VAR_0);
   int VAR_7 = FUNC_4(VAR_0);
   int VAR_8 = 0;
   int VAR_9 = FUNC_3(VAR_0);
   int VAR_10 = FUNC_3(VAR_0);
   int VAR_11 = FUNC_4(VAR_0);
   int VAR_12 = FUNC_3(VAR_0);
   int VAR_13 = FUNC_3(VAR_0);
   int VAR_14 = FUNC_3(VAR_0);
   int VAR_15 = FUNC_3(VAR_0);
   int VAR_16 = FUNC_4(VAR_0);
   int VAR_17 = VAR_16 / 8;
   int VAR_18 = FUNC_4(VAR_0);

   unsigned char *VAR_19;
   unsigned char *VAR_20 = ((void*)0);
   int VAR_21, VAR_22;
   unsigned char VAR_23[4];
   int VAR_24 = 0;
   int VAR_25 = 0;
   int VAR_26 = 1;


   if ( VAR_7 >= 8 )
   {
      VAR_7 -= 8;
      VAR_8 = 1;
   }

   VAR_18 = 1 - ((VAR_18 >> 5) & 1);


   if (
      (VAR_14 < 1) || (VAR_15 < 1) ||
      (VAR_7 < 1) || (VAR_7 > 3) ||
      ((VAR_16 != 8) && (VAR_16 != 16) &&
      (VAR_16 != 24) && (VAR_16 != 32))
      )
   {
      return ((void*)0);
   }


   if ( VAR_6 )
   {
      VAR_17 = VAR_11 / 8;
   }


   *VAR_1 = VAR_14;
   *VAR_2 = VAR_15;
   if (VAR_3) *VAR_3 = VAR_17;

   VAR_19 = (unsigned char*)FUNC_6( VAR_14 * VAR_15 * VAR_4 );
   if (!VAR_19) return FUNC_1("outofmem", "Out of memory");


   FUNC_7(VAR_0, VAR_5 );

   if ( !VAR_6 && !VAR_8) {
      for (VAR_21=0; VAR_21 < VAR_15; ++VAR_21) {
         int VAR_27 = VAR_18 ? VAR_15 -VAR_21 - 1 : VAR_21;
         stbi__uint8 *VAR_28 = VAR_19 + VAR_27*VAR_14*VAR_17;
         FUNC_5(VAR_0, VAR_28, VAR_14 * VAR_17);
      }
   } else {

      if ( VAR_6)
      {

         FUNC_7(VAR_0, VAR_9 );

         VAR_20 = (unsigned char*)FUNC_6( VAR_10 * VAR_11 / 8 );
         if (!VAR_20) {
            FUNC_2(VAR_19);
            return FUNC_1("outofmem", "Out of memory");
         }
         if (!FUNC_5(VAR_0, VAR_20, VAR_10 * VAR_11 / 8 )) {
            FUNC_2(VAR_19);
            FUNC_2(VAR_20);
            return FUNC_1("bad palette", "Corrupt TGA");
         }
      }

      for (VAR_21=0; VAR_21 < VAR_14 * VAR_15; ++VAR_21)
      {

         if ( VAR_8 )
         {
            if ( VAR_24 == 0 )
            {

               int VAR_29 = FUNC_4(VAR_0);
               VAR_24 = 1 + (VAR_29 & 127);
               VAR_25 = VAR_29 >> 7;
               VAR_26 = 1;
            } else if ( !VAR_25 )
            {
               VAR_26 = 1;
            }
         } else
         {
            VAR_26 = 1;
         }

         if ( VAR_26 )
         {

            if ( VAR_6 )
            {

               int VAR_30 = FUNC_4(VAR_0);
               if ( VAR_30 >= VAR_10 )
               {

                  VAR_30 = 0;
               }
               VAR_30 *= VAR_16 / 8;
               for (VAR_22 = 0; VAR_22*8 < VAR_16; ++VAR_22)
               {
                  VAR_23[VAR_22] = VAR_20[VAR_30+VAR_22];
               }
            } else
            {

               for (VAR_22 = 0; VAR_22*8 < VAR_16; ++VAR_22)
               {
                  VAR_23[VAR_22] = FUNC_4(VAR_0);
               }
            }

            VAR_26 = 0;
         }


         for (VAR_22 = 0; VAR_22 < VAR_17; ++VAR_22)
           VAR_19[VAR_21*VAR_17+VAR_22] = VAR_23[VAR_22];


         --VAR_24;
      }

      if ( VAR_18 )
      {
         for (VAR_22 = 0; VAR_22*2 < VAR_15; ++VAR_22)
         {
            int VAR_31 = VAR_22 * VAR_14 * VAR_4;
            int VAR_32 = (VAR_15 - 1 - VAR_22) * VAR_14 * VAR_4;
            for (VAR_21 = VAR_14 * VAR_4; VAR_21 > 0; --VAR_21)
            {
               unsigned char VAR_33 = VAR_19[VAR_31];
               VAR_19[VAR_31] = VAR_19[VAR_32];
               VAR_19[VAR_32] = VAR_33;
               ++VAR_31;
               ++VAR_32;
            }
         }
      }

      if ( VAR_20 != ((void*)0) )
      {
         FUNC_2( VAR_20 );
      }
   }


   if (VAR_17 >= 3)
   {
      unsigned char* VAR_34 = VAR_19;
      for (VAR_21=0; VAR_21 < VAR_14 * VAR_15; ++VAR_21)
      {
         unsigned char VAR_35 = VAR_34[0];
         VAR_34[0] = VAR_34[2];
         VAR_34[2] = VAR_35;
         VAR_34 += VAR_17;
      }
   }


   if (VAR_4 && VAR_4 != VAR_17)
      VAR_19 = FUNC_0(VAR_19, VAR_17, VAR_4, VAR_14, VAR_15);



   VAR_9 = VAR_10 = VAR_11 =
         VAR_12 = VAR_13 = 0;

   return VAR_19;
}
