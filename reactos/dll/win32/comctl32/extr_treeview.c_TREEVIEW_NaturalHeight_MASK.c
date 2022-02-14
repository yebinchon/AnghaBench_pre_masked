
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int tmHeight; int tmExternalLeading; } ;
struct TYPE_5__ {int normalImageHeight; int dwStyle; int hFont; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef TYPE_2__ TEXTMETRICW ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static UINT
FUNC_4(const TREEVIEW_INFO *VAR_3)
{
    TEXTMETRICW VAR_4;
    HDC VAR_5 = FUNC_0(0);
    HFONT VAR_6 = FUNC_3(VAR_5, VAR_3->hFont);
    UINT VAR_7;






    FUNC_1(VAR_5, &VAR_4);
    FUNC_3(VAR_5, VAR_6);
    FUNC_2(0, VAR_5);

    VAR_7 = VAR_1;
    if (VAR_7 < VAR_4.tmHeight + VAR_4.tmExternalLeading + VAR_0)
        VAR_7 = VAR_4.tmHeight + VAR_4.tmExternalLeading + VAR_0;
    if (VAR_7 < VAR_3->normalImageHeight)
        VAR_7 = VAR_3->normalImageHeight;


    if (!(VAR_3->dwStyle & VAR_2))
        VAR_7 &= ~1;

    return VAR_7;
}
