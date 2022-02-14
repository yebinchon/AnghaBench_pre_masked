
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_misc {int * ns; } ;
typedef int strm_value ;
typedef int strm_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 struct strm_misc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct strm_misc*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

strm_state*
FUNC_7(strm_value VAR_5)
{
  if (FUNC_0(VAR_5)) {
    strm_state* VAR_6 = FUNC_1(VAR_5);
    if (VAR_6) return VAR_6;
    return VAR_2;
  }
  if (FUNC_5(VAR_5)) {
    return VAR_4;
  }
  if (FUNC_2(VAR_5)) {
    return VAR_3;
  }
  if (FUNC_6(VAR_5) == VAR_1) {
    struct strm_misc* VAR_7 = FUNC_3(VAR_5);

    if (!VAR_7) return ((void*)0);
    if (FUNC_4(VAR_7) == VAR_0) {
      return VAR_7->ns;
    }
  }
  return ((void*)0);
}
