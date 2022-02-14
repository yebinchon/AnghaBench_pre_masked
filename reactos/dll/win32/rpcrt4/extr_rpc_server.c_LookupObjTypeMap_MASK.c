
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UUID ;
struct TYPE_4__ {struct TYPE_4__* next; int Object; } ;
typedef TYPE_1__ RpcObjTypeMap ;
typedef int RPC_STATUS ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static inline RpcObjTypeMap *FUNC_1(UUID *VAR_1)
{
  RpcObjTypeMap *VAR_2 = VAR_0;
  RPC_STATUS VAR_3;

  while (VAR_2) {
    if (! FUNC_0(VAR_1, &VAR_2->Object, &VAR_3)) break;
    VAR_2 = VAR_2->next;
  }

  return VAR_2;
}
