
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef scalar_t__ cmsContext ;
struct TYPE_3__ {scalar_t__ WhoAllocated; int DontCheck; scalar_t__ KeepSize; } ;
typedef TYPE_1__ _cmsMemoryBlock ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_2, void *VAR_3)
{
    _cmsMemoryBlock* VAR_4;

    if (VAR_3 == ((void*)0)) {
        FUNC_0("NULL free (which is a no-op in C, but may be an clue of something going wrong)");
    }

    VAR_4 = (_cmsMemoryBlock*) (((cmsUInt8Number*) VAR_3) - VAR_0);
    VAR_1 -= VAR_4 ->KeepSize;

    if (VAR_4 ->WhoAllocated != VAR_2 && !VAR_4->DontCheck) {
        FUNC_0("Trying to free memory allocated by a different thread");
    }

    FUNC_1(VAR_4);
}
