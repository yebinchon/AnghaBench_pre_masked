
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_8__ {scalar_t__ lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfStrikeOut; int lfUnderline; int lfItalic; int lfWeight; int lfOrientation; int lfEscapement; int lfWidth; int lfHeight; } ;
struct TYPE_7__ {int lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfStrikeOut; int lfUnderline; int lfItalic; int lfWeight; int lfOrientation; int lfEscapement; int lfWidth; int lfHeight; } ;
struct TYPE_6__ {int rdSize; int rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef TYPE_2__ LOGFONTW ;
typedef TYPE_3__ LOGFONT16 ;
typedef scalar_t__ INT ;
typedef int HFONT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static UINT16 FUNC_4(PHYSDEV VAR_3, HFONT VAR_4, LOGFONTW *VAR_5)
{
    char VAR_6[sizeof(METARECORD) - 2 + sizeof(LOGFONT16)];
    METARECORD *VAR_7 = (METARECORD *)&VAR_6;
    LOGFONT16 *VAR_8;
    INT VAR_9;

    VAR_7->rdSize = (sizeof(METARECORD) + sizeof(LOGFONT16) - 2) / 2;
    VAR_7->rdFunction = VAR_2;
    VAR_8 = (LOGFONT16 *)&VAR_7->rdParm;

    VAR_8->lfHeight = VAR_5->lfHeight;
    VAR_8->lfWidth = VAR_5->lfWidth;
    VAR_8->lfEscapement = VAR_5->lfEscapement;
    VAR_8->lfOrientation = VAR_5->lfOrientation;
    VAR_8->lfWeight = VAR_5->lfWeight;
    VAR_8->lfItalic = VAR_5->lfItalic;
    VAR_8->lfUnderline = VAR_5->lfUnderline;
    VAR_8->lfStrikeOut = VAR_5->lfStrikeOut;
    VAR_8->lfCharSet = VAR_5->lfCharSet;
    VAR_8->lfOutPrecision = VAR_5->lfOutPrecision;
    VAR_8->lfClipPrecision = VAR_5->lfClipPrecision;
    VAR_8->lfQuality = VAR_5->lfQuality;
    VAR_8->lfPitchAndFamily = VAR_5->lfPitchAndFamily;
    VAR_9 = FUNC_2( VAR_0, 0, VAR_5->lfFaceName, -1, VAR_8->lfFaceName, VAR_1 - 1, ((void*)0), ((void*)0) );

    FUNC_3(VAR_8->lfFaceName + VAR_9, 0, VAR_1 - VAR_9);

    if (!(FUNC_1( VAR_3, VAR_7, VAR_7->rdSize * 2)))
        return 0;
    return FUNC_0( VAR_3, VAR_4 );
}
