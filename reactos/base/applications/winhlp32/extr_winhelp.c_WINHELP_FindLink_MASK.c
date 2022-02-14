
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hMainWnd; TYPE_1__* page; } ;
typedef TYPE_2__ WINHELP_WINDOW ;
struct TYPE_12__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct TYPE_11__ {scalar_t__ cpMin; scalar_t__ cpMax; scalar_t__ bHotSpot; struct TYPE_11__* next; } ;
struct TYPE_10__ {short x; short y; } ;
struct TYPE_8__ {TYPE_4__* first_link; } ;
typedef TYPE_3__ POINTL ;
typedef scalar_t__ LPARAM ;
typedef TYPE_4__ HLPFILE_LINK ;
typedef TYPE_5__ HLPFILE_HOTSPOTLINK ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static HLPFILE_LINK* FUNC_4(WINHELP_WINDOW* VAR_3, LPARAM VAR_4)
{
    HLPFILE_LINK* VAR_5;
    POINTL VAR_6, VAR_7, VAR_8;
    DWORD VAR_9;

    if (!VAR_3->page) return ((void*)0);

    VAR_6.x = (short)FUNC_2(VAR_4);
    VAR_6.y = (short)FUNC_1(VAR_4);
    VAR_9 = FUNC_3(FUNC_0(VAR_3->hMainWnd, VAR_0), VAR_1,
                      0, (LPARAM)&VAR_6);

    for (VAR_5 = VAR_3->page->first_link; VAR_5; VAR_5 = VAR_5->next)
    {
        if (VAR_5->cpMin <= VAR_9 && VAR_9 <= VAR_5->cpMax)
        {

            FUNC_3(FUNC_0(VAR_3->hMainWnd, VAR_0), VAR_2,
                         (LPARAM)&VAR_7, VAR_9);
            FUNC_3(FUNC_0(VAR_3->hMainWnd, VAR_0), VAR_2,
                         (LPARAM)&VAR_8, VAR_9 + 1);
            if (VAR_5->bHotSpot)
            {
                HLPFILE_HOTSPOTLINK* VAR_10 = (HLPFILE_HOTSPOTLINK*)VAR_5;
                if ((VAR_6.x < VAR_7.x + VAR_10->x) ||
                    (VAR_6.x >= VAR_7.x + VAR_10->x + VAR_10->width) ||
                    (VAR_6.y < VAR_7.y + VAR_10->y) ||
                    (VAR_6.y >= VAR_7.y + VAR_10->y + VAR_10->height))
                    continue;
                break;
            }
            if (VAR_8.y != VAR_7.y || VAR_6.x >= VAR_8.x)
                VAR_5 = ((void*)0);
            break;
        }
    }
    return VAR_5;
}
