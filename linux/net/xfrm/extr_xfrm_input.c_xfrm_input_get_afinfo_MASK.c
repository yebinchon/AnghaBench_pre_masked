
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_input_afinfo {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 struct xfrm_input_afinfo* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int * VAR_0 ;

__attribute__((used)) static const struct xfrm_input_afinfo *FUNC_6(unsigned int VAR_1)
{
 const struct xfrm_input_afinfo *VAR_2;

 if (FUNC_1(VAR_1 >= FUNC_0(VAR_0)))
  return ((void*)0);

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0[VAR_1]);
 if (FUNC_5(!VAR_2))
  FUNC_4();
 return VAR_2;
}
