
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef int si ;
typedef int sbi ;
typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
typedef int UINT ;
struct TYPE_32__ {int top; int left; } ;
struct TYPE_33__ {TYPE_1__ rcWindow; } ;
struct TYPE_38__ {TYPE_2__ wi; } ;
struct TYPE_37__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_36__ {int SCROLL_trackHitTest; int SCROLL_TrackingPos; int SCROLL_TrackingVal; scalar_t__ SCROLL_TrackingWin; int SCROLL_MovingThumb; scalar_t__ SCROLL_TrackingBar; scalar_t__ SCROLL_trackVertical; } ;
struct TYPE_31__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_35__ {int cbSize; int* rgstate; int xyThumbTop; TYPE_10__ rcScrollBar; } ;
struct TYPE_34__ {int cbSize; int fMask; } ;
typedef TYPE_3__ SCROLLINFO ;
typedef TYPE_4__ SCROLLBARINFO ;
typedef TYPE_5__* PWND_DATA ;
typedef TYPE_6__ POINT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef TYPE_7__ DRAW_CONTEXT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,TYPE_4__*) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_10__*,int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 TYPE_6__ FUNC_9 (TYPE_10__*,TYPE_6__) ;
 int FUNC_10 (TYPE_7__*,TYPE_4__*,scalar_t__,int,int ) ;
 int FUNC_11 (TYPE_7__*,TYPE_4__*,int,scalar_t__,int,int) ;
 int FUNC_12 (TYPE_5__*,TYPE_7__*,TYPE_4__*,scalar_t__) ;
 int VAR_9 ;
 void* FUNC_13 (TYPE_3__*,TYPE_10__*,scalar_t__,int) ;
 int FUNC_14 (scalar_t__,TYPE_4__*,scalar_t__,TYPE_6__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;

 int FUNC_16 (TYPE_10__*,TYPE_6__,scalar_t__) ;
 int VAR_10 ;

 int VAR_11 ;


 int FUNC_17 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (scalar_t__,int ,int ,int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__,int ,int ,int *) ;
 int FUNC_21 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (TYPE_7__*,scalar_t__,int ) ;
 int VAR_15 ;




 int VAR_16 ;

__attribute__((used)) static void
FUNC_24(PWND_DATA VAR_17, HWND VAR_18, INT VAR_19, UINT VAR_20, POINT VAR_21)
{

    static POINT VAR_22;

    static UINT VAR_23;

    static INT VAR_24;

    static INT VAR_25;

    enum SCROLL_HITTEST VAR_26;
    HWND VAR_27, VAR_28;
    BOOL VAR_29;
    SCROLLINFO VAR_30;
    SCROLLBARINFO VAR_31;
    DRAW_CONTEXT VAR_32;

    VAR_30.cbSize = sizeof(VAR_30);
    VAR_31.cbSize = sizeof(VAR_31);
    VAR_30.fMask = VAR_12;
    FUNC_3(VAR_18, VAR_19, &VAR_30);
    FUNC_2(VAR_18, FUNC_17(VAR_19), &VAR_31);
    VAR_29 = FUNC_15(VAR_18, VAR_19);
    if(VAR_31.rgstate[133] & VAR_13 &&
       VAR_31.rgstate[137] & VAR_13 )
    {
        return;
    }

    if ((VAR_17->SCROLL_trackHitTest == 135) && (VAR_20 != 131))
    return;

    FUNC_23(&VAR_32, VAR_18, 0);


    FUNC_7(&VAR_31.rcScrollBar, -VAR_32.wi.rcWindow.left, -VAR_32.wi.rcWindow.top);

    VAR_27 = (VAR_19 == VAR_1) ? FUNC_1(VAR_18) : VAR_18;
    VAR_28 = (VAR_19 == VAR_1) ? VAR_18 : 0;

    switch(VAR_20)
    {
      case 131:
          FUNC_4(VAR_18);
          VAR_17->SCROLL_trackVertical = VAR_29;
          VAR_17->SCROLL_trackHitTest = VAR_26 = FUNC_14( VAR_18, &VAR_31, VAR_29, VAR_21, VAR_0 );
          VAR_24 = VAR_29 ? (VAR_21.y - VAR_31.rcScrollBar.top) : (VAR_21.x - VAR_31.rcScrollBar.left);
          VAR_25 = VAR_24;
          VAR_23 = VAR_31.xyThumbTop;
          VAR_22 = VAR_21;
          FUNC_19( VAR_18 );
          break;

      case 129:
          VAR_26 = FUNC_14( VAR_18, &VAR_31, VAR_29, VAR_21, VAR_14 );
          VAR_22 = VAR_21;
          break;

      case 130:
          VAR_26 = 135;
          FUNC_8();

          if (VAR_18==FUNC_0())
              FUNC_21(VAR_18);
          break;

      case 128:
          VAR_21 = VAR_22;
          VAR_26 = FUNC_14( VAR_18, &VAR_31, VAR_29, VAR_21, VAR_0 );
          break;

      default:
          return;
    }




    switch(VAR_17->SCROLL_trackHitTest)
    {
    case 135:
        break;

    case 133:
        if (VAR_26 == VAR_17->SCROLL_trackHitTest)
        {
            FUNC_10( &VAR_32, &VAR_31, VAR_29, VAR_17->SCROLL_trackHitTest, 0 );
            if ((VAR_20 == 131) || (VAR_20 == 128))
            {
                FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                                VAR_4, (LPARAM)VAR_28 );
         }

        FUNC_20( VAR_18, VAR_11, (VAR_20 == 131) ?
                            VAR_9 : VAR_10, ((void*)0) );
        }
        else
        {
            FUNC_10( &VAR_32, &VAR_31, VAR_29, 0, 0 );
            FUNC_5( VAR_18, VAR_11 );
        }

        break;

    case 132:
        FUNC_11( &VAR_32, &VAR_31, VAR_31.xyThumbTop, VAR_29, VAR_17->SCROLL_trackHitTest, 0);
        if (VAR_26 == VAR_17->SCROLL_trackHitTest)
        {
            if ((VAR_20 == 131) || (VAR_20 == 128))
            {
                FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                                VAR_6, (LPARAM)VAR_28 );
            }
            FUNC_20( VAR_18, VAR_11, (VAR_20 == 131) ?
                              VAR_9 : VAR_10, ((void*)0) );
        }
        else FUNC_5( VAR_18, VAR_11 );
        break;

    case 134:
        if (VAR_20 == 131)
        {
            VAR_17->SCROLL_TrackingWin = VAR_18;
            VAR_17->SCROLL_TrackingBar = VAR_19;
            VAR_17->SCROLL_TrackingPos = VAR_23 + VAR_25 - VAR_24;
            VAR_17->SCROLL_TrackingVal = FUNC_13( &VAR_30, &VAR_31.rcScrollBar,
                                                     VAR_29, VAR_17->SCROLL_TrackingPos );
         if (!VAR_17->SCROLL_MovingThumb)
          FUNC_12(VAR_17, &VAR_32, &VAR_31, VAR_29);
        }
        else if (VAR_20 == 130)
        {
         if (VAR_17->SCROLL_MovingThumb)
          FUNC_12(VAR_17, &VAR_32, &VAR_31, VAR_29);

            FUNC_11( &VAR_32, &VAR_31, VAR_31.xyThumbTop, VAR_29, 0, VAR_17->SCROLL_trackHitTest );
        }
        else
        {
            INT VAR_33;

            if (!FUNC_16( &VAR_31.rcScrollBar, VAR_21, VAR_29 ))
                VAR_33 = VAR_24;
            else
            {
                VAR_21 = FUNC_9( &VAR_31.rcScrollBar, VAR_21 );
                VAR_33 = VAR_29 ? (VAR_21.y - VAR_31.rcScrollBar.top) : (VAR_21.x - VAR_31.rcScrollBar.left);
            }
            if ( (VAR_33 != VAR_25) || (!VAR_17->SCROLL_MovingThumb) )
            {
                if (VAR_17->SCROLL_MovingThumb)
                    FUNC_12(VAR_17, &VAR_32, &VAR_31, VAR_29);
                VAR_25 = VAR_33;
                VAR_17->SCROLL_TrackingPos = VAR_23 + VAR_33 - VAR_24;
                VAR_17->SCROLL_TrackingVal = FUNC_13( &VAR_30, &VAR_31.rcScrollBar,
                                                         VAR_29,
                                                         VAR_17->SCROLL_TrackingPos );
                FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                                FUNC_6( VAR_8, VAR_17->SCROLL_TrackingVal),
                                (LPARAM)VAR_28 );
                if (!VAR_17->SCROLL_MovingThumb)
                    FUNC_12(VAR_17, &VAR_32, &VAR_31, VAR_29);
            }
        }
        break;

    case 136:
        if (VAR_26 == VAR_17->SCROLL_trackHitTest)
        {
            FUNC_11( &VAR_32, &VAR_31, VAR_31.xyThumbTop, VAR_29, VAR_17->SCROLL_trackHitTest, 0 );
            if ((VAR_20 == 131) || (VAR_20 == 128))
            {
                FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                                VAR_5, (LPARAM)VAR_28 );
            }
            FUNC_20( VAR_18, VAR_11, (VAR_20 == 131) ?
                              VAR_9 : VAR_10, ((void*)0) );
        }
        else
        {
            FUNC_11( &VAR_32, &VAR_31, VAR_31.xyThumbTop, VAR_29, 0, 0 );
            FUNC_5( VAR_18, VAR_11 );
        }
        break;

    case 137:
        if (VAR_26 == VAR_17->SCROLL_trackHitTest)
        {
            FUNC_10( &VAR_32, &VAR_31, VAR_29, VAR_17->SCROLL_trackHitTest, 0 );
            if ((VAR_20 == 131) || (VAR_20 == 128))
            {
                FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                                VAR_3, (LPARAM)VAR_28 );
         }

        FUNC_20( VAR_18, VAR_11, (VAR_20 == 131) ?
                            VAR_9 : VAR_10, ((void*)0) );
        }
        else
        {
            FUNC_10( &VAR_32, &VAR_31, VAR_29, 0, 0 );
            FUNC_5( VAR_18, VAR_11 );
        }
        break;
    }

    if (VAR_20 == 131)
    {

        if (VAR_26 == 134)
        {
            UINT VAR_34 = FUNC_13( &VAR_30, &VAR_31.rcScrollBar, VAR_29,
                                 VAR_23 + VAR_25 - VAR_24 );
            FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                            FUNC_6( VAR_8, VAR_34 ), (LPARAM)VAR_28 );
        }
    }

    if (VAR_20 == 130)
    {
        VAR_26 = VAR_17->SCROLL_trackHitTest;
        VAR_17->SCROLL_trackHitTest = 135;

        if (VAR_26 == 134)
        {
            UINT VAR_35 = FUNC_13( &VAR_30, &VAR_31.rcScrollBar, VAR_29,
                                 VAR_23 + VAR_25 - VAR_24 );
            FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                            FUNC_6( VAR_7, VAR_35 ), (LPARAM)VAR_28 );
        }

        FUNC_18( VAR_27, VAR_29 ? VAR_16 : VAR_15,
                          VAR_2, (LPARAM)VAR_28 );


        VAR_17->SCROLL_TrackingWin = 0;
    }

    FUNC_22(&VAR_32);
}
