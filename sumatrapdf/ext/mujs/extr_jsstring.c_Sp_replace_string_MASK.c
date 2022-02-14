
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_6__ {char* s; } ;
typedef TYPE_1__ js_Buffer ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__**,char const) ;
 int FUNC_12 (int *,TYPE_1__**,char const*,char const*) ;
 int FUNC_13 (int *,TYPE_1__**,char const*) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (char const*) ;
 char* FUNC_18 (char const*,char const*) ;

__attribute__((used)) static void FUNC_19(js_State *VAR_0)
{
 const char *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 js_Buffer *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_1 = FUNC_0(VAR_0, 0);
 VAR_2 = FUNC_15(VAR_0, 1);

 VAR_3 = FUNC_18(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_2(VAR_0, 0);
  return;
 }
 VAR_6 = FUNC_17(VAR_2);

 if (FUNC_5(VAR_0, 2)) {
  FUNC_2(VAR_0, 2);
  FUNC_10(VAR_0);
  FUNC_7(VAR_0, VAR_3, VAR_6);
  FUNC_8(VAR_0, VAR_3 - VAR_1);
  FUNC_2(VAR_0, 0);
  FUNC_1(VAR_0, 3);
  VAR_4 = FUNC_15(VAR_0, -1);
  FUNC_12(VAR_0, &VAR_5, VAR_1, VAR_3);
  FUNC_13(VAR_0, &VAR_5, VAR_4);
  FUNC_13(VAR_0, &VAR_5, VAR_3 + VAR_6);
  FUNC_11(VAR_0, &VAR_5, 0);
  FUNC_6(VAR_0, 1);
 } else {
  VAR_4 = FUNC_15(VAR_0, 2);
  FUNC_12(VAR_0, &VAR_5, VAR_1, VAR_3);
  while (*VAR_4) {
   if (*VAR_4 == '$') {
    switch (*(++VAR_4)) {
    case 0: --VAR_4;

    case '$': FUNC_11(VAR_0, &VAR_5, '$'); break;
    case '&': FUNC_12(VAR_0, &VAR_5, VAR_3, VAR_3 + VAR_6); break;
    case '`': FUNC_12(VAR_0, &VAR_5, VAR_1, VAR_3); break;
    case '\'': FUNC_13(VAR_0, &VAR_5, VAR_3 + VAR_6); break;
    default: FUNC_11(VAR_0, &VAR_5, '$'); FUNC_11(VAR_0, &VAR_5, *VAR_4); break;
    }
    ++VAR_4;
   } else {
    FUNC_11(VAR_0, &VAR_5, *VAR_4++);
   }
  }
  FUNC_13(VAR_0, &VAR_5, VAR_3 + VAR_6);
  FUNC_11(VAR_0, &VAR_5, 0);
 }

 if (FUNC_16(VAR_0)) {
  FUNC_4(VAR_0, VAR_5);
  FUNC_14(VAR_0);
 }
 FUNC_9(VAR_0, VAR_5 ? VAR_5->s : "");
 FUNC_3(VAR_0);
 FUNC_4(VAR_0, VAR_5);
}
