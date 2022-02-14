
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {int dummy; } ;
typedef scalar_t__ IntNative ;
typedef int Int32 ;


 scalar_t__ FUNC_0 (int ,struct MY_STAT*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int * VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static
void FUNC_6 ( Int32 VAR_14 )
{
   IntNative VAR_15;
   struct MY_STAT VAR_16;

   if ( VAR_12 == VAR_1
        && VAR_8 != VAR_0
        && VAR_2 ) {






      VAR_15 = FUNC_0 ( VAR_4, &VAR_16 );
      if (VAR_15 == 0) {
         if (VAR_5)
            FUNC_3 ( VAR_13,
                      "%s: Deleting output file %s, if it exists.\n",
                      VAR_11, VAR_9 );
         if (VAR_10 != ((void*)0))
            FUNC_2 ( VAR_10 );
         VAR_15 = FUNC_4 ( VAR_9 );
         if (VAR_15 != 0)
            FUNC_3 ( VAR_13,
                      "%s: WARNING: deletion of output file "
                      "(apparently) failed.\n",
                      VAR_11 );
      } else {
         FUNC_3 ( VAR_13,
                   "%s: WARNING: deletion of output file suppressed\n",
                    VAR_11 );
         FUNC_3 ( VAR_13,
                   "%s:    since input file no longer exists.  Output file\n",
                   VAR_11 );
         FUNC_3 ( VAR_13,
                   "%s:    `%s' may be incomplete.\n",
                   VAR_11, VAR_9 );
         FUNC_3 ( VAR_13,
                   "%s:    I suggest doing an integrity test (bzip2 -tv)"
                   " of it.\n",
                   VAR_11 );
      }
   }

   if (VAR_5 && VAR_6 > 0 && VAR_7 < VAR_6) {
      FUNC_3 ( VAR_13,
                "%s: WARNING: some files have not been processed:\n"
                "%s:    %ld specified on command line, %ld not processed yet.\n\n",
                VAR_11, VAR_11,
                VAR_6, VAR_6 - VAR_7 );
   }
   FUNC_5(VAR_14);
   FUNC_1(VAR_3);
}
