
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_8__ {int editHeight; int hWndLBox; int droppedRect; int textRect; int buttonRect; int self; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef int INT ;


 int FUNC_0 (int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_6( LPHEADCOMBO VAR_4, INT VAR_5, INT VAR_6 )
{
   LRESULT VAR_7 = VAR_1;

   if( VAR_5 == -1 )
   {
       if( VAR_6 < 32768 )
       {
           VAR_4->editHeight = VAR_6 + 2;




  if ( FUNC_3(VAR_4) == VAR_0)
  {
    FUNC_0(VAR_4->self,
      VAR_4,
      &VAR_4->textRect,
      &VAR_4->buttonRect,
      &VAR_4->droppedRect);

    FUNC_2( VAR_4, &VAR_4->textRect, &VAR_4->droppedRect, VAR_3 );
  }
  else
  {
    FUNC_1(VAR_4);
  }

    VAR_7 = VAR_6;
       }
   }
   else if ( FUNC_4(VAR_4) )
       VAR_7 = FUNC_5(VAR_4->hWndLBox, VAR_2, (WPARAM)VAR_5, (LPARAM)VAR_6);
   return VAR_7;
}
