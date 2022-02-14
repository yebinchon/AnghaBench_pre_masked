
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {scalar_t__ address; int * member_1; TYPE_2__* member_0; } ;
struct TYPE_10__ {int * address; } ;
struct TYPE_8__ {int * RightChild; int * LeftChild; } ;
struct TYPE_9__ {TYPE_1__ BalancedRoot; int * OrderedPointer; } ;
typedef TYPE_2__ RTL_AVL_TABLE ;
typedef int * PVOID ;
typedef int PLUID ;
typedef TYPE_3__* PKULL_M_MEMORY_ADDRESS ;
typedef scalar_t__ PBYTE ;
typedef int LUID ;
typedef TYPE_4__ KULL_M_MEMORY_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*,int) ;

PVOID FUNC_4(PKULL_M_MEMORY_ADDRESS VAR_2, ULONG VAR_3, PLUID VAR_4)
{
 PVOID VAR_5 = ((void*)0);
 RTL_AVL_TABLE VAR_6;
 KULL_M_MEMORY_ADDRESS VAR_7 = {&VAR_6, &VAR_0};

 if(FUNC_3(&VAR_7, VAR_2, sizeof(RTL_AVL_TABLE)))
 {
  if((VAR_2->address = VAR_6.OrderedPointer))
  {
   if((VAR_7.address = FUNC_0(VAR_1, VAR_3 + sizeof(LUID))))
   {
    if(FUNC_3(&VAR_7, VAR_2, VAR_3 + sizeof(LUID)))
    {
     if(FUNC_2(VAR_4, (PLUID) ((PBYTE) (VAR_7.address) + VAR_3)))
      VAR_5 = VAR_6.OrderedPointer;
    }
    FUNC_1(VAR_7.address);
   }
  }
  if(!VAR_5 && (VAR_2->address = VAR_6.BalancedRoot.LeftChild))
   VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
  if(!VAR_5 && (VAR_2->address = VAR_6.BalancedRoot.RightChild))
   VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 }
 return VAR_5;
}
