
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int error; int attr; } ;
struct TYPE_8__ {int offset; } ;
struct TYPE_7__ {scalar_t__ fs_type; int* sfamilyclass; int* panose; scalar_t__ code_page_range2; scalar_t__ code_page_range1; int stream; scalar_t__ embedding; } ;
typedef scalar_t__ HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef TYPE_2__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_3__* HPDF_FontDef ;


 TYPE_2__* FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int*,int*) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_FontDef VAR_8)
{
    HPDF_TTFontDefAttr VAR_9 = (HPDF_TTFontDefAttr)VAR_8->attr;
    HPDF_TTFTable *VAR_10 = FUNC_0 (VAR_8, "OS/2");
    HPDF_STATUS VAR_11;
    HPDF_UINT16 VAR_12;
    HPDF_UINT VAR_13;

    FUNC_3 ((" ParseOS2\n"));

    if (!VAR_10)
        return FUNC_4 (VAR_8->error, VAR_7, 0);


    VAR_11 = FUNC_6 (VAR_9->stream, VAR_10->offset, VAR_5);
    if (VAR_11 != VAR_3)
        return VAR_11;

    if ((VAR_11 = FUNC_1 (VAR_9->stream, &VAR_12)) != VAR_3)
        return VAR_11;


    VAR_11 = FUNC_6 (VAR_9->stream, VAR_10->offset + 8, VAR_5);
    if (VAR_11 != VAR_3)
        return VAR_11;

    if ((VAR_11 = FUNC_1 (VAR_9->stream, &VAR_9->fs_type)) != VAR_3)
        return VAR_11;

    if (VAR_9->fs_type & (0x0002 | 0x0100 | 0x0200) && VAR_9->embedding)
        return FUNC_4 (VAR_8->error, VAR_6,
                0);


    if ((VAR_11 = FUNC_6 (VAR_9->stream, VAR_10->offset + 30, VAR_5))
            != VAR_3)
        return VAR_11;

    VAR_13 = 2;
    if ((VAR_11 = FUNC_5 (VAR_9->stream, VAR_9->sfamilyclass, &VAR_13)) != VAR_3)
        return VAR_11;

    VAR_13 = 10;
    if ((VAR_11 = FUNC_5 (VAR_9->stream, VAR_9->panose, &VAR_13)) != VAR_3)
        return VAR_11;

    FUNC_3((" ParseOS2 sFamilyClass=%d-%d "
            "Panose=%02X-%02X-%02X-%02X-%02X-%02X-%02X-%02X-%02X-%02X\n",
        VAR_9->sfamilyclass[0], VAR_9->sfamilyclass[1],
        VAR_9->panose[0], VAR_9->panose[1], VAR_9->panose[2], VAR_9->panose[3],
        VAR_9->panose[4], VAR_9->panose[5], VAR_9->panose[6], VAR_9->panose[7],
        VAR_9->panose[8], VAR_9->panose[9]));
    if ((VAR_9->sfamilyclass[0] > 0 && VAR_9->sfamilyclass[0] < 6)
        || (VAR_9->sfamilyclass[0] == 7))
        VAR_8->flags = VAR_8->flags | VAR_1;

    if (VAR_9->sfamilyclass[0] == 10)
        VAR_8->flags = VAR_8->flags | VAR_0;

    if (VAR_9->sfamilyclass[0] == 12)
        VAR_8->flags = VAR_8->flags | VAR_2;


    if(VAR_12 > 0) {
        if ((VAR_11 = FUNC_6 (VAR_9->stream, 36, VAR_4)) != VAR_3)
            return VAR_11;

        if ((VAR_11 = FUNC_2 (VAR_9->stream, &VAR_9->code_page_range1)) != VAR_3)
            return VAR_11;

        if ((VAR_11 = FUNC_2 (VAR_9->stream, &VAR_9->code_page_range2)) != VAR_3)
            return VAR_11;
    }

    FUNC_3(("  ParseOS2 CodePageRange1=%08X CodePageRange2=%08X\n",
                (HPDF_UINT)VAR_9->code_page_range1,
                (HPDF_UINT)VAR_9->code_page_range2));

    return VAR_3;
}
