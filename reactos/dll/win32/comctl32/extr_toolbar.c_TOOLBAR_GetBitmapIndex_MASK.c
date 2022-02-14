
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nmgd ;
struct TYPE_11__ {int dwMask; int iImage; int hdr; int lParam; int idCommand; } ;
struct TYPE_10__ {scalar_t__ iBitmap; int dwData; int idCommand; } ;
struct TYPE_9__ {int nNumBitmaps; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef TYPE_3__ NMTBDISPINFOW ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__ const*,int ) ;
 int FUNC_2 (char*,scalar_t__,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static INT
FUNC_4(const TOOLBAR_INFO *VAR_5, TBUTTON_INFO *VAR_6)
{
    INT VAR_7 = VAR_6->iBitmap;

    if (VAR_7 == VAR_0)
    {

        NMTBDISPINFOW VAR_8;

        FUNC_3(&VAR_8, 0, sizeof(VAR_8));
        VAR_8.idCommand = VAR_6->idCommand;
        VAR_8.lParam = VAR_6->dwData;
        VAR_8.dwMask = VAR_3;
        VAR_8.iImage = -1;

        FUNC_1(&VAR_8.hdr, VAR_5, VAR_4);
        if (VAR_8.dwMask & VAR_2)
            VAR_6->iBitmap = VAR_8.iImage;
        VAR_7 = VAR_8.iImage;
        FUNC_2("TBN_GETDISPINFO returned bitmap id %d, mask=%08x, nNumBitmaps=%d\n",
            VAR_7, VAR_8.dwMask, VAR_5->nNumBitmaps);
    }

    if (VAR_7 != VAR_1)
        VAR_7 = FUNC_0(VAR_5, VAR_7);

    return VAR_7;
}
