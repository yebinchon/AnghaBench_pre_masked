
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;
typedef int strm_state ;
typedef scalar_t__ khiter_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int * FUNC_4 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

strm_string
FUNC_5(strm_state* VAR_2)
{
  khiter_t VAR_3;

  if (!VAR_0) return VAR_1;
  for (VAR_3 = FUNC_0(VAR_0); VAR_3 != FUNC_1(VAR_0); ++VAR_3) {
    if (FUNC_2(VAR_0, VAR_3)) {
      if (FUNC_4(VAR_0, VAR_3) == VAR_2)
        return FUNC_3(VAR_0, VAR_3);
    }
  }
  return VAR_1;
}
