
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
struct TYPE_5__ {int cDims; TYPE_1__* rgsabound; } ;
struct TYPE_4__ {int cElements; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__ SAFEARRAY ;



__attribute__((used)) static ULONG FUNC_0(const SAFEARRAY *VAR_0)
{
    const SAFEARRAYBOUND* VAR_1 = VAR_0->rgsabound;
    USHORT VAR_2 = VAR_0->cDims;
    ULONG VAR_3 = 1;

    while (VAR_2--)
    {
         if (!VAR_1->cElements)
            return 0;
        VAR_3 *= VAR_1->cElements;
        VAR_1++;
    }
    return VAR_3;
}
