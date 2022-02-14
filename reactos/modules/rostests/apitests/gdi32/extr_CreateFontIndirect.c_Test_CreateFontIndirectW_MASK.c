
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int elfedv2 ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_8__ {int* lfFaceName; } ;
struct TYPE_9__ {scalar_t__* elfFullName; TYPE_1__ elfLogFont; } ;
struct TYPE_11__ {TYPE_2__ elfEnumLogfontEx; } ;
struct TYPE_10__ {int lfHeight; TYPE_4__* lfFaceName; int lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; scalar_t__ lfStrikeOut; scalar_t__ lfUnderline; scalar_t__ lfItalic; int lfWeight; scalar_t__ lfOrientation; scalar_t__ lfEscapement; scalar_t__ lfWidth; } ;
typedef TYPE_3__ LOGFONTW ;
typedef scalar_t__ HFONT ;
typedef int ENUMLOGFONTEXW ;
typedef TYPE_4__ ENUMLOGFONTEXDVW ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,char,int) ;
 int FUNC_3 (int,char*) ;

void
FUNC_4(void)
{
    LOGFONTW VAR_7;
    HFONT VAR_8;
    ULONG VAR_9;
    ENUMLOGFONTEXDVW VAR_10;

    VAR_7.lfHeight = 12;
    VAR_7.lfWidth = 0;
    VAR_7.lfEscapement = 0;
    VAR_7.lfOrientation = 0;
    VAR_7.lfWeight = VAR_3;
    VAR_7.lfItalic = 0;
    VAR_7.lfUnderline = 0;
    VAR_7.lfStrikeOut = 0;
    VAR_7.lfCharSet = VAR_1;
    VAR_7.lfOutPrecision = VAR_5;
    VAR_7.lfClipPrecision = VAR_0;
    VAR_7.lfQuality = VAR_6;
    VAR_7.lfPitchAndFamily = VAR_2;
    FUNC_2(VAR_7.lfFaceName, 'A', VAR_4 * 2);
    VAR_8 = FUNC_0(&VAR_7);
    FUNC_3(VAR_8 != 0, "CreateFontIndirectW failed\n");

    FUNC_2(&VAR_10, 0, sizeof(VAR_10));
    VAR_9 = FUNC_1(VAR_8, sizeof(VAR_10), &VAR_10);
    FUNC_3(VAR_9 == sizeof(ENUMLOGFONTEXW) + 2*sizeof(DWORD), "\n");
    FUNC_3(VAR_10[VAR_4-1] == ((WCHAR)'A' << 8) + 'A', "\n");
    FUNC_3(VAR_10[0] == 0, "\n");

}
