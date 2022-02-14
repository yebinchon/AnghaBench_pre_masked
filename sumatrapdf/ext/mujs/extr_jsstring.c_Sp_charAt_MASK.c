
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef scalar_t__ Rune ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,int) ;
 size_t FUNC_5 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_1)
{
 char VAR_2[VAR_0 + 1];
 const char *VAR_3 = FUNC_0(VAR_1, 0);
 int VAR_4 = FUNC_4(VAR_1, 1);
 Rune VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (VAR_5 > 0) {
  VAR_2[FUNC_5(VAR_2, &VAR_5)] = 0;
  FUNC_2(VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_1, "");
 }
}
