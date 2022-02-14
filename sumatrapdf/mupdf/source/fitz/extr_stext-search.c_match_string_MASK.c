
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 const char *VAR_4 = VAR_0;
 VAR_0 += FUNC_0(&VAR_2, VAR_0);
 VAR_1 += FUNC_0(&VAR_3, VAR_1);
 while (VAR_2 == VAR_3)
 {
  VAR_4 = VAR_0;
  if (VAR_2 == ' ')
   do
    VAR_0 += FUNC_0(&VAR_2, VAR_0);
   while (VAR_2 == ' ');
  else
   VAR_0 += FUNC_0(&VAR_2, VAR_0);
  if (VAR_3 == ' ')
   do
    VAR_1 += FUNC_0(&VAR_3, VAR_1);
   while (VAR_3 == ' ');
  else
   VAR_1 += FUNC_0(&VAR_3, VAR_1);
 }
 return VAR_3 == 0 ? VAR_4 : ((void*)0);
}
