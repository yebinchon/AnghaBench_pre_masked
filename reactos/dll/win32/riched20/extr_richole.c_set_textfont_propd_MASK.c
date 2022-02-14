
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;





__attribute__((used)) static HRESULT FUNC_2(ITextFontImpl *VAR_2, enum textfont_prop_id VAR_3, LONG VAR_4)
{
    textfont_prop_val VAR_5;

    switch (VAR_4)
    {
    case 128:
        return VAR_1;
    case 130: {
        LONG VAR_6;
        FUNC_0(VAR_2, VAR_3, &VAR_6);
        if (VAR_6 == 131)
            VAR_4 = 129;
        else if (VAR_6 == 129)
            VAR_4 = 131;
        else
            return VAR_0;

    }
    case 129:
    case 131:
        VAR_5.l = VAR_4;
        return FUNC_1(VAR_2, VAR_3, &VAR_5);
    default:
        return VAR_0;
    }
}
