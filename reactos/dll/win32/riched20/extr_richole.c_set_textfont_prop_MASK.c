
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int str; int l; int f; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef int fmt ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
struct TYPE_13__ {int cbSize; int szFaceName; int wWeight; int sSpacing; int yHeight; int yOffset; int lcid; int wKerning; int crTextColor; int crBackColor; void* dwEffects; int bAnimation; void* dwMask; } ;
struct TYPE_12__ {int editor; } ;
struct TYPE_11__ {int range; TYPE_1__* props; scalar_t__ set_cache_enabled; } ;
typedef int ME_Cursor ;
typedef int LONG ;
typedef TYPE_2__ ITextFontImpl ;
typedef TYPE_3__ IRichEditOleImpl ;
typedef int HRESULT ;
typedef TYPE_4__ CHARFORMAT2W ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int *,int *,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;
 void*** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_11(ITextFontImpl *VAR_6, enum textfont_prop_id VAR_7, const textfont_prop_val *VAR_8)
{
    const IRichEditOleImpl *VAR_9;
    ME_Cursor VAR_10, VAR_11;
    CHARFORMAT2W VAR_12;
    LONG VAR_13, VAR_14;


    if (!VAR_6->range || VAR_6->set_cache_enabled) {
        if (VAR_7 == 140) {
            FUNC_7(VAR_6->props[VAR_7].str);
            VAR_6->props[VAR_7].str = FUNC_6(VAR_8->str);
        }
        else
            VAR_6->props[VAR_7] = *VAR_8;
        return VAR_2;
    }

    if (!(VAR_9 = FUNC_8(VAR_6->range)))
        return VAR_0;

    FUNC_10(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.cbSize = sizeof(VAR_12);
    VAR_12.dwMask = VAR_3[VAR_7][0];

    switch (VAR_7)
    {
    case 151:
    case 148:
    case 147:
    case 144:
    case 146:
    case 143:
    case 139:
    case 137:
    case 136:
    case 134:
    case 132:
    case 131:
    case 130:
    case 129:
        VAR_12.dwEffects = VAR_8->l == VAR_5 ? VAR_3[VAR_7][1] : 0;
        break;
    case 150:
        VAR_12.bAnimation = VAR_8->l;
        break;
    case 149:
    case 145:
        if (VAR_8->l == VAR_4)
            VAR_12.dwEffects = VAR_3[VAR_7][1];
        else if (VAR_7 == 149)
            VAR_12.crBackColor = VAR_8->l;
        else
            VAR_12.crTextColor = VAR_8->l;
        break;
    case 142:
        VAR_12.wKerning = VAR_8->f;
        break;
    case 141:
        VAR_12.lcid = VAR_8->l;
        break;
    case 138:
        VAR_12.yOffset = VAR_8->f;
        break;
    case 135:
        VAR_12.yHeight = VAR_8->f;
        break;
    case 133:
        VAR_12.sSpacing = VAR_8->f;
        break;
    case 128:
        VAR_12.wWeight = VAR_8->l;
        break;
    case 140:
        FUNC_9(VAR_12.szFaceName, VAR_8->str, FUNC_0(VAR_12.szFaceName));
        break;
    default:
        FUNC_1("unhandled font property %d\n", VAR_7);
        return VAR_1;
    }

    FUNC_3(VAR_6->range, &VAR_13);
    FUNC_2(VAR_6->range, &VAR_14);

    FUNC_4(VAR_9->editor, VAR_13, &VAR_10);
    FUNC_4(VAR_9->editor, VAR_14, &VAR_11);
    FUNC_5(VAR_9->editor, &VAR_10, &VAR_11, &VAR_12);

    return VAR_2;
}
