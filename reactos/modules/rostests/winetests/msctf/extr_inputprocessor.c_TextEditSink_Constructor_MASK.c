
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_2__ ITfTextEditSink_iface; } ;
typedef TYPE_1__ TextEditSink ;
typedef TYPE_2__ ITfTextEditSink ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(ITfTextEditSink **VAR_4)
{
    TextEditSink *VAR_5;

    *VAR_4 = ((void*)0);
    VAR_5 = FUNC_1(FUNC_0(),VAR_1,sizeof(TextEditSink));
    if (VAR_5 == ((void*)0))
        return VAR_0;

    VAR_5->ITfTextEditSink_iface.lpVtbl = &VAR_3;
    VAR_5->refCount = 1;

    *VAR_4 = &VAR_5->ITfTextEditSink_iface;
    return VAR_2;
}
