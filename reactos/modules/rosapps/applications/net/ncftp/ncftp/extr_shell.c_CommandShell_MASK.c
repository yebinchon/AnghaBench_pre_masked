
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int prompt ;
typedef int ai ;
struct TYPE_7__ {scalar_t__ connected; int host; } ;
struct TYPE_6__ {int cargc; int noglobargv; int argbuf; int cargv; } ;
typedef TYPE_1__ ArgvInfo ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int *,int ,int,int ,int,int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 char* FUNC_8 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int) ;
 int VAR_14 ;
 int FUNC_18 (scalar_t__*) ;

void
FUNC_19(void)
{
 int VAR_15, VAR_16;
 ArgvInfo VAR_17;
 char VAR_18[64];
 char *VAR_19;


 int VAR_20;

 time_t VAR_21, VAR_22;







 VAR_20 = FUNC_15(VAR_5);




 if (VAR_20 != 0) {
  FUNC_10(0, "Caught signal %d, back at top.\n", VAR_10);
  if (VAR_10 == VAR_2) {
   (void) FUNC_14("\nRemote host was not responding, closing down the session.");
   FUNC_3(&VAR_7);
  } else{
   (void) FUNC_14("\nInterrupted.\n");
   if (VAR_6 != 0) {
    VAR_6 = 0;
    (void) FUNC_14("Closing down the current FTP session: ");
    FUNC_3(&VAR_7);
    (void) FUNC_17(1);
    (void) FUNC_14("done.\n");
   }
  }
 }

 VAR_11 = 1;



 ++VAR_9;

 while (VAR_8 == 0) {


  (void) FUNC_7(VAR_3, VAR_0);
  (void) FUNC_7(VAR_4, VAR_0);
  (void) FUNC_7(VAR_2, VAR_0);


  FUNC_5(VAR_18, sizeof(VAR_18));

  if (VAR_7.connected == 0) {
   FUNC_9("DEFAULT");
  } else {
   FUNC_9("%s - NcFTP", VAR_7.host);
  }

  VAR_19 = FUNC_8(VAR_18);
  if (VAR_19 == ((void*)0)) {

   (void) FUNC_14("\n");
   break;
  }
  FUNC_10(0, "> %s\n", VAR_19);
  FUNC_0(VAR_19);
  for (VAR_15 = 0;;) {
   (void) FUNC_13(&VAR_17, 0, sizeof(VAR_17));
   VAR_16 = FUNC_4(VAR_19 + VAR_15, &VAR_17.cargc, VAR_17.cargv,
    (int) (sizeof(VAR_17.cargv) / sizeof(char *)),
    VAR_17.argbuf, sizeof(VAR_17.argbuf),
    VAR_17.noglobargv, 0);
   if (VAR_16 <= 0)
    break;
   VAR_15 += VAR_16;
   if (VAR_17.cargc == 0)
    continue;
   VAR_12 = 1;
   (void) FUNC_18(&VAR_21);
   if (FUNC_2(&VAR_17) < 0) {
    (void) FUNC_18(&VAR_22);
    VAR_12 = 0;
    break;
   }
   (void) FUNC_18(&VAR_22);
   VAR_12 = 0;
   if ((VAR_22 - VAR_21) > VAR_13) {






    (void) FUNC_11(VAR_14, "\007");

   }
   ++VAR_9;
  }

  FUNC_12(VAR_19);
 }

 FUNC_1();
 VAR_11 = 0;
}
