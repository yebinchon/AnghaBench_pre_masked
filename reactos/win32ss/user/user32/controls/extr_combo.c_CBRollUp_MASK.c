
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wState; scalar_t__ hWndLBox; int textRect; int buttonRect; int self; } ;
typedef int RECT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 () ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_9( LPHEADCOMBO VAR_13, BOOL VAR_14, BOOL VAR_15 )
{
   HWND VAR_16 = VAR_13->self;

   FUNC_7("[%p]: sel ok? [%i] dropped? [%i]\n",
  VAR_13->self, VAR_14, (INT)(VAR_13->wState & VAR_0));

   FUNC_1( VAR_13, (VAR_14) ? VAR_4 : VAR_3 );

   if( FUNC_3( VAR_16 ) && FUNC_0(VAR_13) != VAR_6 )
   {

       if( VAR_13->wState & VAR_0 )
       {
    RECT VAR_17;

    VAR_13->wState &= ~VAR_0;
    FUNC_6( VAR_13->hWndLBox, VAR_11 );

           if(FUNC_2() == VAR_13->hWndLBox)
           {
               FUNC_5();
           }

    if( FUNC_0(VAR_13) == VAR_5 )
    {
        VAR_17 = VAR_13->buttonRect;
    }
    else
           {
        if( VAR_15 )
        {
   FUNC_8( &VAR_17,
       &VAR_13->buttonRect,
       &VAR_13->textRect);
        }
        else
   VAR_17 = VAR_13->textRect;

        VAR_15 = VAR_12;
    }

    if( VAR_15 && !(VAR_13->wState & VAR_1) )
        FUNC_4( VAR_16, &VAR_17, 0, VAR_8 |
          VAR_7 | VAR_10 | VAR_9 );
    FUNC_1( VAR_13, VAR_2 );
       }
   }
}
