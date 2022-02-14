
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsContext ;
struct TYPE_2__ {int KeepSize; } ;
typedef TYPE_1__ _cmsMemoryBlock ;


 int FUNC_0 (int ,void*) ;
 void* FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_2 (void*,void*,int ) ;

__attribute__((used)) static
void * FUNC_3(cmsContext VAR_1, void* VAR_2, cmsUInt32Number VAR_3)
{
    _cmsMemoryBlock* VAR_4;
    void* VAR_5;
    cmsUInt32Number VAR_6;

    VAR_5 = FUNC_1(VAR_1, VAR_3);
    if (VAR_2 == ((void*)0)) return VAR_5;

    VAR_4 = (_cmsMemoryBlock*) (((cmsUInt8Number*) VAR_2) - VAR_0);
    VAR_6 = VAR_4 -> KeepSize > VAR_3 ? VAR_3 : VAR_4 ->KeepSize;
    FUNC_2(VAR_5, VAR_2, VAR_6);
    FUNC_0(VAR_1, VAR_2);

    return VAR_5;
}
