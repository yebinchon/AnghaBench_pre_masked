
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_4__ {scalar_t__ stream; } ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef void* cmsContext ;
struct TYPE_5__ {int Pointer; } ;
typedef TYPE_2__ FILENULL ;


 int FUNC_0 (void*) ;

__attribute__((used)) static
cmsUInt32Number FUNC_1(cmsContext VAR_0, cmsIOHANDLER* VAR_1, void *VAR_2, cmsUInt32Number VAR_3, cmsUInt32Number VAR_4)
{
    FILENULL* VAR_5 = (FILENULL*) VAR_1 ->stream;
    cmsUInt32Number VAR_6 = VAR_3 * VAR_4;
    FUNC_0(VAR_0);

    VAR_5 -> Pointer += VAR_6;
    return VAR_4;

    FUNC_0(VAR_2);
}
