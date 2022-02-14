
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != VAR_0)
  return VAR_3;

 VAR_2 = FUNC_1(VAR_1, '/');
 if (!VAR_2)
  return VAR_0;

 *VAR_2 = 0;
 VAR_3 = FUNC_2(VAR_1);
 *VAR_2 = '/';

 if (VAR_3 == VAR_0)
  return VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 return VAR_3;
}
