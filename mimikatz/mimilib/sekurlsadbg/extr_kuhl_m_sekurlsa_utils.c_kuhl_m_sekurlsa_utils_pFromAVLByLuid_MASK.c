
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_4__ {scalar_t__ RightChild; } ;
struct TYPE_5__ {TYPE_1__ BalancedRoot; } ;
typedef TYPE_2__ RTL_AVL_TABLE ;
typedef int PLUID ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

ULONG_PTR FUNC_2(ULONG_PTR VAR_0, ULONG VAR_1, PLUID VAR_2)
{
 ULONG_PTR VAR_3 = 0;
 RTL_AVL_TABLE VAR_4;
 if(FUNC_0(VAR_0, &VAR_4, sizeof(RTL_AVL_TABLE), ((void*)0)))
 {
  VAR_0 = (ULONG_PTR) VAR_4.BalancedRoot.RightChild;
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return VAR_3;
}
