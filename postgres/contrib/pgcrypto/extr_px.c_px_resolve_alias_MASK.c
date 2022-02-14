
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int alias; } ;
typedef TYPE_1__ PX_Alias ;


 scalar_t__ FUNC_0 (int ,char const*) ;

const char *
FUNC_1(const PX_Alias *VAR_0, const char *VAR_1)
{
 while (VAR_0->name)
 {
  if (FUNC_0(VAR_0->alias, VAR_1) == 0)
   return VAR_0->name;
  VAR_0++;
 }
 return VAR_1;
}
