
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * list; scalar_t__ singleton; } ;
typedef int List ;
typedef TYPE_1__ JsonValueList ;


 int * FUNC_0 (scalar_t__) ;

__attribute__((used)) static List *
FUNC_1(JsonValueList *VAR_0)
{
 if (VAR_0->singleton)
  return FUNC_0(VAR_0->singleton);

 return VAR_0->list;
}
