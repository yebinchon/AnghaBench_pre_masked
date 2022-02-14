
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int error; int attr; } ;
struct TYPE_5__ {int embedding; int stream; } ;
typedef scalar_t__ HPDF_UINT32 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_FontDef ;
typedef int HPDF_BYTE ;
typedef int HPDF_BOOL ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ,scalar_t__) ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_FontDef VAR_4,
               HPDF_Stream VAR_5,
               HPDF_UINT VAR_6,
               HPDF_BOOL VAR_7)
{
    HPDF_TTFontDefAttr VAR_8 = (HPDF_TTFontDefAttr)VAR_4->attr;
    HPDF_STATUS VAR_9;
    HPDF_BYTE VAR_10[4];
    HPDF_UINT32 VAR_11;
    HPDF_UINT32 VAR_12;
    HPDF_UINT VAR_13;

    FUNC_2 ((" HPDF_TTFontDef_LoadFontData2\n"));

    VAR_8->stream = VAR_5;
    VAR_8->embedding = VAR_7;

    VAR_9 = FUNC_5 (VAR_5, 0, VAR_3);
    if (VAR_9 != VAR_2)
        return VAR_9;

    VAR_13 = 4;
    if ((VAR_9 = FUNC_4 (VAR_5, VAR_10, &VAR_13)) != VAR_2)
        return VAR_9;

    if (FUNC_1 (VAR_10, (HPDF_BYTE *)"ttcf", 4) != 0)
        return FUNC_3 (VAR_4->error, VAR_0, 0);

    if ((VAR_9 = FUNC_5 (VAR_5, 8, VAR_3)) != VAR_2)
        return VAR_9;

    if ((VAR_9 = FUNC_0 (VAR_5, &VAR_11)) != VAR_2)
        return VAR_9;

    FUNC_2((" HPDF_TTFontDef_LoadFontData2 num_fonts=%u\n",
                (HPDF_UINT)VAR_11));

    if (VAR_6 >= VAR_11)
        return FUNC_3 (VAR_4->error, VAR_1, 0);




    if ((VAR_9 = FUNC_5 (VAR_5, 12 + VAR_6 * 4, VAR_3)) !=
                VAR_2)
        return VAR_9;

    if ((VAR_9 = FUNC_0 (VAR_5, &VAR_12)) != VAR_2)
        return VAR_9;

    return FUNC_6 (VAR_4, VAR_5, VAR_7, VAR_12);
}
