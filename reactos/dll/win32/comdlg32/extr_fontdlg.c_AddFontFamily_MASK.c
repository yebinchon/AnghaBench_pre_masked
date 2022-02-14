
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_16__ {int Flags; } ;
struct TYPE_14__ {char* lfFaceName; int lfPitchAndFamily; scalar_t__ lfCharSet; } ;
struct TYPE_15__ {TYPE_4__ elfLogFont; } ;
struct TYPE_13__ {int added; } ;
struct TYPE_11__ {int ntmFlags; } ;
struct TYPE_12__ {TYPE_1__ ntmTm; } ;
typedef TYPE_2__ NEWTEXTMETRICEXW ;
typedef TYPE_3__* LPCFn_ENUMSTRUCT ;
typedef int LPARAM ;
typedef TYPE_4__ LOGFONTW ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_5__ ENUMLOGFONTEXW ;
typedef TYPE_6__ CHOOSEFONTW ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_10 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static INT FUNC_5(const ENUMLOGFONTEXW *VAR_11, const NEWTEXTMETRICEXW *VAR_12,
                         UINT VAR_13, const CHOOSEFONTW *VAR_14, HWND VAR_15, LPCFn_ENUMSTRUCT VAR_16)
{
    int VAR_17;
    WORD VAR_18;
    const LOGFONTW *VAR_19 = &(VAR_11->elfLogFont);

    FUNC_3("font=%s (nFontType=%d)\n", FUNC_4(VAR_19->lfFaceName), VAR_13);

    if (VAR_14->Flags & VAR_6)
        if (!(VAR_19->lfPitchAndFamily & VAR_9))
            return 1;
    if (VAR_14->Flags & VAR_5)
        if (VAR_19->lfCharSet != VAR_0)
            return 1;
    if (VAR_14->Flags & VAR_8)
        if (!(VAR_13 & VAR_10))
            return 1;
    if (VAR_14->Flags & VAR_7)
        if (VAR_19->lfFaceName[0] == '@')
            return 1;

    if (VAR_16) VAR_16->added++;

    VAR_17=FUNC_2(VAR_15, VAR_3, 0, (LPARAM)VAR_19->lfFaceName);
    if (VAR_17 == VAR_2) {
        VAR_17 = FUNC_2(VAR_15, VAR_1, 0, (LPARAM)VAR_19->lfFaceName);
        if( VAR_17 != VAR_2) {

            VAR_18 = (VAR_19->lfPitchAndFamily) << 8 |
                (FUNC_0(VAR_12->ntmTm.ntmFlags) & 0xff);
            FUNC_2(VAR_15, VAR_4, VAR_17, FUNC_1(VAR_13,VAR_18));
        }
    }
    return 1;
}
