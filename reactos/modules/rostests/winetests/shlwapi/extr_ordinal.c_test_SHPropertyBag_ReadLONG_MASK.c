
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int refCount; TYPE_2__ IPropertyBag_iface; } ;
typedef TYPE_1__ PropBag ;
typedef int LONG ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char const*,int*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(void)
{
    PropBag *VAR_5;
    HRESULT VAR_6;
    LONG VAR_7;
    static const WCHAR VAR_8[] = {'n','a','m','e','1',0};

    VAR_5 = FUNC_1(FUNC_0(),0,sizeof(PropBag));
    VAR_5->refCount = 1;
    VAR_5->IPropertyBag_iface.lpVtbl = &VAR_4;

    VAR_7 = 0xfeedface;
    VAR_6 = FUNC_5(((void*)0), VAR_8, &VAR_7);
    FUNC_4(VAR_6 == VAR_1 || FUNC_3(VAR_6 == VAR_3), "incorrect return %x\n",VAR_6);
    FUNC_4(VAR_7 == 0xfeedface, "value should not have changed\n");
    VAR_6 = FUNC_5(&VAR_5->IPropertyBag_iface, ((void*)0), &VAR_7);
    FUNC_4(VAR_6 == VAR_1 || FUNC_3(VAR_6 == VAR_3) || FUNC_3(VAR_6 == VAR_2), "incorrect return %x\n",VAR_6);
    FUNC_4(VAR_7 == 0xfeedface, "value should not have changed\n");
    VAR_6 = FUNC_5(&VAR_5->IPropertyBag_iface, VAR_8, ((void*)0));
    FUNC_4(VAR_6 == VAR_1 || FUNC_3(VAR_6 == VAR_3) || FUNC_3(VAR_6 == VAR_2), "incorrect return %x\n",VAR_6);
    VAR_6 = FUNC_5(&VAR_5->IPropertyBag_iface, VAR_8, &VAR_7);
    FUNC_4(VAR_6 == VAR_0 || FUNC_3(VAR_6 == VAR_3) || FUNC_3(VAR_6 == VAR_2), "incorrect return %x\n",VAR_6);
    FUNC_4(VAR_7 == 0xfeedface || FUNC_3(VAR_7 == 0xfeedfa00), "value should not have changed %x\n",VAR_7);
    FUNC_2((IUnknown*)VAR_5);
}
