
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {char* s; } ;
typedef TYPE_1__ js_Buffer ;


 int FUNC_0 (int *,TYPE_1__**,char*,char const*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__**,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 char* FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char*,char,int) ;
 int FUNC_18 (char const*) ;

__attribute__((used)) static void FUNC_19(js_State *VAR_0)
{
 js_Buffer *VAR_1 = ((void*)0);
 char VAR_2[12];
 const char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);

 if (FUNC_5(VAR_0, 3)) {
  VAR_5 = FUNC_13(VAR_0, 3);
  if (VAR_5 < 0) VAR_5 = 0;
  if (VAR_5 > 10) VAR_5 = 10;
  FUNC_17(VAR_2, ' ', VAR_5);
  VAR_2[VAR_5] = 0;
  if (VAR_5 > 0) VAR_4 = VAR_2;
 } else if (FUNC_6(VAR_0, 3)) {
  VAR_3 = FUNC_14(VAR_0, 3);
  VAR_5 = FUNC_18(VAR_3);
  if (VAR_5 > 10) VAR_5 = 10;
  FUNC_16(VAR_2, VAR_3, VAR_5);
  VAR_2[VAR_5] = 0;
  if (VAR_5 > 0) VAR_4 = VAR_2;
 }

 if (FUNC_15(VAR_0)) {
  FUNC_4(VAR_0, VAR_1);
  FUNC_12(VAR_0);
 }

 FUNC_7(VAR_0);
 FUNC_1(VAR_0, 1);
 FUNC_2(VAR_0, -2, "", 0);
 if (!FUNC_0(VAR_0, &VAR_1, "", VAR_4, 0)) {
  FUNC_9(VAR_0);
 } else {
  FUNC_10(VAR_0, &VAR_1, 0);
  FUNC_8(VAR_0, VAR_1 ? VAR_1->s : "");
  FUNC_11(VAR_0);
 }

 FUNC_3(VAR_0);
 FUNC_4(VAR_0, VAR_1);
}
