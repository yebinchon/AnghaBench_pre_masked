
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG ;
struct TYPE_5__ {size_t cDims; TYPE_1__* rgsabound; } ;
struct TYPE_4__ {int cElements; } ;
typedef TYPE_2__ SAFEARRAY ;



__attribute__((used)) static ULONG FUNC_0(SAFEARRAY *VAR_0)
{
    ULONG VAR_1 = 1;
    USHORT VAR_2;

    if(!VAR_0)
        return 0;

    for(VAR_2=0; VAR_2<VAR_0->cDims && VAR_1; VAR_2++)
        VAR_1 *= VAR_0->rgsabound[VAR_2].cElements;
    return VAR_1;
}
