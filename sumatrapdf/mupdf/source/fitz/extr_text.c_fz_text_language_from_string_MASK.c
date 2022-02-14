
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_text_language ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

fz_text_language FUNC_1(const char *VAR_3)
{
 fz_text_language VAR_4;

 if (VAR_3 == ((void*)0))
  return VAR_0;

 if (!FUNC_0(VAR_3, "zh-Hant") ||
   !FUNC_0(VAR_3, "zh-HK") ||
   !FUNC_0(VAR_3, "zh-MO") ||
   !FUNC_0(VAR_3, "zh-SG") ||
   !FUNC_0(VAR_3, "zh-TW"))
  return VAR_2;
 if (!FUNC_0(VAR_3, "zh-Hans") ||
   !FUNC_0(VAR_3, "zh-CN"))
  return VAR_1;


 if (VAR_3[0] >= 'a' && VAR_3[0] <= 'z')
  VAR_4 = VAR_3[0] - 'a' + 1;
 else if (VAR_3[0] >= 'A' && VAR_3[0] <= 'Z')
  VAR_4 = VAR_3[0] - 'A' + 1;
 else
  return 0;


 if (VAR_3[1] >= 'a' && VAR_3[1] <= 'z')
  VAR_4 += 27*(VAR_3[1] - 'a' + 1);
 else if (VAR_3[1] >= 'A' && VAR_3[1] <= 'Z')
  VAR_4 += 27*(VAR_3[1] - 'A' + 1);
 else
  return 0;


 if (VAR_3[2] >= 'a' && VAR_3[2] <= 'z')
  VAR_4 += 27*27*(VAR_3[2] - 'a' + 1);
 else if (VAR_3[2] >= 'A' && VAR_3[2] <= 'Z')
  VAR_4 += 27*27*(VAR_3[2] - 'A' + 1);



 return VAR_4;
}
