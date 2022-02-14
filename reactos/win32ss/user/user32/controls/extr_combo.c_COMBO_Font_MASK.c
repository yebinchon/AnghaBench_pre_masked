
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_7__ {int wState; int droppedRect; int textRect; int buttonRect; int self; int hWndLBox; int hWndEdit; scalar_t__ hFont; } ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef scalar_t__ HFONT ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_1__*,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5( LPHEADCOMBO VAR_4, HFONT VAR_5, BOOL VAR_6 )
{



  VAR_4->hFont = VAR_5;




  if( VAR_4->wState & VAR_0 )
      FUNC_4(VAR_4->hWndEdit, VAR_3, (WPARAM)VAR_5, VAR_6);
  FUNC_4(VAR_4->hWndLBox, VAR_3, (WPARAM)VAR_5, VAR_6);




  if ( FUNC_3(VAR_4) == VAR_1)
  {
    FUNC_0(VAR_4->self,
      VAR_4,
      &VAR_4->textRect,
      &VAR_4->buttonRect,
      &VAR_4->droppedRect);

    FUNC_2( VAR_4, &VAR_4->textRect, &VAR_4->droppedRect, VAR_2 );
  }
  else
  {
    FUNC_1(VAR_4);
  }
}
