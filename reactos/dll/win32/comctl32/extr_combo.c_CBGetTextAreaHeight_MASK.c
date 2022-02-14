
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_12__ {int wState; int dwStyle; void* editHeight; void* fixedOwnerDrawHeight; int owner; int self; scalar_t__ hFont; } ;
struct TYPE_11__ {int itemID; void* itemHeight; scalar_t__ itemData; int itemWidth; void* CtlID; void* CtlType; } ;
struct TYPE_10__ {int right; } ;
struct TYPE_9__ {void* tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ MEASUREITEMSTRUCT ;
typedef TYPE_4__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef void* INT ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 void* VAR_3 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,void*,int ) ;
 int VAR_4 ;

__attribute__((used)) static INT FUNC_8(
  HWND VAR_5,
  LPHEADCOMBO VAR_6)
{
  INT VAR_7;

  if( VAR_6->editHeight )
  {
    VAR_7 = VAR_6->editHeight;
  }
  else
  {
    TEXTMETRICW VAR_8;
    HDC VAR_9 = FUNC_2(VAR_5);
    HFONT VAR_10 = 0;
    INT VAR_11;

    if (VAR_6->hFont)
      VAR_10 = FUNC_6( VAR_9, VAR_6->hFont );

    FUNC_3(VAR_9, &VAR_8);

    VAR_11 = VAR_8.tmHeight;

    if( VAR_10 )
      FUNC_6( VAR_9, VAR_10 );

    FUNC_5(VAR_5, VAR_9);

    VAR_7 = VAR_11 + 4;
  }





  if ( FUNC_0(VAR_6) &&
       (VAR_6->wState & VAR_0) )
  {
    MEASUREITEMSTRUCT VAR_12;
    RECT VAR_13;
    INT VAR_14 = VAR_7;
    UINT VAR_15 = (UINT)FUNC_4( VAR_6->self, VAR_2 );




    FUNC_1(VAR_5, &VAR_13);

    VAR_6->wState &= ~VAR_0;




    VAR_12.CtlType = VAR_3;
    VAR_12.CtlID = VAR_15;
    VAR_12.itemID = -1;
    VAR_12.itemWidth = VAR_13.right;
    VAR_12.itemHeight = VAR_7 - 6;
    VAR_12.itemData = 0;
    FUNC_7(VAR_6->owner, VAR_4, VAR_15, (LPARAM)&VAR_12);
    VAR_7 = 6 + VAR_12.itemHeight;





    if (VAR_6->dwStyle & VAR_1)
    {
      VAR_12.CtlType = VAR_3;
      VAR_12.CtlID = VAR_15;
      VAR_12.itemID = 0;
      VAR_12.itemWidth = VAR_13.right;
      VAR_12.itemHeight = VAR_14;
      VAR_12.itemData = 0;
      FUNC_7(VAR_6->owner, VAR_4, VAR_15, (LPARAM)&VAR_12);
      VAR_6->fixedOwnerDrawHeight = VAR_12.itemHeight;
    }




    VAR_6->editHeight = VAR_7;
  }

  return VAR_7;
}
