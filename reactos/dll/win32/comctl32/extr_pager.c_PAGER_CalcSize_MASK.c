
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_8__ {int iHeight; int iWidth; TYPE_1__ hdr; int dwFlag; } ;
struct TYPE_7__ {int dwStyle; int hwndSelf; int nHeight; int nWidth; int hwndNotify; } ;
typedef TYPE_2__ PAGER_INFO ;
typedef TYPE_3__ NMPGCALCSIZE ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_4( PAGER_INFO *VAR_6 )
{
    NMPGCALCSIZE VAR_7;
    FUNC_3 (&VAR_7, sizeof (NMPGCALCSIZE));
    VAR_7.hdr.hwndFrom = VAR_6->hwndSelf;
    VAR_7.hdr.idFrom = FUNC_0 (VAR_6->hwndSelf, VAR_0);
    VAR_7.hdr.code = VAR_3;
    VAR_7.dwFlag = (VAR_6->dwStyle & VAR_4) ? VAR_2 : VAR_1;
    VAR_7.iWidth = VAR_6->nWidth;
    VAR_7.iHeight = VAR_6->nHeight;
    FUNC_1 (VAR_6->hwndNotify, VAR_5, VAR_7.hdr.idFrom, (LPARAM)&VAR_7);

    if (VAR_6->dwStyle & VAR_4)
        VAR_6->nWidth = VAR_7.iWidth;
    else
        VAR_6->nHeight = VAR_7.iHeight;

    FUNC_2("[%p] PGN_CALCSIZE returns %dx%d\n", VAR_6->hwndSelf, VAR_7.iWidth, VAR_7.iHeight );
}
