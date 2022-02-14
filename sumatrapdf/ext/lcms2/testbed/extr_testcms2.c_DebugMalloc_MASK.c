
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsContext ;
struct TYPE_2__ {scalar_t__ DontCheck; int WhoAllocated; scalar_t__ KeepSize; } ;
typedef TYPE_1__ _cmsMemoryBlock ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static
void* FUNC_2(cmsContext VAR_4, cmsUInt32Number VAR_5)
{
    _cmsMemoryBlock* VAR_6;

    if (VAR_5 <= 0) {
       FUNC_0("malloc requested with zero bytes");
    }

    VAR_3 += VAR_5;

    if (VAR_3 > VAR_0)
        VAR_0 = VAR_3;

    if (VAR_5 > VAR_2)
        VAR_2 = VAR_5;

    VAR_6 = (_cmsMemoryBlock*) FUNC_1(VAR_5 + VAR_1);
    if (VAR_6 == ((void*)0)) return ((void*)0);

    VAR_6 ->KeepSize = VAR_5;
    VAR_6 ->WhoAllocated = VAR_4;
    VAR_6 ->DontCheck = 0;

    return (void*) ((cmsUInt8Number*) VAR_6 + VAR_1);
}
