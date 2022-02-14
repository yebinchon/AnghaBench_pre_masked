
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t strm_int ;
typedef scalar_t__ strm_array ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(strm_array VAR_2, strm_array VAR_3)
{
  strm_int VAR_4, VAR_5;

  if (VAR_2 == VAR_3) return VAR_1;
  if (FUNC_0(VAR_2) != FUNC_0(VAR_3)) return VAR_0;
  for (VAR_4=0, VAR_5=FUNC_0(VAR_2); VAR_4<VAR_5; VAR_4++) {
    if (!FUNC_2(FUNC_1(VAR_2)[VAR_4], FUNC_1(VAR_3)[VAR_4])) {
      return VAR_0;
    }
  }
  return VAR_1;
}
