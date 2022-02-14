
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(js_State *VAR_1, js_Object *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1);
 FUNC_3(VAR_1, FUNC_1(VAR_1, VAR_0, VAR_2));
 if (VAR_3 > 1) {
  FUNC_4(VAR_1, FUNC_6(VAR_1, 1));
  FUNC_5(VAR_1, -2, "message");
 }
 if (FUNC_0(VAR_1, 1))
  FUNC_5(VAR_1, -2, "stackTrace");
 return 1;
}
