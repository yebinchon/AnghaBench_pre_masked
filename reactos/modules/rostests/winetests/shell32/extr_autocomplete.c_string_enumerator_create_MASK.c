
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct string_enumerator {int ref; int data_len; TYPE_1__ IEnumString_iface; scalar_t__ cur; int ** data; TYPE_2__ IACList_iface; } ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 struct string_enumerator* FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_1(void **VAR_3, WCHAR **VAR_4, int VAR_5)
{
    struct string_enumerator *VAR_6;

    VAR_6 = FUNC_0(sizeof(*VAR_6));
    VAR_6->IEnumString_iface.lpVtbl = &VAR_2;
    VAR_6->IACList_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->data = VAR_4;
    VAR_6->data_len = VAR_5;
    VAR_6->cur = 0;

    *VAR_3 = &VAR_6->IEnumString_iface;

    return VAR_0;
}
