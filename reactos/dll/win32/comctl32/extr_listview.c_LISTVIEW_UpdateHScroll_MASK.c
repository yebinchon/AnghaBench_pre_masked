
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int right; int left; } ;
struct TYPE_21__ {scalar_t__ uView; int nItemCount; int nItemWidth; int hwndSelf; scalar_t__ hwndHeader; int hdpaColumns; TYPE_1__ rcList; } ;
struct TYPE_20__ {int right; int left; } ;
struct TYPE_19__ {int cbSize; int nPage; int nMax; int fMask; int nPos; } ;
typedef TYPE_2__ SCROLLINFO ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ LISTVIEW_INFO ;
typedef int INT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_11 (char*,int) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static INT FUNC_15(LISTVIEW_INFO *VAR_8)
{
    SCROLLINFO VAR_9;
    INT VAR_10;

    FUNC_12(&VAR_9, sizeof(SCROLLINFO));
    VAR_9.cbSize = sizeof(SCROLLINFO);
    VAR_9.nPage = VAR_8->rcList.right - VAR_8->rcList.left;


    if (VAR_8->uView == VAR_2)
    {
 INT VAR_11 = FUNC_3(VAR_8);
 VAR_9.nMax = (VAR_8->nItemCount + VAR_11 - 1) / VAR_11;


 if(VAR_9.nPage < VAR_8->nItemWidth)
  VAR_9.nPage = VAR_8->nItemWidth;

 if (VAR_8->nItemWidth)
     VAR_9.nPage /= VAR_8->nItemWidth;
    }
    else if (VAR_8->uView == VAR_1)
    {
 VAR_9.nMax = VAR_8->nItemWidth;
    }
    else
    {
 RECT VAR_12;

 if (FUNC_5(VAR_8, &VAR_12)) VAR_9.nMax = VAR_12.right - VAR_12.left;
    }

    if (FUNC_6(VAR_8))
    {
 if (FUNC_0(VAR_8->hdpaColumns))
 {
     RECT VAR_13;
     INT VAR_14;

     VAR_14 = FUNC_9(VAR_8->hwndHeader, VAR_0,
                                 FUNC_0(VAR_8->hdpaColumns) - 1, 0);

     FUNC_4(VAR_8, VAR_14, &VAR_13);
     VAR_9.nMax = VAR_13.right;
     FUNC_11("horzInfo.nMax=%d\n", VAR_9.nMax);
 }
    }

    VAR_9.fMask = VAR_6 | VAR_4;
    VAR_9.nMax = FUNC_14(VAR_9.nMax - 1, 0);



    VAR_10 = FUNC_2(VAR_8->hwndSelf, VAR_3);
    VAR_10 -= FUNC_10(VAR_8->hwndSelf, VAR_3, &VAR_9, VAR_7);
    FUNC_11("horzInfo=%s\n", FUNC_13(&VAR_9));


    if (VAR_8->hwndHeader)
    {
 VAR_9.fMask = VAR_5;
 FUNC_1(VAR_8->hwndSelf, VAR_3, &VAR_9);
 FUNC_7(VAR_8, VAR_9.nPos);
    }

    FUNC_8(VAR_8);
    return VAR_10;
}
