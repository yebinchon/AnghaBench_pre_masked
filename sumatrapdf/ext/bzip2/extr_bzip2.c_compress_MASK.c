
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {int st_mode; } ;
typedef int IntNative ;
typedef size_t Int32 ;
typedef int FILE ;
typedef int Char ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,struct MY_STAT*) ;
 scalar_t__ FUNC_2 (int ) ;



 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int *) ;
 size_t FUNC_7 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int * FUNC_13 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int ,char*,char*,...) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 char* VAR_6 ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_17 (char*) ;
 char* VAR_9 ;
 int * VAR_10 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 char* VAR_11 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_23 (char*,char*) ;
 char* FUNC_24 (int ) ;
 int VAR_16 ;
 char** VAR_17 ;

__attribute__((used)) static
void FUNC_25 ( Char *VAR_18 )
{
   FILE *VAR_19;
   FILE *VAR_20;
   Int32 VAR_21, VAR_22;
   struct MY_STAT VAR_23;

   VAR_3 = VAR_1;

   if (VAR_18 == ((void*)0) && VAR_12 != 128)
      FUNC_19 ( "compress: bad modes\n" );

   switch (VAR_12) {
      case 128:
         FUNC_6 ( VAR_6, (Char*)"(stdin)" );
         FUNC_6 ( VAR_9, (Char*)"(stdout)" );
         break;
      case 130:
         FUNC_6 ( VAR_6, VAR_18 );
         FUNC_6 ( VAR_9, VAR_18 );
         FUNC_23 ( VAR_9, ".bz2" );
         break;
      case 129:
         FUNC_6 ( VAR_6, VAR_18 );
         FUNC_6 ( VAR_9, (Char*)"(stdout)" );
         break;
   }

   if ( VAR_12 != 128 && FUNC_5 ( VAR_6 ) ) {
      if (VAR_8)
      FUNC_14 ( VAR_13, "%s: There are no files matching `%s'.\n",
                VAR_11, VAR_6 );
      FUNC_22(1);
      return;
   }
   if ( VAR_12 != 128 && !FUNC_10 ( VAR_6 ) ) {
      FUNC_14 ( VAR_13, "%s: Can't open input file %s: %s.\n",
                VAR_11, VAR_6, FUNC_24(VAR_4) );
      FUNC_22(1);
      return;
   }
   for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
      if (FUNC_15(VAR_6, VAR_17[VAR_22])) {
         if (VAR_8)
         FUNC_14 ( VAR_13,
                   "%s: Input file %s already has %s suffix.\n",
                   VAR_11, VAR_6, VAR_17[VAR_22] );
         FUNC_22(1);
         return;
      }
   }
   if ( VAR_12 == 130 || VAR_12 == 129 ) {
      FUNC_1(VAR_6, &VAR_23);
      if ( FUNC_2(VAR_23.st_mode) ) {
         FUNC_14( VAR_13,
                  "%s: Input file %s is a directory.\n",
                  VAR_11,VAR_6);
         FUNC_22(1);
         return;
      }
   }
   if ( VAR_12 == 130 && !VAR_5 && FUNC_17 ( VAR_6 )) {
      if (VAR_8)
      FUNC_14 ( VAR_13, "%s: Input file %s is not a normal file.\n",
                VAR_11, VAR_6 );
      FUNC_22(1);
      return;
   }
   if ( VAR_12 == 130 && FUNC_10 ( VAR_9 ) ) {
      if (VAR_5) {
  FUNC_20(VAR_9);
      } else {
  FUNC_14 ( VAR_13, "%s: Output file %s already exists.\n",
     VAR_11, VAR_9 );
  FUNC_22(1);
  return;
      }
   }
   if ( VAR_12 == 130 && !VAR_5 &&
        (VAR_21=FUNC_7 ( VAR_6 )) > 0) {
      FUNC_14 ( VAR_13, "%s: Input file %s has %d other link%s.\n",
                VAR_11, VAR_6, VAR_21, VAR_21 > 1 ? "s" : "" );
      FUNC_22(1);
      return;
   }

   if ( VAR_12 == 130 ) {


      FUNC_21 ( VAR_6 );
   }

   switch ( VAR_12 ) {

      case 128:
         VAR_19 = VAR_14;
         VAR_20 = VAR_15;
         if ( FUNC_16 ( FUNC_11 ( VAR_15 ) ) ) {
            FUNC_14 ( VAR_13,
                      "%s: I won't write compressed data to a terminal.\n",
                      VAR_11 );
            FUNC_14 ( VAR_13, "%s: For help, type: `%s --help'.\n",
                              VAR_11, VAR_11 );
            FUNC_22(1);
            return;
         };
         break;

      case 129:
         VAR_19 = FUNC_12 ( VAR_6, "rb" );
         VAR_20 = VAR_15;
         if ( FUNC_16 ( FUNC_11 ( VAR_15 ) ) ) {
            FUNC_14 ( VAR_13,
                      "%s: I won't write compressed data to a terminal.\n",
                      VAR_11 );
            FUNC_14 ( VAR_13, "%s: For help, type: `%s --help'.\n",
                              VAR_11, VAR_11 );
            if ( VAR_19 != ((void*)0) ) FUNC_8 ( VAR_19 );
            FUNC_22(1);
            return;
         };
         if ( VAR_19 == ((void*)0) ) {
            FUNC_14 ( VAR_13, "%s: Can't open input file %s: %s.\n",
                      VAR_11, VAR_6, FUNC_24(VAR_4) );
            FUNC_22(1);
            return;
         };
         break;

      case 130:
         VAR_19 = FUNC_12 ( VAR_6, "rb" );
         VAR_20 = FUNC_13 ( VAR_9, "wb" );
         if ( VAR_20 == ((void*)0)) {
            FUNC_14 ( VAR_13, "%s: Can't create output file %s: %s.\n",
                      VAR_11, VAR_9, FUNC_24(VAR_4) );
            if ( VAR_19 != ((void*)0) ) FUNC_8 ( VAR_19 );
            FUNC_22(1);
            return;
         }
         if ( VAR_19 == ((void*)0) ) {
            FUNC_14 ( VAR_13, "%s: Can't open input file %s: %s.\n",
                      VAR_11, VAR_6, FUNC_24(VAR_4) );
            if ( VAR_20 != ((void*)0) ) FUNC_8 ( VAR_20 );
            FUNC_22(1);
            return;
         };
         break;

      default:
         FUNC_19 ( "compress: bad srcMode" );
         break;
   }

   if (VAR_16 >= 1) {
      FUNC_14 ( VAR_13, "  %s: ", VAR_6 );
      FUNC_18 ( VAR_6 );
      FUNC_9 ( VAR_13 );
   }


   VAR_10 = VAR_20;
   VAR_3 = VAR_2;
   FUNC_4 ( VAR_19, VAR_20 );
   VAR_10 = ((void*)0);


   if ( VAR_12 == 130 ) {
      FUNC_3 ( VAR_9 );
      VAR_3 = VAR_1;
      if ( !VAR_7 ) {
         IntNative VAR_24 = FUNC_20 ( VAR_6 );
         FUNC_0 ( VAR_24 );
      }
   }

   VAR_3 = VAR_1;
}
