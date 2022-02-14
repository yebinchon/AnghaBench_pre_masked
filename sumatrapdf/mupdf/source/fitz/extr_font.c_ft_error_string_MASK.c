
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_error {char const* str; int err; } ;


 struct ft_error* VAR_0 ;

const char *FUNC_0(int VAR_1)
{
 const struct ft_error *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->str; VAR_2++)
  if (VAR_2->err == VAR_1)
   return VAR_2->str;

 return "Unknown error";
}
