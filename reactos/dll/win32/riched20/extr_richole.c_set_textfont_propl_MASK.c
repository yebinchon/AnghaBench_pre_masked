
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
typedef int LONG ;
typedef int ITextFontImpl ;
typedef int HRESULT ;


 int FUNC_0 (int *,int,TYPE_1__*) ;

__attribute__((used)) static inline HRESULT FUNC_1(ITextFontImpl *VAR_0, enum textfont_prop_id VAR_1, LONG VAR_2)
{
    textfont_prop_val VAR_3;
    VAR_3.l = VAR_2;
    return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
