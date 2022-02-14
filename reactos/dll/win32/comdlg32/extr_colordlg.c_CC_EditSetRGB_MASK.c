
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int updating; int hwndSelf; TYPE_1__* lpcc; } ;
struct TYPE_4__ {int rgbResult; } ;
typedef int COLORREF ;
typedef TYPE_2__ CCPRIV ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6( CCPRIV *VAR_6 )
{
 if (FUNC_4( FUNC_1(VAR_6->hwndSelf, VAR_4) ))
 {
   COLORREF VAR_7 = VAR_6->lpcc->rgbResult;
   int VAR_8 = FUNC_3(VAR_7);
   int VAR_9 = FUNC_2(VAR_7);
   int VAR_10 = FUNC_0(VAR_7);

   VAR_6->updating = VAR_5;
   FUNC_5(VAR_6->hwndSelf, VAR_3, VAR_8, VAR_5);
   FUNC_5(VAR_6->hwndSelf, VAR_2, VAR_9, VAR_5);
   FUNC_5(VAR_6->hwndSelf, VAR_1, VAR_10, VAR_5);
   VAR_6->updating = VAR_0;
 }
}
