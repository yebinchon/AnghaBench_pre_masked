
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int hWndLBox; int hWndEdit; } ;
typedef int * LPWSTR ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_5 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static INT FUNC_5( LPHEADCOMBO VAR_6, BOOL VAR_7 )
{
   INT VAR_8, VAR_9;
   LPWSTR VAR_10 = ((void*)0);

   VAR_9 = VAR_0;
   VAR_8 = FUNC_1( VAR_6->hWndEdit, VAR_5, 0, 0 );

    if (VAR_8 > 0)
        VAR_10 = FUNC_3((VAR_8 + 1) * sizeof(WCHAR));

   FUNC_2("\t edit text length %i\n", VAR_8 );

   if( VAR_10 )
   {
       FUNC_0( VAR_6->hWndEdit, VAR_10, VAR_8 + 1);
       VAR_9 = FUNC_1(VAR_6->hWndLBox, VAR_1, -1, (LPARAM)VAR_10);
       FUNC_4( VAR_10 );
   }

   FUNC_1(VAR_6->hWndLBox, VAR_3, VAR_7 ? VAR_9 : -1, 0);


   FUNC_1(VAR_6->hWndLBox, VAR_2, VAR_9 < 0 ? 0 : VAR_9, 0);
   FUNC_1(VAR_6->hWndLBox, VAR_4, VAR_9 < 0 ? 0 : VAR_9, 0);

   return VAR_9;
}
