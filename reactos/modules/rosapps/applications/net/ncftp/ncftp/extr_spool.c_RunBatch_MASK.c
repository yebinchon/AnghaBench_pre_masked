
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pid_t ;
typedef int ncftpbatch ;
struct TYPE_4__ {scalar_t__ lip; } ;
typedef int FTPLibraryInfo ;
typedef int FTPConnectionInfo ;
typedef TYPE_1__* FTPCIPtr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__* const) ;



 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int,char const*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (char*,char**) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*,char const*,...) ;
 char* VAR_2 ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int*) ;
 int FUNC_14 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int,int *,int ) ;

void
FUNC_17(int VAR_4, const FTPCIPtr VAR_5)
{
 int VAR_6[2];
 char VAR_7[32];
 char *VAR_8[8];
 pid_t VAR_9 = 0;
 if (VAR_4 != 0) {
  if (FUNC_13(VAR_6) < 0) {
   FUNC_12("pipe");
  }

  (void) FUNC_14(VAR_7, "%d", VAR_6[0]);
  VAR_9 = FUNC_10();
  if (VAR_9 < 0) {
   (void) FUNC_6(VAR_6[0]);
   (void) FUNC_6(VAR_6[1]);
   FUNC_12("fork");
  } else if (VAR_9 == 0) {
   (void) FUNC_6(VAR_6[1]);
   VAR_8[0] = (char *) "ncftpbatch";



   VAR_8[1] = (char *) "-d";

   VAR_8[2] = (char *) "-|";
   VAR_8[3] = VAR_7;
   VAR_8[4] = ((void*)0);





   (void) FUNC_8(VAR_8[0], VAR_8);
   (void) FUNC_11(VAR_3, "Could not run %s.  Is it in your $PATH?\n", VAR_8[0]);

   FUNC_12(VAR_8[0]);
   FUNC_9(1);
  }
  (void) FUNC_6(VAR_6[0]);
  (void) FUNC_2(VAR_6[1], (const char *) VAR_5->lip, sizeof(FTPLibraryInfo));
  (void) FUNC_2(VAR_6[1], (const char *) VAR_5, sizeof(FTPConnectionInfo));
  (void) FUNC_6(VAR_6[1]);





  FUNC_0(VAR_5);
 } else {
  VAR_9 = FUNC_10();
  if (VAR_9 < 0) {
   FUNC_12("fork");
  } else if (VAR_9 == 0) {
   VAR_8[0] = (char *) "ncftpbatch";
   VAR_8[1] = (char *) "-d";
   VAR_8[2] = ((void*)0);




   (void) FUNC_8(VAR_8[0], VAR_8);
   (void) FUNC_11(VAR_3, "Could not run %s.  Is it in your $PATH?\n", VAR_8[0]);

   FUNC_12(VAR_8[0]);
   FUNC_9(1);
  }
 }

 if (VAR_9 > 1) {



  (void) FUNC_15(((void*)0));

 }

}
