
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const struct nlattr *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);
 char *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 if (VAR_4 > 0 && VAR_3[VAR_4 - 1] == '\0')
  VAR_4--;

 VAR_5 = VAR_4 - VAR_2;
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(FUNC_1(VAR_0), VAR_1, VAR_2);

 return VAR_5;
}
