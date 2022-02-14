
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int refs; TYPE_2__ IWidget_iface; int * pDispatchUnknown; } ;
typedef TYPE_1__ Widget ;
typedef TYPE_2__ IWidget ;
typedef int IUnknown ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (int *,TYPE_1__*,int *,int **) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,int (*) (int *,TYPE_1__*,int *,int **)) ;

__attribute__((used)) static IWidget *FUNC_8(void)
{
    Widget *VAR_3;
    ITypeInfo *VAR_4;
    HRESULT VAR_5 = VAR_0;

    VAR_4 = FUNC_6(&VAR_1);
    if(!VAR_4)
        return ((void*)0);

    VAR_3 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_3));
    VAR_3->IWidget_iface.lpVtbl = &VAR_2;
    VAR_3->refs = 1;
    VAR_3->pDispatchUnknown = ((void*)0);

    VAR_5 = FUNC_0((IUnknown *)&VAR_3->IWidget_iface, VAR_3, VAR_4,
                           &VAR_3->pDispatchUnknown);
    FUNC_7(VAR_5, FUNC_0);
    FUNC_4(VAR_4);

    if (FUNC_5(VAR_5))
        return &VAR_3->IWidget_iface;
    else
    {
        FUNC_3(FUNC_1(), 0, VAR_3);
        return ((void*)0);
    }
}
