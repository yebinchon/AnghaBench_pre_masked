
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int myProc; TYPE_1__* myLock; } ;
struct TYPE_3__ {int tag; } ;
typedef int Size ;
typedef TYPE_2__ PROCLOCKTAG ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint32
FUNC_3(const void *VAR_1, Size VAR_2)
{
 const PROCLOCKTAG *VAR_3 = (const PROCLOCKTAG *) VAR_1;
 uint32 VAR_4;
 Datum VAR_5;

 FUNC_0(VAR_2 == sizeof(PROCLOCKTAG));


 VAR_4 = FUNC_1(&VAR_3->myLock->tag);
 VAR_5 = FUNC_2(VAR_3->myProc);
 VAR_4 ^= ((uint32) VAR_5) << VAR_0;

 return VAR_4;
}
