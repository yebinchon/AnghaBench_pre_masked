
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int self; scalar_t__ hWndLBox; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPHEADCOMBO ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static LRESULT FUNC_6( LPHEADCOMBO VAR_1 )
{

   if( VAR_1 )
   {
       FUNC_5("[%p]: freeing storage\n", VAR_1->self);

       if( (FUNC_0(VAR_1) != VAR_0) && VAR_1->hWndLBox )
       FUNC_1( VAR_1->hWndLBox );

       FUNC_4( VAR_1->self, 0, 0 );
       FUNC_3( FUNC_2(), 0, VAR_1 );
   }
   return 0;
}
