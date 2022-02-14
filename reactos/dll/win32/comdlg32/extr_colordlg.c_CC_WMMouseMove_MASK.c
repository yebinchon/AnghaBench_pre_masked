
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ capturedGraph; int l; int h; int s; TYPE_1__* lpcc; int hwndSelf; } ;
struct TYPE_9__ {int rgbResult; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int*,int*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 () ;

__attribute__((used)) static LRESULT FUNC_8( CCPRIV *VAR_1, LPARAM VAR_2 )
{
   if (VAR_1->capturedGraph)
   {
      int *VAR_3 = ((void*)0), *VAR_4 = &VAR_1->l;
      if (VAR_1->capturedGraph == VAR_0)
      {
          VAR_3 = &VAR_1->h;
          VAR_4 = &VAR_1->s;
      }
      if (FUNC_3( VAR_1->hwndSelf, VAR_1->capturedGraph, VAR_3, VAR_4, VAR_2))
      {
          VAR_1->lpcc->rgbResult = FUNC_2(VAR_1->h, VAR_1->s, VAR_1->l);
          FUNC_1(VAR_1);
          FUNC_0(VAR_1);
          FUNC_4(VAR_1);
          FUNC_6(VAR_1);
          FUNC_5(VAR_1);
      }
      else
      {
          FUNC_7();
          VAR_1->capturedGraph = 0;
      }
      return 1;
   }
   return 0;
}
