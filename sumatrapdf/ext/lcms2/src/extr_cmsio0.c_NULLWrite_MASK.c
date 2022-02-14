
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
struct TYPE_4__ {scalar_t__ UsedSpace; scalar_t__ stream; } ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef void const* cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {scalar_t__ Pointer; } ;
typedef TYPE_2__ FILENULL ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_1, cmsIOHANDLER* VAR_2, cmsUInt32Number VAR_3, const void *VAR_4)
{
    FILENULL* VAR_5 = (FILENULL*) VAR_2 ->stream;
    FUNC_0(VAR_1);

    VAR_5 ->Pointer += VAR_3;
    if (VAR_5 ->Pointer > VAR_2->UsedSpace)
        VAR_2->UsedSpace = VAR_5 ->Pointer;

    return VAR_0;

    FUNC_0(VAR_4);
}
