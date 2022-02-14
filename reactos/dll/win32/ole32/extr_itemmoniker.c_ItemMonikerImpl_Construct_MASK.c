
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {void* itemDelimiter; void* itemName; int * pMarshal; scalar_t__ ref; TYPE_2__ IROTData_iface; TYPE_1__ IMoniker_iface; } ;
typedef int OLECHAR ;
typedef int const* LPCOLESTR ;
typedef TYPE_3__ ItemMonikerImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_4 (char*,TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (void*,int const*) ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static HRESULT FUNC_8(ItemMonikerImpl* VAR_4, LPCOLESTR VAR_5,LPCOLESTR VAR_6)
{

    int VAR_7=FUNC_7(VAR_6), VAR_8;
    static const OLECHAR VAR_9[1];
    LPCOLESTR VAR_10;

    FUNC_4("(%p,%s,%s)\n",VAR_4,FUNC_5(VAR_5),FUNC_5(VAR_6));


    VAR_4->IMoniker_iface.lpVtbl = &VAR_2;
    VAR_4->IROTData_iface.lpVtbl = &VAR_3;
    VAR_4->ref = 0;
    VAR_4->pMarshal = ((void*)0);

    VAR_4->itemName=FUNC_2(FUNC_1(),0,sizeof(WCHAR)*(VAR_7+1));
    if (!VAR_4->itemName)
 return VAR_0;
    FUNC_6(VAR_4->itemName,VAR_6);

    if (!VAR_5)
 FUNC_0("lpszDelim is NULL. Using empty string which is possibly wrong.\n");

    VAR_10 = VAR_5 ? VAR_5 : VAR_9;

    VAR_8=FUNC_7(VAR_10);
    VAR_4->itemDelimiter=FUNC_2(FUNC_1(),0,sizeof(WCHAR)*(VAR_8+1));
    if (!VAR_4->itemDelimiter) {
 FUNC_3(FUNC_1(),0,VAR_4->itemName);
 return VAR_0;
    }
    FUNC_6(VAR_4->itemDelimiter,VAR_10);
    return VAR_1;
}
