
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_12__ {int * member_1; TYPE_2__* member_0; } ;
struct TYPE_11__ {int address; } ;
struct TYPE_9__ {int RightChild; } ;
struct TYPE_10__ {TYPE_1__ BalancedRoot; } ;
typedef TYPE_2__ RTL_AVL_TABLE ;
typedef int * PVOID ;
typedef int PLUID ;
typedef TYPE_3__* PKULL_M_MEMORY_ADDRESS ;
typedef TYPE_4__ KULL_M_MEMORY_ADDRESS ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;

PVOID FUNC_2(PKULL_M_MEMORY_ADDRESS VAR_1, ULONG VAR_2, PLUID VAR_3)
{
 PVOID VAR_4 = ((void*)0);
 RTL_AVL_TABLE VAR_5;
 KULL_M_MEMORY_ADDRESS VAR_6 = {&VAR_5, &VAR_0};

 if(FUNC_1(&VAR_6, VAR_1, sizeof(RTL_AVL_TABLE)))
 {
  VAR_1->address = VAR_5.BalancedRoot.RightChild;
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
