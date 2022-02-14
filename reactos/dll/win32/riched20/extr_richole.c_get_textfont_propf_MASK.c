
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
typedef int ITextFontImpl ;
typedef int HRESULT ;
typedef int FLOAT ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_1(const ITextFontImpl *VAR_1, enum textfont_prop_id VAR_2, FLOAT *VAR_3)
{
    textfont_prop_val VAR_4;
    HRESULT VAR_5;

    if (!VAR_3)
        return VAR_0;

    VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
    *VAR_3 = VAR_4.f;
    return VAR_5;
}
