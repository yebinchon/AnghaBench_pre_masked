
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digest_info {char const* name; int code; } ;


 struct digest_info* VAR_0 ;

const char *
FUNC_0(int VAR_1)
{
 const struct digest_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  if (VAR_2->code == VAR_1)
   return VAR_2->name;
 return ((void*)0);
}
