
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_7__ {scalar_t__ RightChild; scalar_t__ LeftChild; } ;
struct TYPE_8__ {TYPE_1__ BalancedRoot; scalar_t__ OrderedPointer; } ;
typedef TYPE_2__ RTL_AVL_TABLE ;
typedef TYPE_2__* PVOID ;
typedef int PLUID ;
typedef scalar_t__ PBYTE ;
typedef int LUID ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

ULONG_PTR FUNC_4(ULONG_PTR VAR_1, ULONG VAR_2, PLUID VAR_3)
{
 ULONG_PTR VAR_4 = 0;
 PVOID VAR_5;
 RTL_AVL_TABLE VAR_6;

 if(FUNC_2(VAR_1, &VAR_6, sizeof(RTL_AVL_TABLE), ((void*)0)))
 {
  if((VAR_1 = (ULONG_PTR) VAR_6.OrderedPointer))
  {
   if((VAR_5 = FUNC_0(VAR_0, VAR_2 + sizeof(LUID))))
   {
    if(FUNC_2(VAR_1, VAR_5, VAR_2 + sizeof(LUID), ((void*)0)))
    {
     if(FUNC_3(VAR_3, (PLUID) ((PBYTE) VAR_5 + VAR_2)))
      VAR_4 = (ULONG_PTR) VAR_6.OrderedPointer;
    }
    FUNC_1(VAR_5);
   }
  }
  if(!VAR_4 && (VAR_1 = (ULONG_PTR) VAR_6.BalancedRoot.LeftChild))
   VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
  if(!VAR_4 && (VAR_1 = (ULONG_PTR) VAR_6.BalancedRoot.RightChild))
   VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
