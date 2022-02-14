
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vsigproc_t ;
typedef scalar_t__ pid_t ;
typedef int FTPSigProc ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,char const*,int *) ;
 int FUNC_5 (char const*,char**) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (int*) ;
 scalar_t__ FUNC_11 (scalar_t__,int*,int ) ;

void
FUNC_12(const int VAR_6, const char **const VAR_7, const CommandPtr VAR_8, const ArgvInfoPtr VAR_9)
{


 const char *VAR_10;
 pid_t VAR_11;
 int VAR_12;
 vsigproc_t VAR_13;

 VAR_13 = FUNC_1(VAR_1, (FTPSigProc) VAR_2);
 FUNC_0(VAR_5);
 VAR_11 = FUNC_7();
 if (VAR_11 < (pid_t) 0) {
  FUNC_8("fork");
 } else if (VAR_11 == 0) {
  VAR_10 = FUNC_9(VAR_4, '/');
  if (VAR_10 == ((void*)0))
   VAR_10 = VAR_4;
  else
   VAR_10++;
  if (VAR_6 == 1) {
   FUNC_4(VAR_4, VAR_10, ((void*)0));
   FUNC_8(VAR_4);
   FUNC_6(1);
  } else {
   FUNC_5(VAR_7[1], (char **) VAR_7 + 1);
   FUNC_8(VAR_4);
   FUNC_6(1);
  }
 } else {

  for (;;) {




   if ((FUNC_10(&VAR_12) < 0) && (VAR_3 != VAR_0))
    break;

   if (FUNC_2(VAR_12) || FUNC_3(VAR_12))
    break;
  }
 }
 (void) FUNC_1(VAR_1, VAR_13);

}
