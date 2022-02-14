
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_2__ ITextHost_iface; } ;
typedef int IUnknown ;
typedef int ITextServices ;
typedef TYPE_1__ ITextHostTestImpl ;
typedef TYPE_2__ ITextHost ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int **) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static BOOL FUNC_7(ITextServices **VAR_5, ITextHost **VAR_6)
{
    ITextHostTestImpl *VAR_7;
    IUnknown *VAR_8;
    HRESULT VAR_9;

    VAR_7 = FUNC_0(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
        FUNC_6("Insufficient memory to create ITextHost interface\n");
        return VAR_0;
    }
    VAR_7->ITextHost_iface.lpVtbl = &VAR_3;
    VAR_7->refCount = 1;




    VAR_9 = FUNC_5(((void*)0), &VAR_7->ITextHost_iface, &VAR_8);
    FUNC_4(VAR_9 == VAR_1, "Did not return S_OK when created (result =  %x)\n", VAR_9);
    if (VAR_9 != VAR_1) {
        FUNC_1(VAR_7);
        FUNC_6("CreateTextServices failed.\n");
        return VAR_0;
    }

    VAR_9 = FUNC_2(VAR_8, VAR_4, (void**)VAR_5);
    FUNC_4((VAR_9 == VAR_1) && (*VAR_5 != ((void*)0)), "Querying interface failed (result = %x, txtserv = %p)\n", VAR_9, *VAR_5);
    FUNC_3(VAR_8);
    if (!((VAR_9 == VAR_1) && (*VAR_5 != ((void*)0)))) {
        FUNC_1(VAR_7);
        FUNC_6("Could not retrieve ITextServices interface\n");
        return VAR_0;
    }

    *VAR_6 = &VAR_7->ITextHost_iface;
    return VAR_2;
}
