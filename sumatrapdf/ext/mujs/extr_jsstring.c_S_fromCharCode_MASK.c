
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int *) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_2(VAR_1);
 Rune VAR_4;
 char *VAR_5, *VAR_6;

 VAR_5 = VAR_6 = FUNC_3(VAR_1, (VAR_3-1) * VAR_0 + 1);

 if (FUNC_7(VAR_1)) {
  FUNC_1(VAR_1, VAR_5);
  FUNC_5(VAR_1);
 }

 for (VAR_2 = 1; VAR_2 < VAR_3; ++VAR_2) {
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  VAR_6 += FUNC_8(VAR_6, &VAR_4);
 }
 *VAR_6 = 0;
 FUNC_4(VAR_1, VAR_5);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_5);
}
