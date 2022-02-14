
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pathName2 ;
typedef int pathName ;
struct TYPE_2__ {scalar_t__ visible; char* varname; int (* proc ) (int,int *,int *) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,unsigned int) ;
 int FUNC_8 (int,int *,int *) ;
 int FUNC_9 (char*) ;

void
FUNC_10(void)
{
 char VAR_6[256];
 char VAR_7[256];
 char VAR_8[32];
 int VAR_9;
 FILE *VAR_10;

 if (VAR_3 == 0)
  return;

 (void) FUNC_0(VAR_6, sizeof(VAR_6), VAR_4);

 (void) FUNC_7(VAR_8, "tpref%06u.txt", (unsigned int) FUNC_4());
 (void) FUNC_0(VAR_7, sizeof(VAR_7), VAR_8);

 VAR_10 = FUNC_2(VAR_7, VAR_0);
 if (VAR_10 == ((void*)0)) {
  FUNC_5("could not save preferences file");
 } else {
  (void) FUNC_3(VAR_10, "%s", "# NcFTP 3 preferences file\n# This file is loaded and overwritten each time NcFTP is run.\n#\n");
  for (VAR_9=0; VAR_9<VAR_1; VAR_9++) {
   if (VAR_2[VAR_9].visible != VAR_5) {
    (void) FUNC_3(VAR_10, "%s=", VAR_2[VAR_9].varname);
    (*VAR_2[VAR_9].proc)(VAR_9, ((void*)0), VAR_10);
    (void) FUNC_3(VAR_10, "\n");
   }
  }
  (void) FUNC_1(VAR_10);
  (void) FUNC_9(VAR_6);
  if (FUNC_6(VAR_7, VAR_6) < 0) {
   FUNC_5("could not finish saving preferences file");
   (void) FUNC_9(VAR_7);
  };
 }
}
