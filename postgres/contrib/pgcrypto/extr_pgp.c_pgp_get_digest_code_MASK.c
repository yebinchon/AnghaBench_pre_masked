
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digest_info {int code; scalar_t__ name; } ;


 int VAR_0 ;
 struct digest_info* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

int
FUNC_1(const char *VAR_2)
{
 const struct digest_info *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->name; VAR_3++)
  if (FUNC_0(VAR_3->name, VAR_2) == 0)
   return VAR_3->code;
 return VAR_0;
}
