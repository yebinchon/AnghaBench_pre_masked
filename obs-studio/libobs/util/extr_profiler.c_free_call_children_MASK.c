
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
struct TYPE_4__ {TYPE_3__ children; } ;
typedef TYPE_1__ profile_call ;


 int FUNC_0 (TYPE_3__) ;

__attribute__((used)) static void FUNC_1(profile_call *VAR_0)
{
 if (!VAR_0)
  return;

 const size_t VAR_1 = VAR_0->children.num;
 for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1(&VAR_0->children.array[VAR_2]);

 FUNC_0(VAR_0->children);
}
