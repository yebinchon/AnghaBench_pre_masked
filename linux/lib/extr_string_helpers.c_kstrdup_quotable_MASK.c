
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (char const*,size_t,char*,size_t,int const,char const*) ;
 size_t FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_1, gfp_t VAR_2)
{
 size_t VAR_3, VAR_4;
 char *VAR_5;
 const int VAR_6 = VAR_0;
 const char VAR_7[] = "\f\n\r\t\v\a\e\\\"";

 if (!VAR_1)
  return ((void*)0);
 VAR_3 = FUNC_3(VAR_1);

 VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0), 0, VAR_6, VAR_7);
 VAR_5 = FUNC_1(VAR_4 + 1, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(FUNC_2(VAR_1, VAR_3, VAR_5, VAR_4, VAR_6, VAR_7) != VAR_4);
 VAR_5[VAR_4] = '\0';

 return VAR_5;
}
