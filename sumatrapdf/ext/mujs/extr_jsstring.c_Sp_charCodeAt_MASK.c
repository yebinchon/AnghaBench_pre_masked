
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef scalar_t__ Rune ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_1, 0);
 int VAR_3 = FUNC_3(VAR_1, 1);
 Rune VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 > 0)
  FUNC_1(VAR_1, VAR_4);
 else
  FUNC_1(VAR_1, VAR_0);
}
