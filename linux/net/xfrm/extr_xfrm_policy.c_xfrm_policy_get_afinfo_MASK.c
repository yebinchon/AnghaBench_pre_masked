
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {int dummy; } ;


 unsigned short FUNC_0 (int *) ;
 struct xfrm_policy_afinfo* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int * VAR_0 ;

__attribute__((used)) static const struct xfrm_policy_afinfo *FUNC_5(unsigned short VAR_1)
{
 const struct xfrm_policy_afinfo *VAR_2;

 if (FUNC_4(VAR_1 >= FUNC_0(VAR_0)))
  return ((void*)0);
 FUNC_2();
 VAR_2 = FUNC_1(VAR_0[VAR_1]);
 if (FUNC_4(!VAR_2))
  FUNC_3();
 return VAR_2;
}
