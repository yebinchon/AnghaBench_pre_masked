
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lfw ;
struct TYPE_7__ {int lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfStrikeOut; int lfUnderline; int lfItalic; int lfWeight; int lfOrientation; int lfEscapement; int lfWidth; int lfHeight; } ;
struct TYPE_6__ {int lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfStrikeOut; int lfUnderline; int lfItalic; int lfWeight; int lfOrientation; int lfEscapement; int lfWidth; int lfHeight; } ;
struct TYPE_5__ {int lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfStrikeOut; int lfUnderline; int lfItalic; int lfWeight; int lfOrientation; int lfEscapement; int lfWidth; int lfHeight; } ;
typedef int LPBYTE ;
typedef TYPE_1__ LOGFONTW ;
typedef TYPE_2__ LOGFONTA ;
typedef TYPE_3__ LOGFONT16 ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_6( const char *VAR_6, const char *VAR_7, LOGFONTA *VAR_8)
{
    HKEY VAR_9;
    LOGFONTW VAR_10;
    DWORD VAR_11, VAR_12, VAR_13;

    FUNC_1( VAR_3, VAR_6, &VAR_9 );
    VAR_12 = sizeof( VAR_10);
    VAR_11=FUNC_2( VAR_9, VAR_7, ((void*)0), &VAR_13, (LPBYTE)&VAR_10, &VAR_12 );
    FUNC_0( VAR_9 );
    FUNC_5( VAR_11 == VAR_1, "Key \"%s\" value \"%s\" not found\n", VAR_6, VAR_7);
    if( VAR_11 != VAR_1)
        return VAR_2;
    if( VAR_12 <= sizeof( LOGFONT16)) {
        LOGFONT16 *VAR_14 = (LOGFONT16*) &VAR_10;
        VAR_8->lfHeight = VAR_14->lfHeight;
        VAR_8->lfWidth = VAR_14->lfWidth;
        VAR_8->lfEscapement = VAR_14->lfEscapement;
        VAR_8->lfOrientation = VAR_14->lfOrientation;
        VAR_8->lfWeight = VAR_14->lfWeight;
        VAR_8->lfItalic = VAR_14->lfItalic;
        VAR_8->lfUnderline = VAR_14->lfUnderline;
        VAR_8->lfStrikeOut = VAR_14->lfStrikeOut;
        VAR_8->lfCharSet = VAR_14->lfCharSet;
        VAR_8->lfOutPrecision = VAR_14->lfOutPrecision;
        VAR_8->lfClipPrecision = VAR_14->lfClipPrecision;
        VAR_8->lfQuality = VAR_14->lfQuality;
        VAR_8->lfPitchAndFamily = VAR_14->lfPitchAndFamily;
        FUNC_4( VAR_8->lfFaceName, VAR_14->lfFaceName, VAR_4 );
    } else if( VAR_12 <= sizeof( LOGFONTA)) {
        VAR_8 = (LOGFONTA*) &VAR_10;
    } else {
        VAR_8->lfHeight = VAR_10.lfHeight;
        VAR_8->lfWidth = VAR_10.lfWidth;
        VAR_8->lfEscapement = VAR_10.lfEscapement;
        VAR_8->lfOrientation = VAR_10.lfOrientation;
        VAR_8->lfWeight = VAR_10.lfWeight;
        VAR_8->lfItalic = VAR_10.lfItalic;
        VAR_8->lfUnderline = VAR_10.lfUnderline;
        VAR_8->lfStrikeOut = VAR_10.lfStrikeOut;
        VAR_8->lfCharSet = VAR_10.lfCharSet;
        VAR_8->lfOutPrecision = VAR_10.lfOutPrecision;
        VAR_8->lfClipPrecision = VAR_10.lfClipPrecision;
        VAR_8->lfQuality = VAR_10.lfQuality;
        VAR_8->lfPitchAndFamily = VAR_10.lfPitchAndFamily;
        FUNC_3( VAR_0, 0, VAR_10.lfFaceName, -1, VAR_8->lfFaceName,
            VAR_4, ((void*)0), ((void*)0));

    }
    return VAR_5;
}
