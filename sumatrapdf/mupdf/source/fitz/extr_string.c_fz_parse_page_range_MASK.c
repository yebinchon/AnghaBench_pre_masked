
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char const*,char**,int) ;

const char *FUNC_2(fz_context *VAR_0, const char *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
 if (!VAR_1 || !VAR_1[0])
  return ((void*)0);

 if (VAR_1[0] == ',')
  VAR_1 += 1;

 if (VAR_1[0] == 'N')
 {
  *VAR_2 = VAR_4;
  VAR_1 += 1;
 }
 else
  *VAR_2 = FUNC_1(VAR_1, (char**)&VAR_1, 10);

 if (VAR_1[0] == '-')
 {
  if (VAR_1[1] == 'N')
  {
   *VAR_3 = VAR_4;
   VAR_1 += 2;
  }
  else
   *VAR_3 = FUNC_1(VAR_1+1, (char**)&VAR_1, 10);
 }
 else
  *VAR_3 = *VAR_2;

 *VAR_2 = FUNC_0(*VAR_2, 1, VAR_4);
 *VAR_3 = FUNC_0(*VAR_3, 1, VAR_4);

 return VAR_1;
}
