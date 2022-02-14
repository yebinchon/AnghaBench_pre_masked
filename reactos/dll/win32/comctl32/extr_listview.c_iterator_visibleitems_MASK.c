
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_24__ {int nSpecial; int nItem; scalar_t__ ranges; TYPE_5__ range; } ;
struct TYPE_23__ {scalar_t__ uView; scalar_t__ nItemHeight; scalar_t__ nItemWidth; } ;
struct TYPE_22__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_21__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef TYPE_4__ ITERATOR ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__ const*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__ const*,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__ const*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (scalar_t__,TYPE_5__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_13(ITERATOR *VAR_5, const LISTVIEW_INFO *VAR_6, HDC VAR_7)
{
    POINT VAR_8, VAR_9;
    RECT VAR_10, VAR_11;
    INT VAR_12;

    VAR_12 = FUNC_0(VAR_7, &VAR_11);
    if (VAR_12 == VAR_2)
    {
        FUNC_6(VAR_5);
        return VAR_4;
    }
    if (!FUNC_7(VAR_5, VAR_6, &VAR_11)) return VAR_0;
    if (VAR_12 == VAR_3) return VAR_4;


    if (VAR_5->nSpecial != -1)
    {
 FUNC_1(VAR_6, VAR_5->nSpecial, &VAR_10);
 if (!FUNC_4(VAR_7, &VAR_10)) VAR_5->nSpecial = -1;
    }


    FUNC_3(VAR_6, &VAR_8);
    FUNC_5("building visible range:\n");
    if (!VAR_5->ranges && VAR_5->range.lower < VAR_5->range.upper)
    {
 if (!(VAR_5->ranges = FUNC_10(50))) return VAR_4;
 if (!FUNC_9(VAR_5->ranges, VAR_5->range))
        {
     FUNC_12(VAR_5->ranges);
     VAR_5->ranges = 0;
     return VAR_4;
        }
    }


    while(FUNC_8(VAR_5))
    {
 FUNC_2(VAR_6, VAR_5->nItem, &VAR_9);
 VAR_10.left = (VAR_6->uView == VAR_1) ? VAR_8.x : VAR_9.x + VAR_8.x;
 VAR_10.top = VAR_9.y + VAR_8.y;
 VAR_10.right = VAR_10.left + VAR_6->nItemWidth;
 VAR_10.bottom = VAR_10.top + VAR_6->nItemHeight;
 if (!FUNC_4(VAR_7, &VAR_10))
     FUNC_11(VAR_5->ranges, VAR_5->nItem);
    }

    FUNC_5("done\n");

    return VAR_4;
}
