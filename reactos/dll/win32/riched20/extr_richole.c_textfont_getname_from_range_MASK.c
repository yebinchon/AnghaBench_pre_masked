
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int str; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef int LONG ;
typedef int ITextRange ;
typedef int IRichEditOleImpl ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int const*,int ,int ,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(ITextRange *VAR_2, BSTR *VAR_3)
{
    const IRichEditOleImpl *VAR_4;
    textfont_prop_val VAR_5;
    HRESULT VAR_6;
    LONG VAR_7;

    if (!(VAR_4 = FUNC_1(VAR_2)))
        return VAR_0;

    FUNC_0(VAR_2, &VAR_7);
    VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_1, &VAR_5);
    *VAR_3 = VAR_5.str;
    return VAR_6;
}
