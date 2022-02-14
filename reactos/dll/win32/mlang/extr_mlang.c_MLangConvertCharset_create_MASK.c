
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct convert_charset {int ref; TYPE_1__ IMLangConvertCharset_iface; } ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct convert_charset* FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(IUnknown *VAR_4, void **VAR_5)
{
    struct convert_charset *VAR_6;

    if (VAR_4)
        return VAR_0;

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(struct convert_charset));
    if (!VAR_6) return VAR_1;

    VAR_6->IMLangConvertCharset_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;

    *VAR_5 = &VAR_6->IMLangConvertCharset_iface;

    FUNC_2();

    return VAR_3;
}
