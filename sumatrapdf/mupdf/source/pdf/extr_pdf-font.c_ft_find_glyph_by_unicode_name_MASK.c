
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Face ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(FT_Face VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 > 0)
 {
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3 > 0)
   return VAR_3;
 }


 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 > 0)
  return VAR_3;


 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 > 0)
  return FUNC_0(VAR_0, VAR_2);


 return 0;
}
