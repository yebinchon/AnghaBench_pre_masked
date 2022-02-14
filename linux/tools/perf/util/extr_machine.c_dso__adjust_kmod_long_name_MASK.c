
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char* long_name; } ;


 int FUNC_0 (struct dso*,char const*,int) ;
 int FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct dso *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 if (!VAR_1 || !VAR_0 || !VAR_0->long_name)
  return;
 if (VAR_0->long_name[0] != '[')
  return;
 if (!FUNC_1(VAR_1, '/'))
  return;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(VAR_0, VAR_2, 1);
}
