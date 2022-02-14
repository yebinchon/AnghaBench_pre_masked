
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Resub ;
typedef int Reprog ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(js_State *VAR_0, Reprog *VAR_1, const char *VAR_2, Resub *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_0, "regexec failed");
 return VAR_5;
}
