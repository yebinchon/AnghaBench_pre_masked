
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int output_path ;
struct TYPE_7__ {TYPE_1__* dbs; } ;
struct TYPE_10__ {TYPE_2__ dbarr; int major_version; } ;
struct TYPE_9__ {int num_libraries; TYPE_3__* libraries; } ;
struct TYPE_8__ {char* name; size_t dbnum; } ;
struct TYPE_6__ {char* db_name; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int LibraryInfo ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,int,int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 int * FUNC_9 (int *,char*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int *,char*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (void*,int,int,int ) ;
 int FUNC_17 (char*,int,char*) ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*) ;

void
FUNC_23(void)
{
 PGconn *VAR_8 = FUNC_9(&VAR_5, "template1");
 int VAR_9;
 int VAR_10 = 0;
 FILE *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 char VAR_13[VAR_0];

 FUNC_15("Checking for presence of required libraries");

 FUNC_17(VAR_13, sizeof(VAR_13), "loadable_libraries.txt");







 FUNC_16((void *) VAR_7.libraries, VAR_7.num_libraries,
    sizeof(LibraryInfo), VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_7.num_libraries; VAR_9++)
 {
  char *VAR_14 = VAR_7.libraries[VAR_9].name;
  int VAR_15 = FUNC_22(VAR_14);
  char VAR_16[7 + 2 * VAR_0 + 1];
  PGresult *VAR_17;


  if (VAR_9 == 0 || FUNC_19(VAR_14, VAR_7.libraries[VAR_9 - 1].name) != 0)
  {
   if (FUNC_0(VAR_6.major_version) < 901 &&
    FUNC_19(VAR_14, "$libdir/plpython") == 0)
   {
    VAR_14 = "$libdir/plpython2";
    VAR_15 = FUNC_22(VAR_14);
   }

   FUNC_20(VAR_16, "LOAD '");
   FUNC_3(VAR_8, VAR_16 + FUNC_22(VAR_16), VAR_14, VAR_15, ((void*)0));
   FUNC_18(VAR_16, "'");

   VAR_17 = FUNC_4(VAR_8, VAR_16);

   if (FUNC_6(VAR_17) != VAR_1)
   {
    VAR_12 = 1;
    VAR_10 = 1;

    if (VAR_11 == ((void*)0) && (VAR_11 = FUNC_11(VAR_13, "w")) == ((void*)0))
     FUNC_13("could not open file \"%s\": %s\n",
        VAR_13, FUNC_21(VAR_3));
    FUNC_12(VAR_11, FUNC_7("could not load library \"%s\": %s"),
      VAR_14,
      FUNC_2(VAR_8));
   }
   else
    VAR_10 = 0;

   FUNC_1(VAR_17);
  }

  if (VAR_10)
   FUNC_12(VAR_11, FUNC_7("In database: %s\n"),
     VAR_6.dbarr.dbs[VAR_7.libraries[VAR_9].dbnum].db_name);
 }

 FUNC_5(VAR_8);

 if (VAR_12)
 {
  FUNC_10(VAR_11);
  FUNC_14(VAR_2, "fatal\n");
  FUNC_13("Your installation references loadable libraries that are missing from the\n"
     "new installation.  You can add these libraries to the new installation,\n"
     "or remove the functions using them from the old installation.  A list of\n"
     "problem libraries is in the file:\n"
     "    %s\n\n", VAR_13);
 }
 else
  FUNC_8();
}
