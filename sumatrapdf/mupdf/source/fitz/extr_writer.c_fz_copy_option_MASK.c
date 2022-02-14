
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;

int
FUNC_2(fz_context *VAR_0, const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_1;
 size_t VAR_5, VAR_6;

 if (VAR_1 == ((void*)0)) {
  if (VAR_3)
   *VAR_2 = 0;
  return 0;
 }

 while (*VAR_4 != ',' && *VAR_4 != 0)
  VAR_4++;

 VAR_5 = VAR_4-VAR_1;
 VAR_6 = VAR_5+1;
 if (VAR_5 > VAR_3)
  VAR_5 = VAR_3;
 FUNC_0(VAR_2, VAR_1, VAR_5);
 if (VAR_5 < VAR_3)
  FUNC_1(VAR_2+VAR_5, 0, VAR_3-VAR_5);

 return VAR_6 >= VAR_3 ? VAR_6 - VAR_3 : 0;
}
