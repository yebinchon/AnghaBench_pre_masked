
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ strm_string ;
typedef int strm_state ;
typedef scalar_t__ khiter_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,intptr_t) ;
 int * FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

strm_state*
FUNC_3(strm_string VAR_2)
{
  khiter_t VAR_3;

  if (!VAR_1) return ((void*)0);
  VAR_3 = FUNC_1(VAR_0, VAR_1, (intptr_t)VAR_2);
  if (VAR_3 == FUNC_0(VAR_1)) return ((void*)0);
  return FUNC_2(VAR_1, VAR_3);
}
