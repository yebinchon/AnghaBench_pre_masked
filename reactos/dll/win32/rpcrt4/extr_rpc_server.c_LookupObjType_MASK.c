
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UUID ;
struct TYPE_3__ {int Type; } ;
typedef TYPE_1__ RpcObjTypeMap ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline UUID *FUNC_1(UUID *VAR_1)
{
  RpcObjTypeMap *VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
    return &VAR_2->Type;
  else
    return &VAR_0;
}
