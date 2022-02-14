
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int,int*,int ) ;

int FUNC_13(int (VAR_7)(void), char *VAR_8)
{
 bool VAR_9;
 int VAR_10, VAR_11;
 pid_t VAR_12;


 FUNC_6(VAR_5);

 VAR_12 = FUNC_7();
 if (VAR_12 == 0) {
  FUNC_11(0, 0);
  FUNC_5(VAR_7());
 } else if (VAR_12 == -1) {
  FUNC_9("fork");
  return 1;
 }

 FUNC_11(VAR_12, VAR_12);

 if (VAR_6 != -1)

  FUNC_4(VAR_6);
 VAR_9 = 0;

wait:
 VAR_10 = FUNC_12(VAR_12, &VAR_11, 0);
 if (VAR_10 == -1) {
  if (VAR_4 != VAR_0) {
   FUNC_10("unknown error from waitpid\n");
   return 1;
  }

  if (VAR_9) {
   FUNC_10("!! force killing %s\n", VAR_8);
   FUNC_8(-VAR_12, VAR_2);
   return 1;
  } else {
   FUNC_10("!! killing %s\n", VAR_8);
   FUNC_8(-VAR_12, VAR_3);
   VAR_9 = 1;
   FUNC_4(VAR_1);
   goto wait;
  }
 }


 FUNC_8(-VAR_12, VAR_3);

 if (FUNC_1(VAR_11))
  VAR_11 = FUNC_0(VAR_11);
 else {
  if (FUNC_2(VAR_11))
   FUNC_10("!! child died by signal %d\n", FUNC_3(VAR_11));
  else
   FUNC_10("!! child died by unknown cause\n");

  VAR_11 = 1;
 }

 return VAR_11;
}
