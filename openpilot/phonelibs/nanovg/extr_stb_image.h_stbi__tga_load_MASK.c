
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char stbi_uc ;
typedef int stbi__context ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 int VAR_0 ;
 unsigned char* FUNC_2 (unsigned char*,int,int,int,int) ;
 unsigned char* FUNC_3 (char*,char*) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,int,int*) ;
 int FUNC_10 (int *,unsigned char*) ;

__attribute__((used)) static stbi_uc *FUNC_11(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{

   int VAR_6 = FUNC_5(VAR_1);
   int VAR_7 = FUNC_5(VAR_1);
   int VAR_8 = FUNC_5(VAR_1);
   int VAR_9 = 0;
   int VAR_10 = FUNC_4(VAR_1);
   int VAR_11 = FUNC_4(VAR_1);
   int VAR_12 = FUNC_5(VAR_1);
   int VAR_13 = FUNC_4(VAR_1);
   int VAR_14 = FUNC_4(VAR_1);
   int VAR_15 = FUNC_4(VAR_1);
   int VAR_16 = FUNC_4(VAR_1);
   int VAR_17 = FUNC_5(VAR_1);
   int VAR_18, VAR_19=0;
   int VAR_20 = FUNC_5(VAR_1);


   unsigned char *VAR_21;
   unsigned char *VAR_22 = ((void*)0);
   int VAR_23, VAR_24;
   unsigned char VAR_25[4];
   int VAR_26 = 0;
   int VAR_27 = 0;
   int VAR_28 = 1;


   if ( VAR_8 >= 8 )
   {
      VAR_8 -= 8;
      VAR_9 = 1;
   }
   VAR_20 = 1 - ((VAR_20 >> 5) & 1);


   if ( VAR_7 ) VAR_18 = FUNC_9(VAR_12, 0, &VAR_19);
   else VAR_18 = FUNC_9(VAR_17, (VAR_8 == 3), &VAR_19);

   if(!VAR_18)
      return FUNC_3("bad format", "Can't find out TGA pixelformat");


   *VAR_2 = VAR_15;
   *VAR_3 = VAR_16;
   if (VAR_4) *VAR_4 = VAR_18;

   VAR_21 = (unsigned char*)FUNC_7( (size_t)VAR_15 * VAR_16 * VAR_18 );
   if (!VAR_21) return FUNC_3("outofmem", "Out of memory");


   FUNC_8(VAR_1, VAR_6 );

   if ( !VAR_7 && !VAR_9 && !VAR_19 ) {
      for (VAR_23=0; VAR_23 < VAR_16; ++VAR_23) {
         int VAR_29 = VAR_20 ? VAR_16 -VAR_23 - 1 : VAR_23;
         stbi_uc *VAR_30 = VAR_21 + VAR_29*VAR_15*VAR_18;
         FUNC_6(VAR_1, VAR_30, VAR_15 * VAR_18);
      }
   } else {

      if ( VAR_7)
      {

         FUNC_8(VAR_1, VAR_10 );

         VAR_22 = (unsigned char*)FUNC_7( VAR_11 * VAR_18 );
         if (!VAR_22) {
            FUNC_1(VAR_21);
            return FUNC_3("outofmem", "Out of memory");
         }
         if (VAR_19) {
            stbi_uc *VAR_31 = VAR_22;
            FUNC_0(VAR_18 == VAR_0);
            for (VAR_23=0; VAR_23 < VAR_11; ++VAR_23) {
               FUNC_10(VAR_1, VAR_31);
               VAR_31 += VAR_18;
            }
         } else if (!FUNC_6(VAR_1, VAR_22, VAR_11 * VAR_18)) {
               FUNC_1(VAR_21);
               FUNC_1(VAR_22);
               return FUNC_3("bad palette", "Corrupt TGA");
         }
      }

      for (VAR_23=0; VAR_23 < VAR_15 * VAR_16; ++VAR_23)
      {

         if ( VAR_9 )
         {
            if ( VAR_26 == 0 )
            {

               int VAR_32 = FUNC_5(VAR_1);
               VAR_26 = 1 + (VAR_32 & 127);
               VAR_27 = VAR_32 >> 7;
               VAR_28 = 1;
            } else if ( !VAR_27 )
            {
               VAR_28 = 1;
            }
         } else
         {
            VAR_28 = 1;
         }

         if ( VAR_28 )
         {

            if ( VAR_7 )
            {

               int VAR_33 = (VAR_17 == 8) ? FUNC_5(VAR_1) : FUNC_4(VAR_1);
               if ( VAR_33 >= VAR_11 ) {

                  VAR_33 = 0;
               }
               VAR_33 *= VAR_18;
               for (VAR_24 = 0; VAR_24 < VAR_18; ++VAR_24) {
                  VAR_25[VAR_24] = VAR_22[VAR_33+VAR_24];
               }
            } else if(VAR_19) {
               FUNC_0(VAR_18 == VAR_0);
               FUNC_10(VAR_1, VAR_25);
            } else {

               for (VAR_24 = 0; VAR_24 < VAR_18; ++VAR_24) {
                  VAR_25[VAR_24] = FUNC_5(VAR_1);
               }
            }

            VAR_28 = 0;
         }


         for (VAR_24 = 0; VAR_24 < VAR_18; ++VAR_24)
           VAR_21[VAR_23*VAR_18+VAR_24] = VAR_25[VAR_24];


         --VAR_26;
      }

      if ( VAR_20 )
      {
         for (VAR_24 = 0; VAR_24*2 < VAR_16; ++VAR_24)
         {
            int VAR_34 = VAR_24 * VAR_15 * VAR_18;
            int VAR_35 = (VAR_16 - 1 - VAR_24) * VAR_15 * VAR_18;
            for (VAR_23 = VAR_15 * VAR_18; VAR_23 > 0; --VAR_23)
            {
               unsigned char VAR_36 = VAR_21[VAR_34];
               VAR_21[VAR_34] = VAR_21[VAR_35];
               VAR_21[VAR_35] = VAR_36;
               ++VAR_34;
               ++VAR_35;
            }
         }
      }

      if ( VAR_22 != ((void*)0) )
      {
         FUNC_1( VAR_22 );
      }
   }


   if (VAR_18 >= 3 && !VAR_19)
   {
      unsigned char* VAR_37 = VAR_21;
      for (VAR_23=0; VAR_23 < VAR_15 * VAR_16; ++VAR_23)
      {
         unsigned char VAR_38 = VAR_37[0];
         VAR_37[0] = VAR_37[2];
         VAR_37[2] = VAR_38;
         VAR_37 += VAR_18;
      }
   }


   if (VAR_5 && VAR_5 != VAR_18)
      VAR_21 = FUNC_2(VAR_21, VAR_18, VAR_5, VAR_15, VAR_16);



   VAR_10 = VAR_11 = VAR_12 =
         VAR_13 = VAR_14 = 0;

   return VAR_21;
}
