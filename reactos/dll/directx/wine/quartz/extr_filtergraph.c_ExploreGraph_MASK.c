
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* fnFoundFilter ) (int *,int ) ;
typedef scalar_t__ ULONG ;
struct TYPE_6__ {int nRenderers; } ;
struct TYPE_5__ {int * pFilter; } ;
typedef TYPE_1__ PIN_INFO ;
typedef int IPin ;
typedef TYPE_2__ IFilterGraphImpl ;
typedef int HRESULT ;
typedef int DWORD_PTR ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *,int ***,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_8(IFilterGraphImpl* VAR_0, IPin* VAR_1, fnFoundFilter VAR_2, DWORD_PTR VAR_3)
{
    HRESULT VAR_4;
    IPin* VAR_5;
    IPin** VAR_6;
    ULONG VAR_7;
    ULONG VAR_8;
    PIN_INFO VAR_9;

    FUNC_7("%p %p\n", VAR_0, VAR_1);
    VAR_9.pFilter = ((void*)0);

    VAR_4 = FUNC_3(VAR_1, &VAR_5);

    if (FUNC_6(VAR_4))
    {
        VAR_4 = FUNC_4(VAR_5, &VAR_9);
        if (FUNC_6(VAR_4))
            VAR_4 = FUNC_1(VAR_9.pFilter, VAR_5, &VAR_6, &VAR_7);
        FUNC_5(VAR_5);
    }

    if (FUNC_6(VAR_4))
    {
        if (VAR_7 == 0)
        {
            FUNC_7("Reached a renderer\n");

            VAR_0->nRenderers++;
        }
        else
        {
            for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            {



                FUNC_8(VAR_0, VAR_6[VAR_8], VAR_2, VAR_3);
                FUNC_5(VAR_6[VAR_8]);
            }

            FUNC_0(VAR_6);
        }
        FUNC_7("Doing stuff with filter %p\n", VAR_9.pFilter);

        VAR_2(VAR_9.pFilter, VAR_3);
    }

    if (VAR_9.pFilter) FUNC_2(VAR_9.pFilter);
    return VAR_4;
}
