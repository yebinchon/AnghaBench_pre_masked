
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* gen; } ;
typedef TYPE_2__ relopt_value ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef int Size ;


 scalar_t__ FUNC_0 (TYPE_2__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *
FUNC_2(Size VAR_1, relopt_value *VAR_2, int VAR_3)
{
 Size VAR_4 = VAR_1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_2[VAR_5].gen->type == VAR_0)
   VAR_4 += FUNC_0(VAR_2[VAR_5]) + 1;

 return FUNC_1(VAR_4);
}
