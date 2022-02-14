
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {int dummy; } ;


 unsigned int VAR_0 ;
 struct xfrm_state_afinfo* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_1 ;

struct xfrm_state_afinfo *FUNC_4(unsigned int VAR_2)
{
 struct xfrm_state_afinfo *VAR_3;
 if (FUNC_3(VAR_2 >= VAR_0))
  return ((void*)0);
 FUNC_1();
 VAR_3 = FUNC_0(VAR_1[VAR_2]);
 if (FUNC_3(!VAR_3))
  FUNC_2();
 return VAR_3;
}
