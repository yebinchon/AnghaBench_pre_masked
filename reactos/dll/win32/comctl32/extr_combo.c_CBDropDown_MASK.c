
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
struct TYPE_14__ {int bottom; int top; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_18__ {scalar_t__ self; int wState; scalar_t__ droppedIndex; scalar_t__ hWndLBox; int dwStyle; int visibleItems; TYPE_1__ droppedRect; } ;
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
 int VAR_5 ;
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
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (scalar_t__,int *,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_12 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,scalar_t__,int,scalar_t__,scalar_t__,int) ;
 int FUNC_15 (char*,scalar_t__) ;
 int VAR_20 ;
 int FUNC_16 (int,int ) ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_18( LPHEADCOMBO VAR_21 )
{
    HMONITOR VAR_22;
    MONITORINFO VAR_23;
   RECT VAR_24,VAR_25;
   int VAR_26;
   int VAR_27;

   FUNC_15("[%p]: drop down\n", VAR_21->self);

   FUNC_3( VAR_21, VAR_3 );



   VAR_21->wState |= VAR_1;
   if( FUNC_2(VAR_21) == VAR_4 )
   {
       VAR_21->droppedIndex = FUNC_1( VAR_21, VAR_20 );


       if( !(VAR_21->wState & VAR_0) && VAR_21->droppedIndex >= 0)
  FUNC_0( VAR_21, VAR_21->droppedIndex );
   }
   else
   {
       VAR_21->droppedIndex = FUNC_12(VAR_21->hWndLBox, VAR_10, 0, 0);

       FUNC_12(VAR_21->hWndLBox, VAR_12,
                    VAR_21->droppedIndex == VAR_8 ? 0 : VAR_21->droppedIndex, 0);
       FUNC_12(VAR_21->hWndLBox, VAR_7, 0, 0);
   }


   FUNC_9( VAR_21->self, &VAR_24 );




   if( FUNC_2(VAR_21) == VAR_4 )
     VAR_24.left += FUNC_4();






   VAR_27 = VAR_21->droppedRect.bottom - VAR_21->droppedRect.top;

   FUNC_9(VAR_21->hWndLBox, &VAR_25);
   if (VAR_27 < VAR_25.bottom - VAR_25.top)
       VAR_27 = VAR_25.bottom - VAR_25.top;
   VAR_26 = (int)FUNC_12(VAR_21->hWndLBox, VAR_9, 0, 0);

   if (VAR_26 > 0)
   {
        int VAR_28 = (int)FUNC_12(VAR_21->hWndLBox, VAR_11, 0, 0);

        if (VAR_21->dwStyle & VAR_5)
        {
            VAR_27 -= 1;
        }
        else
        {
            if (VAR_26 > VAR_21->visibleItems)
                VAR_26 = VAR_21->visibleItems;
            VAR_27 = VAR_26 * VAR_28 + FUNC_5();
        }
   }

   VAR_25.left = VAR_24.left;
   VAR_25.top = VAR_24.bottom;
   VAR_25.right = VAR_25.left + VAR_21->droppedRect.right - VAR_21->droppedRect.left;
   VAR_25.bottom = VAR_25.top + VAR_27;


   VAR_22 = FUNC_10( &VAR_24, VAR_13 );
   VAR_23.cbSize = sizeof(VAR_23);
   FUNC_8( VAR_22, &VAR_23 );

   if (VAR_25.bottom > VAR_23.rcWork.bottom)
   {
       VAR_25.top = FUNC_16( VAR_24.top - VAR_27, VAR_23.rcWork.top );
       VAR_25.bottom = FUNC_17( VAR_25.top + VAR_27, VAR_23.rcWork.bottom );
   }

   FUNC_14( VAR_21->hWndLBox, VAR_6, VAR_25.left, VAR_25.top, VAR_25.right - VAR_25.left, VAR_25.bottom - VAR_25.top,
                 VAR_18 | VAR_19 );


   if( !(VAR_21->wState & VAR_2) )
     FUNC_11( VAR_21->self, ((void*)0), 0, VAR_15 |
      VAR_14 | VAR_17 | VAR_16 );

   FUNC_6( VAR_21->hWndLBox, VAR_20 );
   if (FUNC_7() != VAR_21->self)
      FUNC_13(VAR_21->hWndLBox);
}
