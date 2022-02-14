
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG_PTR ;
struct TYPE_5__ {int MaximumSize; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PHEAP ;
typedef int PFN_COUNT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int) ;

VOID
FUNC_2(
    PVOID VAR_3)
{
    PHEAP VAR_4 = VAR_3;


    FUNC_0(VAR_2,
                             (ULONG_PTR)VAR_4 / VAR_1,
                             (PFN_COUNT)(VAR_4->MaximumSize / VAR_1),
                             VAR_0);





}
