
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct xfrm_state {int gclist; TYPE_1__ km; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_7(struct xfrm_state *VAR_4, bool VAR_5)
{
 FUNC_0(VAR_4->km.state != VAR_0);

 if (VAR_5) {
  FUNC_6();
  FUNC_1(VAR_4);
 } else {
  FUNC_4(&VAR_2);
  FUNC_2(&VAR_4->gclist, &VAR_1);
  FUNC_5(&VAR_2);
  FUNC_3(&VAR_3);
 }
}
