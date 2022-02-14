
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_3)
{
 int VAR_4;
 FUNC_1("stack {\n");
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  FUNC_2(VAR_4 == VAR_0 ? '>' : ' ');
  FUNC_1("%4d: ", VAR_4);
  FUNC_0(VAR_3, VAR_1[VAR_4]);
  FUNC_2('\n');
 }
 FUNC_1("}\n");
}
