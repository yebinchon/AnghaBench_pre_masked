
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_10__ {int wState; int hWndLBox; int self; int buttonRect; } ;
struct TYPE_9__ {short x; short y; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10( LPHEADCOMBO VAR_5, WPARAM VAR_6, LPARAM VAR_7 )
{
   POINT VAR_8;
   RECT VAR_9;

   VAR_8.x = (short)FUNC_5(VAR_7);
   VAR_8.y = (short)FUNC_4(VAR_7);

   if( VAR_5->wState & VAR_0 )
   {
     BOOL VAR_10;

     VAR_10 = FUNC_7(&VAR_5->buttonRect, VAR_8);

     if( !VAR_10 )
     {
       VAR_5->wState &= ~VAR_0;
       FUNC_0( VAR_5 );
     }
   }

   FUNC_3( VAR_5->hWndLBox, &VAR_9 );
   FUNC_6( VAR_5->self, VAR_5->hWndLBox, &VAR_8, 1 );
   if( FUNC_7(&VAR_9, VAR_8) )
   {
       VAR_5->wState &= ~VAR_1;
       FUNC_8();
       if( FUNC_2(VAR_5) == VAR_2 ) FUNC_1( VAR_5, VAR_3 );


       FUNC_9(VAR_5->hWndLBox, VAR_4, VAR_6, VAR_7);
   }
}
