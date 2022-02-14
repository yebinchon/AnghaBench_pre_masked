
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*) ;

int
FUNC_1(const char *VAR_4)
{
 if (!FUNC_0(VAR_4, "zh-Hant")) return VAR_0;
 if (!FUNC_0(VAR_4, "zh-TW")) return VAR_0;
 if (!FUNC_0(VAR_4, "zh-HK")) return VAR_0;
 if (!FUNC_0(VAR_4, "zh-Hans")) return VAR_1;
 if (!FUNC_0(VAR_4, "zh-CN")) return VAR_1;
 if (!FUNC_0(VAR_4, "ja")) return VAR_2;
 if (!FUNC_0(VAR_4, "ko")) return VAR_3;
 return -1;
}
