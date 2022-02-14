
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char const*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,char const*) ;

__attribute__((used)) static void FUNC_16(js_State *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 char VAR_3[32];




 FUNC_4(VAR_0, -1, VAR_1);

 if (FUNC_6(VAR_0, -1)) {
  if (FUNC_5(VAR_0, -1)) {
   int VAR_4 = 0;
   int VAR_5 = FUNC_3(VAR_0, -1);
   for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
    FUNC_16(VAR_0, FUNC_8(VAR_3, VAR_4));
    if (FUNC_7(VAR_0, -1)) {
     FUNC_10(VAR_0, 1);
     FUNC_2(VAR_0, -1, VAR_3);
    } else {
     FUNC_15(VAR_0, -2, VAR_3);
    }
   }
  } else {
   FUNC_11(VAR_0, -1, 1);
   while ((VAR_2 = FUNC_9(VAR_0, -1))) {
    FUNC_13(VAR_0);
    FUNC_16(VAR_0, VAR_2);
    if (FUNC_7(VAR_0, -1)) {
     FUNC_10(VAR_0, 1);
     FUNC_2(VAR_0, -1, VAR_2);
    } else {
     FUNC_15(VAR_0, -2, VAR_2);
    }
    FUNC_13(VAR_0);
   }
   FUNC_10(VAR_0, 1);
  }
 }

 FUNC_1(VAR_0, 2);
 FUNC_1(VAR_0, -3);
 FUNC_12(VAR_0, VAR_1);
 FUNC_1(VAR_0, -4);
 FUNC_0(VAR_0, 2);
 FUNC_14(VAR_0);
}
