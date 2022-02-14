
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;

char *FUNC_2(const char *VAR_0, size_t VAR_1, gfp_t VAR_2)
{
 char *VAR_3;

 if (!VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1 + 1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_3, VAR_0, VAR_1);
  VAR_3[VAR_1] = '\0';
 }
 return VAR_3;
}
