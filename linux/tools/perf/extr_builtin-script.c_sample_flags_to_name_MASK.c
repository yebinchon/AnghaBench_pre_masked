
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {char const* name; scalar_t__ flags; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name ; VAR_2++) {
  if (VAR_0[VAR_2].flags == VAR_1)
   return VAR_0[VAR_2].name;
 }

 return ((void*)0);
}
