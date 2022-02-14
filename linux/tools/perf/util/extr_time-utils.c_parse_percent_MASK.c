
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 double FUNC_2 (char*,char**) ;

__attribute__((used)) static int FUNC_3(double *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;
 double VAR_4;

 VAR_2 = FUNC_0(VAR_1, '%');
 if (VAR_2)
  *VAR_2 = '\0';
 else
  return -1;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_3 != VAR_1 + FUNC_1(VAR_1))
  return -1;

 *VAR_0 = VAR_4 / 100.0;
 return 0;
}
