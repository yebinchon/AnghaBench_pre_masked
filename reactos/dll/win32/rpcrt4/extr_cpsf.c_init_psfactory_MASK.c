
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__ const** pProxyFileList; scalar_t__ RefCount; int * lpVtbl; } ;
struct TYPE_11__ {void** Vtbl; } ;
struct TYPE_8__ {int DispatchTableCount; } ;
struct TYPE_10__ {TYPE_1__ header; int Vtbl; } ;
struct TYPE_9__ {size_t TableSize; int TableVersion; scalar_t__* pDelegatedIIDs; TYPE_3__** pStubVtblList; TYPE_4__** pProxyVtblList; } ;
typedef TYPE_2__ ProxyFileInfo ;
typedef TYPE_3__* PCInterfaceStubVtblList ;
typedef TYPE_4__* PCInterfaceProxyVtblList ;
typedef int IUnknownVtbl ;
typedef int IRpcStubBufferVtbl ;
typedef size_t DWORD ;
typedef TYPE_5__ CStdPSFactoryBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1( CStdPSFactoryBuffer *VAR_3, const ProxyFileInfo **VAR_4 )
{
    DWORD VAR_5, VAR_6, VAR_7;

    VAR_3->lpVtbl = &VAR_0;
    VAR_3->RefCount = 0;
    VAR_3->pProxyFileList = VAR_4;
    for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
    {
        const PCInterfaceProxyVtblList *VAR_8 = VAR_4[VAR_5]->pProxyVtblList;
        const PCInterfaceStubVtblList *VAR_9 = VAR_4[VAR_5]->pStubVtblList;

        for (VAR_6 = 0; VAR_6 < VAR_4[VAR_5]->TableSize; VAR_6++)
        {


            void * const *VAR_10 = (void * const *)&VAR_2;
            void **VAR_11 = (void **)&VAR_9[VAR_6]->Vtbl;

            if (VAR_4[VAR_5]->pDelegatedIIDs && VAR_4[VAR_5]->pDelegatedIIDs[VAR_6])
            {
                void **VAR_12 = VAR_8[VAR_6]->Vtbl;
                if (VAR_4[VAR_5]->TableVersion > 1) VAR_12++;
                FUNC_0( (IUnknownVtbl *)VAR_12, VAR_9[VAR_6]->header.DispatchTableCount );
                VAR_10 = (void * const *)&VAR_1;
            }

            for (VAR_7 = 0; VAR_7 < sizeof(IRpcStubBufferVtbl)/sizeof(void *); VAR_7++)
                if (!VAR_11[VAR_7]) VAR_11[VAR_7] = VAR_10[VAR_7];
        }
    }
}
