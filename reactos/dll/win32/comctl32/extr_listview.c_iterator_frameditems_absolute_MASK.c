
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_25__ {int nSpecial; int ranges; TYPE_3__ range; } ;
struct TYPE_21__ {int bottom; int top; } ;
struct TYPE_24__ {scalar_t__ nItemCount; scalar_t__ uView; int nFocusedItem; int nItemWidth; int nItemHeight; TYPE_1__ rcList; int hdpaPosY; int hdpaPosX; } ;
struct TYPE_22__ {int left; int top; int right; int bottom; } ;
typedef TYPE_2__ RECT ;
typedef int RANGES ;
typedef TYPE_3__ RANGE ;
typedef void* LONG_PTR ;
typedef TYPE_4__ LISTVIEW_INFO ;
typedef TYPE_5__ ITERATOR ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_2 (TYPE_4__ const*,int,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 void* FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,TYPE_3__) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_2__ const*) ;

__attribute__((used)) static BOOL FUNC_14(ITERATOR* VAR_5, const LISTVIEW_INFO* VAR_6, const RECT *VAR_7)
{
    RECT VAR_8, VAR_9;
    RANGES VAR_10;

    FUNC_3("(frame=%s)\n", FUNC_13(VAR_7));


    FUNC_5(VAR_5);

    if (VAR_6->nItemCount == 0)
        return VAR_4;

    if (VAR_6->uView == VAR_2 || VAR_6->uView == VAR_3)
    {
 INT VAR_11;

 if (VAR_6->uView == VAR_2 && VAR_6->nFocusedItem != -1)
 {
     FUNC_2(VAR_6, VAR_6->nFocusedItem, &VAR_8);
     if (FUNC_1(&VAR_9, &VAR_8, VAR_7))
  VAR_5->nSpecial = VAR_6->nFocusedItem;
 }
 if (!(VAR_10 = FUNC_12(50))) return VAR_0;
 FUNC_7(VAR_5, VAR_10);

 FUNC_3("building icon ranges:\n");
 for (VAR_11 = 0; VAR_11 < VAR_6->nItemCount; VAR_11++)
 {
            VAR_8.left = (LONG_PTR)FUNC_0(VAR_6->hdpaPosX, VAR_11);
     VAR_8.top = (LONG_PTR)FUNC_0(VAR_6->hdpaPosY, VAR_11);
     VAR_8.right = VAR_8.left + VAR_6->nItemWidth;
     VAR_8.bottom = VAR_8.top + VAR_6->nItemHeight;
     if (FUNC_1(&VAR_9, &VAR_8, VAR_7))
  FUNC_11(VAR_5->ranges, VAR_11);
 }
 return VAR_4;
    }
    else if (VAR_6->uView == VAR_1)
    {
 RANGE VAR_12;

 if (VAR_7->left >= VAR_6->nItemWidth) return VAR_4;
 if (VAR_7->top >= VAR_6->nItemHeight * VAR_6->nItemCount) return VAR_4;

 VAR_12.lower = FUNC_8(VAR_7->top / VAR_6->nItemHeight, 0);
 VAR_12.upper = FUNC_9((VAR_7->bottom - 1) / VAR_6->nItemHeight, VAR_6->nItemCount - 1) + 1;
 if (VAR_12.upper <= VAR_12.lower) return VAR_4;
 FUNC_6(VAR_5, VAR_12);
 FUNC_3("    report=%s\n", FUNC_4(&VAR_5->range));
    }
    else
    {
 INT VAR_13 = FUNC_8((VAR_6->rcList.bottom - VAR_6->rcList.top) / VAR_6->nItemHeight, 1);
 INT VAR_14 = FUNC_8(VAR_7->top / VAR_6->nItemHeight, 0);
 INT VAR_15 = FUNC_9((VAR_7->bottom - 1) / VAR_6->nItemHeight, VAR_13 - 1);
 INT VAR_16;
 INT VAR_17;
 INT VAR_18;
 RANGE VAR_19;
 INT VAR_20;

 if (VAR_6->nItemWidth)
 {
     VAR_16 = FUNC_8(VAR_7->left / VAR_6->nItemWidth, 0);
            VAR_17 = FUNC_9((VAR_7->right - 1) / VAR_6->nItemWidth, (VAR_6->nItemCount + VAR_13 - 1) / VAR_13);
 }
 else
 {
     VAR_16 = FUNC_8(VAR_7->left, 0);
            VAR_17 = FUNC_9(VAR_7->right - 1, (VAR_6->nItemCount + VAR_13 - 1) / VAR_13);
 }

 VAR_18 = VAR_16 * VAR_13 + VAR_14;

 FUNC_3("nPerCol=%d, nFirstRow=%d, nLastRow=%d, nFirstCol=%d, nLastCol=%d, lower=%d\n",
       VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);

 if (VAR_17 < VAR_16 || VAR_15 < VAR_14) return VAR_4;

 if (!(VAR_10 = FUNC_12(VAR_17 - VAR_16 + 1))) return VAR_0;
 FUNC_7(VAR_5, VAR_10);
 FUNC_3("building list ranges:\n");
 for (VAR_20 = VAR_16; VAR_20 <= VAR_17; VAR_20++)
 {
     VAR_19.lower = VAR_20 * VAR_13 + VAR_14;
     if(VAR_19.lower >= VAR_6->nItemCount) break;
     VAR_19.upper = FUNC_9(VAR_20 * VAR_13 + VAR_15 + 1, VAR_6->nItemCount);
     FUNC_3("   list=%s\n", FUNC_4(&VAR_19));
     FUNC_10(VAR_5->ranges, VAR_19);
 }
    }

    return VAR_4;
}
