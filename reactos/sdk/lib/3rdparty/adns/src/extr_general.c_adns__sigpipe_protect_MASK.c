
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef TYPE_1__* adns_state ;
struct TYPE_3__ {int iflags; int stdsigpipe; int stdsigmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;

void FUNC_5(adns_state VAR_4) {

  sigset_t VAR_5;
  struct sigaction VAR_6;
  int VAR_7;

  if (VAR_4->iflags & VAR_3) return;

  FUNC_3(&VAR_5);
  FUNC_2(&VAR_5,VAR_0);

  VAR_6.sa_handler= VAR_1;
  FUNC_3(&VAR_6.sa_mask);
  VAR_6.sa_flags= 0;

  VAR_7= FUNC_4(VAR_2,&VAR_5,&VAR_4->stdsigmask); FUNC_0(!VAR_7);
  VAR_7= FUNC_1(VAR_0,&VAR_6,&VAR_4->stdsigpipe); FUNC_0(!VAR_7);

}
