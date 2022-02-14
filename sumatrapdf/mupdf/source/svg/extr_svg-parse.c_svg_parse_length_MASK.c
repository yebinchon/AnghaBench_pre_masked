
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*,char**) ;
 int FUNC_1 (char*,char*) ;

float
FUNC_2(const char *VAR_0, float VAR_1, float VAR_2)
{
 char *VAR_3;
 float VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_3 == VAR_0)
  return 0;

 if (!FUNC_1(VAR_3, "px")) return VAR_4;

 if (!FUNC_1(VAR_3, "pt")) return VAR_4 * 1.0f;
 if (!FUNC_1(VAR_3, "pc")) return VAR_4 * 12.0f;
 if (!FUNC_1(VAR_3, "mm")) return VAR_4 * 2.83464567f;
 if (!FUNC_1(VAR_3, "cm")) return VAR_4 * 28.3464567f;
 if (!FUNC_1(VAR_3, "in")) return VAR_4 * 72.0f;

 if (!FUNC_1(VAR_3, "em")) return VAR_4 * VAR_2;
 if (!FUNC_1(VAR_3, "ex")) return VAR_4 * VAR_2 * 0.5f;

 if (!FUNC_1(VAR_3, "%"))
  return VAR_4 * VAR_1 * 0.01f;

 if (VAR_3[0] == 0)
  return VAR_4;

 return 0;
}
