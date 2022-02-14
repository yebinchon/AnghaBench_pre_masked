
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,char*,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_5)
{
 int VAR_6, VAR_7 = FUNC_4(VAR_5);
 int VAR_8;

 if (!FUNC_5(VAR_5, 0))
  FUNC_9(VAR_5, "not a function");

 VAR_8 = FUNC_2(VAR_5, 0);
 if (VAR_8 > VAR_7 - 2)
  VAR_8 -= VAR_7 - 2;
 else
  VAR_8 = 0;


 FUNC_3(VAR_5, 0, "prototype");
 FUNC_7(VAR_5, VAR_3, VAR_4, "[bind]", VAR_8);


 FUNC_0(VAR_5, 0);
 FUNC_1(VAR_5, -2, "__TargetFunction__", VAR_2 | VAR_1 | VAR_0);


 FUNC_0(VAR_5, 1);
 FUNC_1(VAR_5, -2, "__BoundThis__", VAR_2 | VAR_1 | VAR_0);


 FUNC_6(VAR_5);
 for (VAR_6 = 2; VAR_6 < VAR_7; ++VAR_6) {
  FUNC_0(VAR_5, VAR_6);
  FUNC_8(VAR_5, -2, VAR_6 - 2);
 }
 FUNC_1(VAR_5, -2, "__BoundArguments__", VAR_2 | VAR_1 | VAR_0);
}
