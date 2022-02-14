
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; } ;
typedef int act ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,struct sigaction*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;
 int * VAR_13 ;
 int FUNC_7 (int ,char*) ;

int FUNC_8()
{
 struct sigaction VAR_14;

 if (0 > FUNC_6(VAR_0, VAR_9, 0, VAR_13)) {
  FUNC_7(VAR_11, "failed to init signals: socketpair()");
  return -1;
 }

 if (0 > FUNC_1(VAR_13[0], 0) || 0 > FUNC_1(VAR_13[1], 0)) {
  FUNC_7(VAR_11, "failed to init signals: fd_set_blocked()");
  return -1;
 }

 if (0 > FUNC_0(VAR_13[0], VAR_2, VAR_1) || 0 > FUNC_0(VAR_13[1], VAR_2, VAR_1)) {
  FUNC_7(VAR_11, "falied to init signals: fcntl(F_SETFD, FD_CLOEXEC)");
  return -1;
 }

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.sa_handler = VAR_12;
 FUNC_5(&VAR_14.sa_mask);

 if (0 > FUNC_4(VAR_6, &VAR_14, 0) ||
     0 > FUNC_4(VAR_4, &VAR_14, 0) ||
     0 > FUNC_4(VAR_7, &VAR_14, 0) ||
     0 > FUNC_4(VAR_8, &VAR_14, 0) ||
     0 > FUNC_4(VAR_3, &VAR_14, 0) ||
     0 > FUNC_4(VAR_5, &VAR_14, 0)) {

  FUNC_7(VAR_11, "failed to init signals: sigaction()");
  return -1;
 }

 FUNC_7(VAR_10, "Unblocking all signals");
 if (0 > FUNC_2()) {
  return -1;
 }
 return 0;
}
