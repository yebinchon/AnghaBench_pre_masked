
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
struct TYPE_3__ {int iflags; int stdsigmask; int stdsigpipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(adns_state VAR_3) {

  int VAR_4;

  if (VAR_3->iflags & VAR_2) return;

  VAR_4= FUNC_1(VAR_0,&VAR_3->stdsigpipe,0); FUNC_0(!VAR_4);
  VAR_4= FUNC_2(VAR_1,&VAR_3->stdsigmask,0); FUNC_0(!VAR_4);

}
