
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* attributes; int nattributes; } ;
typedef TYPE_1__ MVDependency ;
typedef scalar_t__ AttrNumber ;



__attribute__((used)) static bool
FUNC_0(MVDependency *VAR_0, AttrNumber VAR_1)
{
 if (VAR_1 == VAR_0->attributes[VAR_0->nattributes - 1])
  return 1;

 return 0;
}
