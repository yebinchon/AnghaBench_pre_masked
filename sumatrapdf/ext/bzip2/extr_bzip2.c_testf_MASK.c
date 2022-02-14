
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {int st_mode; } ;
typedef int FILE ;
typedef int Char ;
typedef scalar_t__ Bool ;


 int VAR_0 ;
 int FUNC_0 (char*,struct MY_STAT*) ;
 scalar_t__ FUNC_1 (int ) ;



 int VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 char* VAR_4 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int * VAR_7 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* VAR_8 ;
 int FUNC_12 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 char* FUNC_13 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_13 ;

__attribute__((used)) static
void FUNC_15 ( Char *VAR_14 )
{
   FILE *VAR_15;
   Bool VAR_16;
   struct MY_STAT VAR_17;

   VAR_2 = VAR_0;

   if (VAR_14 == ((void*)0) && VAR_9 != 128)
      FUNC_11 ( "testf: bad modes\n" );

   FUNC_3 ( VAR_6, (Char*)"(none)" );
   switch (VAR_9) {
      case 128: FUNC_3 ( VAR_4, (Char*)"(stdin)" ); break;
      case 130: FUNC_3 ( VAR_4, VAR_14 ); break;
      case 129: FUNC_3 ( VAR_4, VAR_14 ); break;
   }

   if ( VAR_9 != 128 && FUNC_2 ( VAR_4 ) ) {
      if (VAR_5)
      FUNC_8 ( VAR_10, "%s: There are no files matching `%s'.\n",
                VAR_8, VAR_4 );
      FUNC_12(1);
      return;
   }
   if ( VAR_9 != 128 && !FUNC_5 ( VAR_4 ) ) {
      FUNC_8 ( VAR_10, "%s: Can't open input %s: %s.\n",
                VAR_8, VAR_4, FUNC_13(VAR_3) );
      FUNC_12(1);
      return;
   }
   if ( VAR_9 != 128 ) {
      FUNC_0(VAR_4, &VAR_17);
      if ( FUNC_1(VAR_17.st_mode) ) {
         FUNC_8( VAR_10,
                  "%s: Input file %s is a directory.\n",
                  VAR_8,VAR_4);
         FUNC_12(1);
         return;
      }
   }

   switch ( VAR_9 ) {

      case 128:
         if ( FUNC_9 ( FUNC_6 ( VAR_11 ) ) ) {
            FUNC_8 ( VAR_10,
                      "%s: I won't read compressed data from a terminal.\n",
                      VAR_8 );
            FUNC_8 ( VAR_10, "%s: For help, type: `%s --help'.\n",
                              VAR_8, VAR_8 );
            FUNC_12(1);
            return;
         };
         VAR_15 = VAR_11;
         break;

      case 129: case 130:
         VAR_15 = FUNC_7 ( VAR_4, "rb" );
         if ( VAR_15 == ((void*)0) ) {
            FUNC_8 ( VAR_10, "%s: Can't open input file %s:%s.\n",
                      VAR_8, VAR_4, FUNC_13(VAR_3) );
            FUNC_12(1);
            return;
         };
         break;

      default:
         FUNC_11 ( "testf: bad srcMode" );
         break;
   }

   if (VAR_13 >= 1) {
      FUNC_8 ( VAR_10, "  %s: ", VAR_4 );
      FUNC_10 ( VAR_4 );
      FUNC_4 ( VAR_10 );
   }


   VAR_7 = ((void*)0);
   VAR_16 = FUNC_14 ( VAR_15 );

   if (VAR_16 && VAR_13 >= 1) FUNC_8 ( VAR_10, "ok\n" );
   if (!VAR_16) VAR_12 = VAR_1;
}
