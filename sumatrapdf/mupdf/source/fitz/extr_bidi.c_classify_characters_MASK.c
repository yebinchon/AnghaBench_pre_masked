
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fz_bidi_flags ;
typedef scalar_t__ fz_bidi_chartype ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(const uint32_t *VAR_3,
  fz_bidi_chartype *VAR_4,
  size_t VAR_5,
  fz_bidi_flags VAR_6)
{
 size_t VAR_7;

 if ((VAR_6 & VAR_0)!=0)
 {
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  {
   VAR_4[VAR_7] = FUNC_1(VAR_3[VAR_7]);
  }
 }
 else
 {
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  {
   VAR_4[VAR_7] = FUNC_0(VAR_3[VAR_7]);



  }



 }
}
