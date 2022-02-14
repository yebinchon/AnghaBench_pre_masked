
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;

char *
FUNC_3(const char *VAR_0, Size VAR_1)
{
 char *VAR_2;

 VAR_1 = FUNC_2(VAR_0, VAR_1);

 VAR_2 = FUNC_1(VAR_1 + 1);
 FUNC_0(VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = '\0';

 return VAR_2;
}
