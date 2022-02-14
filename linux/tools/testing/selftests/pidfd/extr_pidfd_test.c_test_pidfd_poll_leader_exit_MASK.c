
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char const*) ;
 int* FUNC_5 (int *,int,int,int,int,int ) ;
 int FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int*,int ) ;

__attribute__((used)) static void FUNC_11(int VAR_10)
{
 int VAR_11, VAR_12 = 0;
 int VAR_13, VAR_14;
 time_t VAR_15 = FUNC_9(((void*)0));
 const char *VAR_16 = "pidfd_poll check for premature notification on non-empty"
    "group leader exit";

 VAR_7 = FUNC_5(((void*)0), sizeof *VAR_7, VAR_5 | VAR_6,
   VAR_4 | VAR_2, -1, 0);

 if (VAR_7 == VAR_3)
  FUNC_2("%s test: mmap failed (errno %d)\n",
       VAR_16, VAR_9);

 FUNC_3("Parent: pid: %d\n", FUNC_1());
 VAR_11 = FUNC_6(VAR_1, &VAR_12, VAR_8);
 if (VAR_11 < 0)
  FUNC_2("%s test: pidfd_clone failed (ret %d, errno %d)\n",
       VAR_16, VAR_11, VAR_9);

 FUNC_3("Parent: Waiting for Child (%d) to complete.\n", VAR_11);

 if (VAR_10) {
  VAR_14 = FUNC_10(VAR_11, &VAR_13, 0);
  if (VAR_14 == -1)
   FUNC_3("Parent: error\n");
 } else {





  FUNC_8(1);
  FUNC_7(VAR_16, VAR_12);
 }

 if (VAR_14 == VAR_11)
  FUNC_3("Parent: Child process waited for.\n");

 time_t VAR_17 = FUNC_9(((void*)0)) - *VAR_7;

 FUNC_3("Time since child exit: %lu\n", VAR_17);

 FUNC_0(VAR_12);

 if (VAR_17 < VAR_0 ||
   VAR_17 > VAR_0 + 2)
  FUNC_2("%s test: Failed\n", VAR_16);
 else
  FUNC_4("%s test: Passed\n", VAR_16);
}
