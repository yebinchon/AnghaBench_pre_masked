
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int textfont_prop_val ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
struct TYPE_3__ {int range; int * props; scalar_t__ get_cache_enabled; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ ITextFontImpl ;
typedef int IRichEditOleImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_1 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int const*,scalar_t__,int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7(const ITextFontImpl *VAR_2, enum textfont_prop_id VAR_3, textfont_prop_val *VAR_4)
{
    const IRichEditOleImpl *VAR_5;
    textfont_prop_val VAR_6;
    LONG VAR_7, VAR_8, VAR_9;
    HRESULT VAR_10;


    if (!VAR_2->range || VAR_2->get_cache_enabled) {
        *VAR_4 = VAR_2->props[VAR_3];
        return VAR_1;
    }

    if (!(VAR_5 = FUNC_3(VAR_2->range)))
        return VAR_0;

    FUNC_5(VAR_3, VAR_4);

    FUNC_2(VAR_2->range, &VAR_7);
    FUNC_1(VAR_2->range, &VAR_8);


    VAR_10 = FUNC_4(VAR_5, VAR_7, VAR_3, &VAR_6);
    if (FUNC_0(VAR_10))
        return VAR_10;

    for (VAR_9 = VAR_7 + 1; VAR_9 < VAR_8; VAR_9++) {
        textfont_prop_val VAR_11;

        VAR_10 = FUNC_4(VAR_5, VAR_9, VAR_3, &VAR_11);
        if (FUNC_0(VAR_10))
            return VAR_10;

        if (!FUNC_6(VAR_3, &VAR_6, &VAR_11))
            return VAR_1;
    }

    *VAR_4 = VAR_6;
    return VAR_1;
}
