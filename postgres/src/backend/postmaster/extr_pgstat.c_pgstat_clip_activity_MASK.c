
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;
 int VAR_4;
 VAR_2 = FUNC_1(VAR_1, VAR_0 - 1);


 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_2, VAR_3,
         VAR_0 - 1);

 VAR_2[VAR_4] = '\0';

 return VAR_2;
}
