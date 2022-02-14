
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, 0);
 VAR_3 = FUNC_3(VAR_0, 2) ? FUNC_7(VAR_0, 2) : 0;
 if (VAR_3 < 0) VAR_3 = VAR_2 + VAR_3;
 if (VAR_3 < 0) VAR_3 = 0;

 FUNC_0(VAR_0, 1);
 for (VAR_1 = VAR_3; VAR_1 < VAR_2; ++VAR_1) {
  if (FUNC_2(VAR_0, 0, VAR_1)) {
   if (FUNC_6(VAR_0)) {
    FUNC_5(VAR_0, VAR_1);
    return;
   }
   FUNC_4(VAR_0, 1);
  }
 }

 FUNC_5(VAR_0, -1);
}
