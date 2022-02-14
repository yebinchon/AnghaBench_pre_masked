
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
typedef int gfp_t ;


 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (struct nlattr const*) ;
 size_t FUNC_3 (struct nlattr const*) ;

char *FUNC_4(const struct nlattr *VAR_0, gfp_t VAR_1)
{
 size_t VAR_2 = FUNC_3(VAR_0);
 char *VAR_3 = FUNC_2(VAR_0), *VAR_4;

 if (VAR_2 > 0 && VAR_3[VAR_2 - 1] == '\0')
  VAR_2--;

 VAR_4 = FUNC_0(VAR_2 + 1, VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4, VAR_3, VAR_2);
  VAR_4[VAR_2] = '\0';
 }
 return VAR_4;
}
