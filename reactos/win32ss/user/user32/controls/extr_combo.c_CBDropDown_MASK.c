
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int mon_info ;
typedef int WPARAM ;
struct TYPE_14__ {int bottom; int top; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_18__ {scalar_t__ self; int wState; scalar_t__ droppedIndex; scalar_t__ hWndLBox; TYPE_1__ droppedRect; } ;
struct TYPE_15__ {scalar_t__ bottom; int top; } ;
struct TYPE_17__ {int cbSize; TYPE_2__ rcWork; } ;
struct TYPE_16__ {int bottom; int top; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ MONITORINFO ;
typedef TYPE_5__* LPHEADCOMBO ;
typedef int HMONITOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (scalar_t__,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (scalar_t__,int *,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,scalar_t__,int,scalar_t__,scalar_t__,int) ;
 int FUNC_15 (char*,scalar_t__) ;
 int VAR_19 ;
 int FUNC_16 (int,int ) ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_18( LPHEADCOMBO VAR_20 )
{
    HMONITOR VAR_21;
    MONITORINFO VAR_22;
   RECT VAR_23,VAR_24;
   int VAR_25 = 0;
   int VAR_26;

   FUNC_15("[%p]: drop down\n", VAR_20->self);

   FUNC_3( VAR_20, VAR_3 );



   VAR_20->wState |= VAR_1;
   if( FUNC_2(VAR_20) == VAR_4 )
   {
       VAR_20->droppedIndex = FUNC_1( VAR_20, VAR_19 );


       if( !(VAR_20->wState & VAR_0) && VAR_20->droppedIndex >= 0)
  FUNC_0( VAR_20, VAR_20->droppedIndex );
   }
   else
   {
       VAR_20->droppedIndex = FUNC_12(VAR_20->hWndLBox, VAR_9, 0, 0);

       FUNC_12(VAR_20->hWndLBox, VAR_11,
                    (WPARAM)(VAR_20->droppedIndex == VAR_7 ? 0 : VAR_20->droppedIndex), 0 );
       FUNC_12(VAR_20->hWndLBox, VAR_6, 0, 0);
   }


   FUNC_9( VAR_20->self, &VAR_23 );




   if( FUNC_2(VAR_20) == VAR_4 )
     VAR_23.left += FUNC_4();






   VAR_26 = VAR_20->droppedRect.bottom - VAR_20->droppedRect.top;

   FUNC_9(VAR_20->hWndLBox, &VAR_24);
   if (VAR_26 < VAR_24.bottom - VAR_24.top)
       VAR_26 = VAR_24.bottom - VAR_24.top;
   VAR_25 = (int)FUNC_12(VAR_20->hWndLBox, VAR_8, 0, 0);

   if (VAR_25 > 0)
   {
      int VAR_27;
      int VAR_28;

      VAR_28 = (int)FUNC_12(VAR_20->hWndLBox, VAR_10, 0, 0);

      VAR_27 = VAR_28*VAR_25;

      if (VAR_27 < VAR_26 - FUNC_5())
         VAR_26 = VAR_27 + FUNC_5();
   }

   VAR_24.left = VAR_23.left;
   VAR_24.top = VAR_23.bottom;
   VAR_24.right = VAR_24.left + VAR_20->droppedRect.right - VAR_20->droppedRect.left;
   VAR_24.bottom = VAR_24.top + VAR_26;


   VAR_21 = FUNC_10( &VAR_23, VAR_12 );
   VAR_22.cbSize = sizeof(VAR_22);
   FUNC_8( VAR_21, &VAR_22 );

   if (VAR_24.bottom > VAR_22.rcWork.bottom)
   {
       VAR_24.top = FUNC_16( VAR_23.top - VAR_26, VAR_22.rcWork.top );
       VAR_24.bottom = FUNC_17( VAR_24.top + VAR_26, VAR_22.rcWork.bottom );
   }

   FUNC_14( VAR_20->hWndLBox, VAR_5, VAR_24.left, VAR_24.top, VAR_24.right - VAR_24.left, VAR_24.bottom - VAR_24.top,
                 VAR_17 | VAR_18 );


   if( !(VAR_20->wState & VAR_2) )
     FUNC_11( VAR_20->self, ((void*)0), 0, VAR_14 |
      VAR_13 | VAR_16 | VAR_15 );

   FUNC_6( VAR_20->hWndLBox, VAR_19 );
   if (FUNC_7() != VAR_20->self)
      FUNC_13(VAR_20->hWndLBox);
}
