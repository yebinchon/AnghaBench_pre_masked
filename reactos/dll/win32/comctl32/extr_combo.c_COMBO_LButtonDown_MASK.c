
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int wState; int buttonRect; int self; } ;
struct TYPE_9__ {short x; short y; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10( LPHEADCOMBO VAR_7, LPARAM VAR_8 )
{
   POINT VAR_9;
   BOOL VAR_10;
   HWND VAR_11 = VAR_7->self;

   VAR_9.x = (short)FUNC_6(VAR_8);
   VAR_9.y = (short)FUNC_4(VAR_8);
   VAR_10 = FUNC_7(&VAR_7->buttonRect, VAR_9);

   if( (FUNC_3(VAR_7) == VAR_4) ||
       (VAR_10 && (FUNC_3(VAR_7) == VAR_3)) )
   {
       VAR_7->wState |= VAR_0;
       if( VAR_7->wState & VAR_2 )
       {


           VAR_7->wState &= ~VAR_0;
           FUNC_2( VAR_7, VAR_6, VAR_5 );
    if( !FUNC_5( VAR_11 ) ) return;

           if( VAR_7->wState & VAR_1 )
           {
               VAR_7->wState &= ~VAR_1;
               FUNC_8();
           }
       }
       else
       {


           VAR_7->wState |= VAR_1;
           FUNC_9( VAR_11 );
           FUNC_0( VAR_7 );
       }
       if( VAR_10 ) FUNC_1( VAR_7 );
   }
}
