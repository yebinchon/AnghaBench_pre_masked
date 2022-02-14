
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,double) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 double FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int ) ;
 char* FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char const*) ;
 scalar_t__ FUNC_14 (char const*) ;

void FUNC_15(js_State *VAR_1)
{
 FUNC_9(VAR_1, -2, VAR_0);
 FUNC_9(VAR_1, -1, VAR_0);

 if (FUNC_2(VAR_1, -2) || FUNC_2(VAR_1, -1)) {
  const char *VAR_2 = FUNC_10(VAR_1, -2);
  const char *VAR_3 = FUNC_10(VAR_1, -1);

  char *VAR_4 = FUNC_3(VAR_1, FUNC_14(VAR_2) + FUNC_14(VAR_3) + 1);
  FUNC_13(VAR_4, VAR_2);
  FUNC_12(VAR_4, VAR_3);
  if (FUNC_11(VAR_1)) {
   FUNC_1(VAR_1, VAR_4);
   FUNC_7(VAR_1);
  }
  FUNC_4(VAR_1, 2);
  FUNC_6(VAR_1, VAR_4);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_4);
 } else {
  double VAR_5 = FUNC_8(VAR_1, -2);
  double VAR_6 = FUNC_8(VAR_1, -1);
  FUNC_4(VAR_1, 2);
  FUNC_5(VAR_1, VAR_5 + VAR_6);
 }
}
