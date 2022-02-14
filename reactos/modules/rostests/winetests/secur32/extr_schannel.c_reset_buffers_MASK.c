
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cBuffers; TYPE_1__* pBuffers; } ;
struct TYPE_4__ {int * pvBuffer; scalar_t__ cbBuffer; int BufferType; } ;
typedef TYPE_2__ SecBufferDesc ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SecBufferDesc *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->cBuffers; ++VAR_2)
    {
        VAR_1->pBuffers[VAR_2].BufferType = VAR_0;
        if (VAR_2 > 0)
        {
            VAR_1->pBuffers[VAR_2].cbBuffer = 0;
            VAR_1->pBuffers[VAR_2].pvBuffer = ((void*)0);
        }
    }
}
