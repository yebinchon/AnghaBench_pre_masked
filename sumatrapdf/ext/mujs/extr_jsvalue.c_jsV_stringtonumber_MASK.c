
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 double FUNC_2 (char const*,char**) ;
 int FUNC_3 (char const*,char*,int) ;
 double FUNC_4 (char const*,char**,int) ;

double FUNC_5(js_State *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 double VAR_5;
 while (FUNC_1(*VAR_3) || FUNC_0(*VAR_3)) ++VAR_3;
 if (VAR_3[0] == '0' && (VAR_3[1] == 'x' || VAR_3[1] == 'X') && VAR_3[2] != 0)
  VAR_5 = FUNC_4(VAR_3 + 2, &VAR_4, 16);
 else if (!FUNC_3(VAR_3, "Infinity", 8))
  VAR_5 = VAR_0, VAR_4 = (char*)VAR_3 + 8;
 else if (!FUNC_3(VAR_3, "+Infinity", 9))
  VAR_5 = VAR_0, VAR_4 = (char*)VAR_3 + 9;
 else if (!FUNC_3(VAR_3, "-Infinity", 9))
  VAR_5 = -VAR_0, VAR_4 = (char*)VAR_3 + 9;
 else
  VAR_5 = FUNC_2(VAR_3, &VAR_4);
 while (FUNC_1(*VAR_4) || FUNC_0(*VAR_4)) ++VAR_4;
 if (*VAR_4) return VAR_1;
 return VAR_5;
}
