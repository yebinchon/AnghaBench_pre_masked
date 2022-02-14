
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wState; int hWndLBox; } ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6( LPHEADCOMBO VAR_5 )
{
   if( VAR_5->wState & VAR_1 )
   {
       VAR_5->wState &= ~VAR_1;
       if( FUNC_3(VAR_5) == VAR_3 )
       {
    INT VAR_6 = FUNC_2( VAR_5, VAR_4 );

    if(VAR_6 >= 0)
    {
        VAR_5->wState |= VAR_2;
        FUNC_1( VAR_5, VAR_6 );
        VAR_5->wState &= ~VAR_2;
    }
       }
       FUNC_4();
       FUNC_5(VAR_5->hWndLBox);
   }

   if( VAR_5->wState & VAR_0 )
   {
       VAR_5->wState &= ~VAR_0;
       FUNC_0( VAR_5 );
   }
}
