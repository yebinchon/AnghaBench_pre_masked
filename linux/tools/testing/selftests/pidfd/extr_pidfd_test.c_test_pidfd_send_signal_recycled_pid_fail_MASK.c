
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;



 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char*,char*,int,int *) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*,int,char*,scalar_t__) ;
 int FUNC_12 (int,int ,int *,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(void)
{
 int VAR_15, VAR_16;
 pid_t VAR_17;
 const char *VAR_18 = "pidfd_send_signal signal recycled pid";

 VAR_16 = FUNC_14(VAR_1);
 if (VAR_16 < 0)
  FUNC_4("%s test: Failed to unshare pid namespace\n",
       VAR_18);

 VAR_16 = FUNC_14(VAR_0);
 if (VAR_16 < 0)
  FUNC_4(
   "%s test: Failed to unshare mount namespace\n",
   VAR_18);

 VAR_16 = FUNC_7(((void*)0), "/", ((void*)0), VAR_5 | VAR_4, 0);
 if (VAR_16 < 0)
  FUNC_4("%s test: Failed to remount / private\n",
       VAR_18);


 VAR_17 = FUNC_2();
 if (VAR_17 < 0)
  FUNC_4("%s test: Failed to create new process\n",
       VAR_18);

 if (VAR_17 == 0) {
  char VAR_19[256];
  pid_t VAR_20;
  int VAR_21 = -1;

  (void)FUNC_13("/proc", VAR_3);
  VAR_16 = FUNC_7("proc", "/proc", "proc", 0, ((void*)0));
  if (VAR_16 < 0)
   FUNC_0(VAR_8);


  for (VAR_15 = 0; VAR_15 <= VAR_9; VAR_15++) {
   VAR_20 = FUNC_2();
   if (VAR_20 < 0)
    FUNC_0(VAR_8);

   if (VAR_20 == 0)
    FUNC_0(130);

   if (VAR_20 == VAR_10) {
    FUNC_11(VAR_19, sizeof(VAR_19), "/proc/%d", VAR_20);
    FUNC_5("pid to recycle is %d\n", VAR_20);
    VAR_21 = FUNC_8(VAR_19, VAR_7 | VAR_6);
   }

   if (FUNC_15(VAR_20))
    FUNC_0(VAR_8);

   if (VAR_20 >= VAR_10)
    break;
  }





  if (VAR_20 != VAR_10) {

   FUNC_1(VAR_21);
   FUNC_0(129);
  }

  if (VAR_21 < 0)
   FUNC_0(VAR_8);

  for (VAR_15 = 0; VAR_15 <= VAR_9; VAR_15++) {
   char VAR_22;
   int VAR_23[2];
   pid_t VAR_24;
   int VAR_25 = 130;

   VAR_16 = FUNC_9(VAR_23, VAR_6);
   if (VAR_16 < 0)
    FUNC_0(VAR_8);

   VAR_24 = FUNC_2();
   if (VAR_24 < 0)
    FUNC_0(VAR_8);

   if (VAR_24 == 0) {
    FUNC_1(VAR_23[1]);
    (void)FUNC_10(VAR_23[0], &VAR_22, 1);
    FUNC_1(VAR_23[0]);

    FUNC_0(130);
   }





   FUNC_1(VAR_23[0]);
   VAR_16 = FUNC_3(VAR_24, VAR_13);
   FUNC_1(VAR_23[1]);
   if (VAR_16) {
    (void)FUNC_15(VAR_24);
    FUNC_0(VAR_8);
   }






   if (VAR_24 == VAR_10) {
    VAR_16 = FUNC_12(VAR_21, VAR_11,
           ((void*)0), 0);
    if (VAR_16 && VAR_14 == VAR_2)
     VAR_25 = 128;
    else
     VAR_25 = 131;
   }


   VAR_16 = FUNC_3(VAR_24, VAR_11);
   if (VAR_16)
    (void)FUNC_3(VAR_24, VAR_12);

   if (FUNC_15(VAR_24))
    FUNC_0(VAR_8);

   switch (VAR_25) {
   case 131:

   case 128:
    FUNC_0(VAR_25);
   case 130:
    break;
   default:

    FUNC_0(VAR_8);
   }






   if (VAR_24 > VAR_9)
    FUNC_0(129);
  }


  FUNC_0(129);
 }

 VAR_16 = FUNC_15(VAR_17);
 switch (VAR_16) {
 case 131:
  FUNC_4(
   "%s test: Managed to signal recycled pid %d\n",
   VAR_18, VAR_10);
 case 130:
  FUNC_4("%s test: Failed to recycle pid %d\n",
       VAR_18, VAR_10);
 case 129:
  FUNC_5("%s test: Skipping test\n", VAR_18);
  VAR_16 = 0;
  break;
 case 128:
  FUNC_6(
   "%s test: Failed to signal recycled pid as expected\n",
   VAR_18);
  VAR_16 = 0;
  break;
 default :
  FUNC_4("%s test: Error while running tests\n",
       VAR_18);
 }

 return VAR_16;
}
