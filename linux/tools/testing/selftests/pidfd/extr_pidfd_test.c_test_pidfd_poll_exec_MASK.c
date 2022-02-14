
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,int*,int ) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int*,int ) ;

__attribute__((used)) static void FUNC_9(int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8;
 pthread_t VAR_9;
 time_t VAR_10 = FUNC_7(((void*)0));
 const char *VAR_11 = "pidfd_poll check for premature notification on child thread exec";

 FUNC_3("Parent: pid: %d\n", FUNC_1());
 VAR_5 = FUNC_5(VAR_1, &VAR_6, VAR_2);
 if (VAR_5 < 0)
  FUNC_2("%s test: pidfd_clone failed (ret %d, errno %d)\n",
       VAR_11, VAR_5, VAR_3);

 FUNC_3("Parent: Waiting for Child (%d) to complete.\n", VAR_5);

 if (VAR_4) {
  VAR_8 = FUNC_8(VAR_5, &VAR_7, 0);
  if (VAR_8 == -1)
   FUNC_3("Parent: error\n");

  if (VAR_8 == VAR_5)
   FUNC_3("Parent: Child process waited for.\n");
 } else {
  FUNC_6(VAR_11, VAR_6);
 }

 time_t VAR_12 = FUNC_7(((void*)0)) - VAR_10;

 FUNC_3("Time waited for child: %lu\n", VAR_12);

 FUNC_0(VAR_6);

 if (VAR_12 < VAR_0 || VAR_12 > VAR_0 + 2)
  FUNC_2("%s test: Failed\n", VAR_11);
 else
  FUNC_4("%s test: Passed\n", VAR_11);
}
