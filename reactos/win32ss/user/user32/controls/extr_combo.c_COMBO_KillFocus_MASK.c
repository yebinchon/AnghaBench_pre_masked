
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wState; int textRect; int self; int hWndLBox; } ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6( LPHEADCOMBO VAR_7 )
{
   HWND VAR_8 = VAR_7->self;

   if( VAR_7->wState & VAR_1 )
   {
       FUNC_0( VAR_7, VAR_4, VAR_6 );
       if( FUNC_4( VAR_8 ) )
       {
           if( FUNC_1(VAR_7) == VAR_3 )
               FUNC_5(VAR_7->hWndLBox, VAR_5, 0, 0);

     VAR_7->wState &= ~VAR_1;


    if( !(VAR_7->wState & VAR_0) )
      FUNC_3(VAR_7->self, &VAR_7->textRect, VAR_6);

           FUNC_2( VAR_7, VAR_2 );
       }
   }
}
