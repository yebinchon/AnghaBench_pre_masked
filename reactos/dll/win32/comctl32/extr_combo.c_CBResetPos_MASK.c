
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wState; int self; int hWndLBox; int hWndEdit; } ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPHEADCOMBO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(
  LPHEADCOMBO VAR_11,
  const RECT *VAR_12,
  const RECT *VAR_13,
  BOOL VAR_14)
{
   BOOL VAR_15 = (FUNC_0(VAR_11) != VAR_3);




   if( VAR_11->wState & VAR_1 )
     FUNC_2( VAR_11->hWndEdit, 0,
     VAR_12->left, VAR_12->top,
     VAR_12->right - VAR_12->left,
     VAR_12->bottom - VAR_12->top,
                       VAR_9 | VAR_7 | ((VAR_15) ? VAR_8 : 0) );

   FUNC_2( VAR_11->hWndLBox, 0,
   VAR_13->left, VAR_13->top,
                 VAR_13->right - VAR_13->left,
   VAR_13->bottom - VAR_13->top,
     VAR_7 | VAR_9 | ((VAR_15) ? VAR_8 : 0) );

   if( VAR_15 )
   {
       if( VAR_11->wState & VAR_0 )
       {
           VAR_11->wState &= ~VAR_0;
           FUNC_3( VAR_11->hWndLBox, VAR_10 );
       }

       if( VAR_14 && !(VAR_11->wState & VAR_2) )
           FUNC_1( VAR_11->self, ((void*)0), 0,
                           VAR_5 | VAR_4 | VAR_6 );
   }
}
