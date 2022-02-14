
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {TYPE_1__* pFuncsTable; } ;
struct TYPE_12__ {int cStreams; int filter; int ** ppPins; } ;
struct TYPE_11__ {TYPE_2__* (* pfnBreakConnect ) (TYPE_4__*) ;} ;
typedef TYPE_2__ ParserImpl ;
typedef int IPin ;
typedef TYPE_2__* HRESULT ;
typedef TYPE_4__ BaseOutputPin ;


 int FUNC_0 (int *) ;
 int ** FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (char*,TYPE_2__*) ;
 int FUNC_5 (int **,int **,int) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static HRESULT FUNC_7(ParserImpl * VAR_1)
{

    HRESULT VAR_2;
    ULONG VAR_3;
    IPin ** VAR_4 = VAR_1->ppPins;

    FUNC_4("(%p)\n", VAR_1);


    VAR_1->ppPins = FUNC_1(sizeof(IPin *) * 1);
    FUNC_5(VAR_1->ppPins, VAR_4, sizeof(IPin *) * 1);

    for (VAR_3 = 0; VAR_3 < VAR_1->cStreams; VAR_3++)
    {
        VAR_2 = ((BaseOutputPin *)VAR_4[VAR_3 + 1])->pFuncsTable->pfnBreakConnect((BaseOutputPin *)VAR_4[VAR_3 + 1]);
        FUNC_4("Disconnect: %08x\n", VAR_2);
        FUNC_3(VAR_4[VAR_3 + 1]);
    }

    FUNC_0(&VAR_1->filter);
    VAR_1->cStreams = 0;
    FUNC_2(VAR_4);

    return VAR_0;
}
