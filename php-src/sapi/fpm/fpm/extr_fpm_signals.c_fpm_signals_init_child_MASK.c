
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int * sa_handler; int sa_flags; } ;
typedef int act_dfl ;
typedef int act ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,struct sigaction*,int ) ;
 int * VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

int FUNC_5()
{
 struct sigaction VAR_11, VAR_12;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 FUNC_1(&VAR_12, 0, sizeof(VAR_12));

 VAR_11.sa_handler = &VAR_9;
 VAR_11.sa_flags |= VAR_0;

 VAR_12.sa_handler = VAR_7;

 FUNC_0(VAR_10[0]);
 FUNC_0(VAR_10[1]);

 if (0 > FUNC_2(VAR_4, &VAR_12, 0) ||
     0 > FUNC_2(VAR_2, &VAR_12, 0) ||
     0 > FUNC_2(VAR_5, &VAR_12, 0) ||
     0 > FUNC_2(VAR_6, &VAR_12, 0) ||
     0 > FUNC_2(VAR_1, &VAR_12, 0) ||
     0 > FUNC_2(VAR_3, &VAR_11, 0)) {

  FUNC_4(VAR_8, "failed to init child signals: sigaction()");
  return -1;
 }

 FUNC_3();
 return 0;
}
