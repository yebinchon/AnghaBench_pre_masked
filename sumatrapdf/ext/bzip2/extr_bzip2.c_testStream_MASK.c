
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UChar ;
typedef size_t Int32 ;
typedef int FILE ;
typedef scalar_t__ Bool ;
typedef int BZFILE ;


 int FUNC_0 (size_t*,int *,int *,int) ;
 int FUNC_1 (size_t*,int *) ;
 int FUNC_2 (size_t*,int *,void**,size_t*) ;
 int * FUNC_3 (size_t*,int *,int,int,int *,size_t) ;




 int VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;

 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;
 char* VAR_6 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static
Bool FUNC_13 ( FILE *VAR_13 )
{
   BZFILE* VAR_14 = ((void*)0);
   Int32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
   UChar VAR_20[5000];
   UChar VAR_21[VAR_0];
   Int32 VAR_22;
   void* VAR_23;
   UChar* VAR_24;

   VAR_22 = 0;
   VAR_18 = 0;

   FUNC_4(VAR_13);
   if (FUNC_7(VAR_13)) goto errhandler_io;

   while (VAR_5) {

      VAR_14 = FUNC_3 (
               &VAR_15, VAR_13, VAR_12,
               (int)VAR_9, VAR_21, VAR_22
            );
      if (VAR_14 == ((void*)0) || VAR_15 != VAR_1) goto errhandler;
      VAR_18++;

      while (VAR_15 == VAR_1) {
         FUNC_0 ( &VAR_15, VAR_14, VAR_20, 5000 );
         if (VAR_15 == 131) goto errhandler;
      }
      if (VAR_15 != VAR_2) goto errhandler;

      FUNC_2 ( &VAR_15, VAR_14, &VAR_23, &VAR_22 );
      if (VAR_15 != VAR_1) FUNC_12 ( "test:bzReadGetUnused" );

      VAR_24 = (UChar*)VAR_23;
      for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) VAR_21[VAR_19] = VAR_24[VAR_19];

      FUNC_1 ( &VAR_15, VAR_14 );
      if (VAR_15 != VAR_1) FUNC_12 ( "test:bzReadGetUnused" );
      if (VAR_22 == 0 && FUNC_10(VAR_13)) break;

   }

   if (FUNC_7(VAR_13)) goto errhandler_io;
   VAR_17 = FUNC_6 ( VAR_13 );
   if (VAR_17 == VAR_3) goto errhandler_io;

   if (VAR_12 >= 2) FUNC_8 ( VAR_10, "\n    " );
   return VAR_5;

   errhandler:
   FUNC_1 ( &VAR_16, VAR_14 );
   if (VAR_12 == 0)
      FUNC_8 ( VAR_10, "%s: %s: ", VAR_8, VAR_6 );
   switch (VAR_15) {
      case 133:
         FUNC_5(); break;
      case 130:
         errhandler_io:
         FUNC_9(); break;
      case 132:
         FUNC_8 ( VAR_10,
                   "data integrity (CRC) error in data\n" );
         return VAR_4;
      case 129:
         FUNC_11();
      case 128:
         FUNC_8 ( VAR_10,
                   "file ends unexpectedly\n" );
         return VAR_4;
      case 131:
         if (VAR_13 != VAR_11) FUNC_6(VAR_13);
         if (VAR_18 == 1) {
          FUNC_8 ( VAR_10,
                    "bad magic number (file not created by bzip2)\n" );
            return VAR_4;
         } else {
            if (VAR_7)
            FUNC_8 ( VAR_10,
                      "trailing garbage after EOF ignored\n" );
            return VAR_5;
         }
      default:
         FUNC_12 ( "test:unexpected error" );
   }

   FUNC_12 ( "test:end" );
   return VAR_5;
}
