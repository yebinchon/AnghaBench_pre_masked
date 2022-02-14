
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
typedef int UINT ;
struct TYPE_13__ {size_t uNumItem; size_t iHotDivider; int hwndSelf; TYPE_3__* items; } ;
struct TYPE_10__ {int left; int right; } ;
struct TYPE_12__ {TYPE_1__ rect; } ;
struct TYPE_11__ {size_t x; scalar_t__ y; } ;
typedef scalar_t__ SHORT ;
typedef int RECT ;
typedef TYPE_2__ POINT ;
typedef size_t LRESULT ;
typedef scalar_t__ LPARAM ;
typedef size_t INT ;
typedef TYPE_3__ HEADER_ITEM ;
typedef TYPE_4__ HEADER_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int*,size_t*) ;
 size_t FUNC_2 (TYPE_4__*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_5(HEADER_INFO *VAR_4, WPARAM VAR_5, LPARAM VAR_6)
{
    INT VAR_7;
    RECT VAR_8;

    if (VAR_5)
    {
        POINT VAR_9;
        UINT VAR_10;
        VAR_9.x = (INT)(SHORT)FUNC_4(VAR_6);
        VAR_9.y = 0;
        FUNC_1 (VAR_4, &VAR_9, &VAR_10, &VAR_7);

        if (VAR_10 & VAR_2)
            VAR_7 = 0;
        else if (VAR_10 & VAR_1 || VAR_10 & VAR_3)
            VAR_7 = VAR_4->uNumItem;
        else
        {
            HEADER_ITEM *VAR_11 = &VAR_4->items[VAR_7];
            if (VAR_9.x > (VAR_11->rect.left+VAR_11->rect.right)/2)
                VAR_7 = FUNC_2(VAR_4, VAR_7);
        }
    }
    else
        VAR_7 = (INT)VAR_6;


    if (VAR_7<-1 || VAR_7>(int)VAR_4->uNumItem)
        return VAR_7;

    if (VAR_7 != VAR_4->iHotDivider)
    {
        if (VAR_4->iHotDivider != -1)
        {
            FUNC_0(VAR_4, &VAR_8);
            FUNC_3(VAR_4->hwndSelf, &VAR_8, VAR_0);
        }
        VAR_4->iHotDivider = VAR_7;
        if (VAR_7 != -1)
        {
            FUNC_0(VAR_4, &VAR_8);
            FUNC_3(VAR_4->hwndSelf, &VAR_8, VAR_0);
        }
    }
    return VAR_7;
}
