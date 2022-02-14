
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* lpcc; void* l; void* s; void* h; int hwndSelf; void* capturedGraph; } ;
struct TYPE_11__ {int rgbResult; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,void*,void*) ;
 scalar_t__ FUNC_3 (int ,void*,void**,void**,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (char,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_10 (int ) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_11( CCPRIV *VAR_4, LPARAM VAR_5 )
{
   int VAR_6 = 0;

   if (FUNC_4(VAR_4, 6, 8, VAR_5))
      VAR_6 = 1;
   else
      if (FUNC_5(VAR_4, 2, 8, VAR_5))
         VAR_6 = 1;
      else
  if (FUNC_3(VAR_4->hwndSelf, VAR_1, &VAR_4->h, &VAR_4->s, VAR_5))
         {
     VAR_6 = 2;
            VAR_4->capturedGraph = VAR_1;
         }
  else
     if (FUNC_3(VAR_4->hwndSelf, VAR_2, ((void*)0), &VAR_4->l, VAR_5))
            {
        VAR_6 = 2;
               VAR_4->capturedGraph = VAR_2;
            }
   if ( VAR_6 == 2 )
   {
      FUNC_10(VAR_4->hwndSelf);
      VAR_4->lpcc->rgbResult = FUNC_2(VAR_4->h, VAR_4->s, VAR_4->l);
   }
   if ( VAR_6 == 1 )
   {
      VAR_4->h = FUNC_9('H', VAR_4->lpcc->rgbResult);
      VAR_4->s = FUNC_9('S', VAR_4->lpcc->rgbResult);
      VAR_4->l = FUNC_9('L', VAR_4->lpcc->rgbResult);
   }
   if (VAR_6)
   {
      FUNC_1(VAR_4);
      FUNC_0(VAR_4);
      FUNC_6(VAR_4);
      FUNC_8(VAR_4);
      FUNC_7(VAR_4);
      return VAR_3;
   }
   return VAR_0;
}
