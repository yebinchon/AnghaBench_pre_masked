
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ ITextPara_iface; int * range; } ;
typedef int ITextRange ;
typedef TYPE_1__ ITextParaImpl ;
typedef TYPE_2__ ITextPara ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_2(ITextRange *VAR_3, ITextPara **VAR_4)
{
    ITextParaImpl *VAR_5;

    *VAR_4 = ((void*)0);
    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->ITextPara_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;
    VAR_5->range = VAR_3;
    FUNC_0(VAR_3);

    *VAR_4 = &VAR_5->ITextPara_iface;
    return VAR_1;
}
