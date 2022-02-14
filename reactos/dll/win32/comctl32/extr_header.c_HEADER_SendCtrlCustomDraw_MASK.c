
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lItemlParam; scalar_t__ uItemState; scalar_t__ dwItemSpec; int rc; int hdc; int dwDrawStage; } ;
typedef int RECT ;
typedef int NMHDR ;
typedef TYPE_1__ NMCUSTOMDRAW ;
typedef int LRESULT ;
typedef int HEADER_INFO ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int const*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_1(const HEADER_INFO *VAR_1, DWORD VAR_2, HDC VAR_3, const RECT *VAR_4)
{
    NMCUSTOMDRAW VAR_5;
    VAR_5.dwDrawStage = VAR_2;
    VAR_5.hdc = VAR_3;
    VAR_5.rc = *VAR_4;
    VAR_5.dwItemSpec = 0;
    VAR_5.uItemState = 0;
    VAR_5.lItemlParam = 0;

    return FUNC_0(VAR_1, VAR_0, (NMHDR *)&VAR_5);
}
