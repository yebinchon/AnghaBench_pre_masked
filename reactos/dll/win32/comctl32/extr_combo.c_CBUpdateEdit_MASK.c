
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int wState; int hWndEdit; int hWndLBox; } ;
typedef int * LPWSTR ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_7 ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( LPHEADCOMBO VAR_8 , INT VAR_9 )
{
   INT VAR_10;
   LPWSTR VAR_11 = ((void*)0);
   static const WCHAR VAR_12[] = { 0 };

   FUNC_2("\t %i\n", VAR_9 );

   if( VAR_9 >= 0 )
   {
       VAR_10 = FUNC_1(VAR_8->hWndLBox, VAR_6, VAR_9, 0);
       if( VAR_10 != VAR_4)
       {
           if ((VAR_11 = FUNC_3((VAR_10 + 1) * sizeof(WCHAR))))
               FUNC_1(VAR_8->hWndLBox, VAR_5, VAR_9, (LPARAM)VAR_11);
       }
   }

   if( FUNC_0(VAR_8) )
   {
      VAR_8->wState |= (VAR_1 | VAR_2);
      FUNC_1(VAR_8->hWndEdit, VAR_7, 0, VAR_11 ? (LPARAM)VAR_11 : (LPARAM)VAR_12);
      VAR_8->wState &= ~(VAR_1 | VAR_2);
   }

   if( VAR_8->wState & VAR_0 )
      FUNC_1(VAR_8->hWndEdit, VAR_3, 0, -1);

    FUNC_4( VAR_11 );
}
