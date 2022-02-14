
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_4__ {scalar_t__ stream; } ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_5__ {int Pointer; } ;
typedef TYPE_2__ FILENULL ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
cmsUInt32Number FUNC_1(cmsContext VAR_0, cmsIOHANDLER* VAR_1)
{
    FILENULL* VAR_2 = (FILENULL*) VAR_1 ->stream;
    FUNC_0(VAR_0);
    return VAR_2 -> Pointer;
}
