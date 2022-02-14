
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int wNumbering; int wNumberingStyle; int wNumberingStart; int wNumberingTab; } ;
struct TYPE_9__ {TYPE_2__* text; TYPE_1__* style; } ;
struct TYPE_11__ {TYPE_4__ fmt; TYPE_3__ para_num; } ;
struct TYPE_8__ {int nLen; int szData; } ;
struct TYPE_7__ {int fmt; } ;
typedef TYPE_5__ ME_Paragraph ;
typedef int ME_OutStream ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,...) ;
 int FUNC_1 (int *,int ,int ) ;




 int VAR_1 ;




 int VAR_2 ;
 int FUNC_2 (int *,int *,unsigned int*) ;

__attribute__((used)) static BOOL FUNC_3( ME_OutStream *VAR_3, ME_Paragraph *VAR_4, BOOL VAR_5 )
{
    static const char VAR_6[] = "{\\*\\pn\\pnlvlbody\\pnf%u\\pnindent%d\\pnstart%d%s%s}";
    static const char VAR_7[] = "{\\*\\pn\\pnlvlblt\\pnf%u\\pnindent%d{\\pntxtb\\'b7}}";
    static const char VAR_8[] = "\\pndec";
    static const char VAR_9[] = "\\pnlcltr";
    static const char VAR_10[] = "\\pnucltr";
    static const char VAR_11[] = "\\pnlcrm";
    static const char VAR_12[] = "\\pnucrm";
    static const char VAR_13[] = "{\\pntxta.}";
    static const char VAR_14[] = "{\\pntxta)}";
    static const char VAR_15[] = "{\\pntxtb(}{\\pntxta)}";
    const char *VAR_16, *VAR_17 = "";
    unsigned int VAR_18;

    FUNC_2( VAR_3, &VAR_4->para_num.style->fmt, &VAR_18 );

    if (!FUNC_0( VAR_3, "{\\pntext\\f%u ", VAR_18 )) return VAR_0;
    if (!FUNC_1( VAR_3, VAR_4->para_num.text->szData, VAR_4->para_num.text->nLen ))
        return VAR_0;
    if (!FUNC_0( VAR_3, "\\tab}" )) return VAR_0;

    if (!VAR_5) return VAR_2;

    if (VAR_4->fmt.wNumbering == VAR_1)
    {
        if (!FUNC_0( VAR_3, VAR_7, VAR_18, VAR_4->fmt.wNumberingTab ))
            return VAR_0;
    }
    else
    {
        switch (VAR_4->fmt.wNumbering)
        {
        case 132:
        default:
            VAR_16 = VAR_8;
            break;
        case 131:
            VAR_16 = VAR_9;
            break;
        case 129:
            VAR_16 = VAR_10;
            break;
        case 130:
            VAR_16 = VAR_11;
            break;
        case 128:
            VAR_16 = VAR_12;
            break;
        }
        switch (VAR_4->fmt.wNumberingStyle & 0xf00)
        {
        case 133:
            VAR_17 = VAR_13;
            break;
        case 135:
            VAR_17 = VAR_14;
            break;
        case 134:
            VAR_17 = VAR_15;
            break;
        }

        if (!FUNC_0( VAR_3, VAR_6, VAR_18, VAR_4->fmt.wNumberingTab,
                                VAR_4->fmt.wNumberingStart, VAR_16, VAR_17 ))
            return VAR_0;
    }
    return VAR_2;
}
