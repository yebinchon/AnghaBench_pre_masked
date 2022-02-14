
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xmin; } ;
typedef TYPE_1__* Snapshot ;
typedef int HeapTuple ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(HeapTuple VAR_1, Snapshot VAR_2,
        Buffer VAR_3)
{
 return FUNC_0(VAR_1, VAR_2->xmin, VAR_3)
  != VAR_0;
}
