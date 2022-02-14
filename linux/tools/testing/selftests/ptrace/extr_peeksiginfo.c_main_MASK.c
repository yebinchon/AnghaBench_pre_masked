
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {int si_int; int si_code; } ;
typedef TYPE_1__ siginfo_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int *,int *) ;
 int FUNC_11 (int,int ,TYPE_1__*) ;
 int FUNC_12 (int,int,int ,TYPE_1__*) ;
 int FUNC_13 (int,int *,int ) ;

int FUNC_14(int VAR_7, char *VAR_8[])
{
 siginfo_t VAR_9[VAR_2];
 int VAR_10, VAR_11 = 1;
 sigset_t VAR_12;
 pid_t VAR_13;

 FUNC_7(&VAR_12);
 FUNC_6(&VAR_12, VAR_3);
 FUNC_8(VAR_4, &VAR_12, ((void*)0));

 VAR_13 = FUNC_3();
 if (VAR_13 == -1) {
  FUNC_2("fork() failed: %m");
  return 1;
 } else if (VAR_13 == 0) {
  pid_t VAR_14 = FUNC_4();
  while (1) {
   if (VAR_14 != FUNC_4())
    break;
   FUNC_9(1);
  }
  return 1;
 }


 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9->si_code = VAR_6;
  VAR_9->si_int = VAR_10;
  FUNC_11(VAR_13, VAR_3, VAR_9);

  VAR_9->si_code = VAR_5;
  VAR_9->si_int = VAR_10;
  FUNC_12(VAR_13, VAR_13, VAR_3, VAR_9);
 }

 if (FUNC_10(VAR_0, VAR_13, ((void*)0), ((void*)0)) == -1)
  return 1;

 FUNC_13(VAR_13, ((void*)0), 0);


 if (FUNC_0(VAR_13, 0, 1))
  goto out;

 if (FUNC_0(VAR_13, 0, VAR_2))
  goto out;





 if (FUNC_0(VAR_13, 1, 3))
  goto out;

 if (FUNC_1(VAR_13))
  goto out;

 FUNC_5("PASS\n");
 VAR_11 = 0;
out:
 if (FUNC_10(VAR_1, VAR_13, ((void*)0), ((void*)0)) == -1)
  return 1;

 FUNC_13(VAR_13, ((void*)0), 0);

 return VAR_11;
}
