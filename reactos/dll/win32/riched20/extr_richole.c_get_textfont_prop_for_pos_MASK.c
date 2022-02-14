
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* l; void* f; int str; } ;
typedef TYPE_1__ textfont_prop_val ;
typedef int fmt ;
typedef enum textfont_prop_id { ____Placeholder_textfont_prop_id } textfont_prop_id ;
struct TYPE_10__ {int cbSize; int dwMask; int dwEffects; void* crBackColor; void* crTextColor; void* wWeight; void* sSpacing; int yHeight; int yOffset; int szFaceName; void* lcid; int wKerning; void* bAnimation; } ;
struct TYPE_9__ {int editor; } ;
typedef int ME_Cursor ;
typedef TYPE_2__ IRichEditOleImpl ;
typedef int HRESULT ;
typedef TYPE_3__ CHARFORMAT2W ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int ,int *,int,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int** VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static HRESULT FUNC_8(const IRichEditOleImpl *VAR_11, int VAR_12, enum textfont_prop_id VAR_13,
    textfont_prop_val *VAR_14)
{
    ME_Cursor VAR_15, VAR_16;
    CHARFORMAT2W VAR_17;

    FUNC_6(&VAR_17, 0, sizeof(VAR_17));
    VAR_17.cbSize = sizeof(VAR_17);
    VAR_17.dwMask = VAR_8[VAR_13][0];

    FUNC_2(VAR_11->editor, VAR_12, &VAR_15);
    VAR_16 = VAR_15;
    FUNC_4(VAR_11->editor, &VAR_16, 1, VAR_6);
    FUNC_3(VAR_11->editor, &VAR_15, &VAR_16, &VAR_17);

    switch (VAR_13)
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
        VAR_14->l = VAR_17.dwEffects & VAR_8[VAR_13][1] ? VAR_10 : VAR_9;
        break;
    case 150:
        VAR_14->l = VAR_17.bAnimation;
        break;
    case 149:
        VAR_14->l = VAR_17.dwEffects & VAR_0 ? FUNC_1(VAR_2) : VAR_17.crBackColor;
        break;
    case 145:
        VAR_14->l = VAR_17.dwEffects & VAR_1 ? FUNC_1(VAR_3) : VAR_17.crTextColor;
        break;
    case 142:
        VAR_14->f = FUNC_7(VAR_17.wKerning);
        break;
    case 141:
        VAR_14->l = VAR_17.lcid;
        break;
    case 140:

        VAR_14->str = FUNC_5(VAR_17.szFaceName);
        if (!VAR_14->str)
            return VAR_5;
        break;
    case 138:
        VAR_14->f = FUNC_7(VAR_17.yOffset);
        break;
    case 135:
        VAR_14->f = FUNC_7(VAR_17.yHeight);
        break;
    case 133:
        VAR_14->f = VAR_17.sSpacing;
        break;
    case 128:
        VAR_14->l = VAR_17.wWeight;
        break;
    default:
        FUNC_0("unhandled font property %d\n", VAR_13);
        return VAR_4;
    }

    return VAR_7;
}
