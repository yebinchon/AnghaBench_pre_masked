
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,double) ;
 double FUNC_3 (char const*,char**) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_2)
{
 const char *VAR_3 = FUNC_4(VAR_2, 1);
 char *VAR_4;
 double VAR_5;

 while (FUNC_1(*VAR_3) || FUNC_0(*VAR_3)) ++VAR_3;
 if (!FUNC_5(VAR_3, "Infinity", 8))
  FUNC_2(VAR_2, VAR_0);
 else if (!FUNC_5(VAR_3, "+Infinity", 9))
  FUNC_2(VAR_2, VAR_0);
 else if (!FUNC_5(VAR_3, "-Infinity", 9))
  FUNC_2(VAR_2, -VAR_0);
 else {
  VAR_5 = FUNC_3(VAR_3, &VAR_4);
  if (VAR_4 == VAR_3)
   FUNC_2(VAR_2, VAR_1);
  else
   FUNC_2(VAR_2, VAR_5);
 }
}
