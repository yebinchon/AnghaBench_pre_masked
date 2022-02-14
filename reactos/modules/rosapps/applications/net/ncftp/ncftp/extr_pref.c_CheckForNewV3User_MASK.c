
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pathName ;
typedef int line ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,char*,int*) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

void
FUNC_8(void)
{
 FILE *VAR_8;
 struct stat VAR_9;
 char VAR_10[256];
 char VAR_11[256];

 VAR_4 = 0;


 if (VAR_5[0] != '\0') {
  (void) FUNC_0(VAR_10, sizeof(VAR_10), VAR_7);

  if ((FUNC_6(VAR_10, &VAR_9) < 0) && (VAR_3 == VAR_0)) {
   VAR_4 = 1;
   VAR_6++;


   VAR_8 = FUNC_3(VAR_10, VAR_2);
   if (VAR_8 == ((void*)0))
    return;
   (void) FUNC_4(VAR_8, "# NcFTP uses this file to mark that you have run it before, and that you do not\n# need any special first-time instructions or setup.\n#\nruns=%d\n", VAR_4);
   (void) FUNC_1(VAR_8);
  } else {
   VAR_8 = FUNC_3(VAR_10, VAR_1);
   if (VAR_8 != ((void*)0)) {
    while (FUNC_2(VAR_11, sizeof(VAR_11) - 1, VAR_8) != ((void*)0)) {
     if (FUNC_7(VAR_11, "runs=", 5) == 0) {
      (void) FUNC_5(VAR_11 + 5, "%d",
       &VAR_4);
      break;
     }
    }
    (void) FUNC_1(VAR_8);
   }


   VAR_4++;
   if (VAR_4 == 1)
    VAR_6++;






   VAR_8 = FUNC_3(VAR_10, VAR_2);
   if (VAR_8 != ((void*)0)) {
    (void) FUNC_4(VAR_8, "# NcFTP uses this file to mark that you have run it before, and that you do not\n# need any special first-time instructions or setup.\n#\nruns=%d\n", VAR_4);
    (void) FUNC_1(VAR_8);
   }
  }
 }
}
