
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wState; int textRect; int self; int hWndLBox; } ;
typedef TYPE_1__* LPHEADCOMBO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4( LPHEADCOMBO VAR_6 )
{
   if( !(VAR_6->wState & VAR_1) )
   {
       if( FUNC_0(VAR_6) == VAR_3 )
           FUNC_3(VAR_6->hWndLBox, VAR_4, 0, 0);





       if( !(VAR_6->wState & VAR_0) )
  FUNC_2(VAR_6->self, &VAR_6->textRect, VAR_5);

       FUNC_1( VAR_6, VAR_2 );
       VAR_6->wState |= VAR_1;
   }
}
