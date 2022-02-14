
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char*,char const*,float) ;

__attribute__((used)) static int FUNC_1(int VAR_0, const char *VAR_1, float VAR_2,
         char *VAR_3, int VAR_4, float VAR_5)
{
 int VAR_6;

 if (VAR_5 != 0.0 && VAR_2 < VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_3, VAR_4, "%s%s:%.1f%%", (VAR_0) ? " " : " (", VAR_1, VAR_2);

 return VAR_6;
}
