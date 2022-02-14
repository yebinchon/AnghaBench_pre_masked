
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int wState; int textRect; int self; int hWndLBox; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT FUNC_4( LPHEADCOMBO VAR_3, INT VAR_4, LPARAM VAR_5, BOOL VAR_6 )
{
   INT VAR_7 = VAR_6 ? FUNC_3(VAR_3->hWndLBox, VAR_1, (WPARAM)VAR_4, VAR_5) :
                         FUNC_2(VAR_3->hWndLBox, VAR_1, (WPARAM)VAR_4, VAR_5);
   if( VAR_7 >= 0 )
   {
     if( VAR_3->wState & VAR_0 )
       FUNC_0( VAR_3, VAR_7 );
     else
     {
       FUNC_1(VAR_3->self, &VAR_3->textRect, VAR_2);
     }
   }
   return (LRESULT)VAR_7;
}
