
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hwndFocus; int focusRect; } ;
typedef int HDC ;
typedef TYPE_1__ CCPRIV ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3( const CCPRIV *VAR_0 )
{
  if (VAR_0->hwndFocus)
  {
    HDC VAR_1 = FUNC_1(VAR_0->hwndFocus);
    FUNC_0(VAR_1, &VAR_0->focusRect);
    FUNC_2(VAR_0->hwndFocus, VAR_1);
  }
}
