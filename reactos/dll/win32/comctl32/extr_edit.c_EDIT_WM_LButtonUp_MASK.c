
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hwndSelf; scalar_t__ bCaptureState; } ;
typedef int LRESULT ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static LRESULT FUNC_3(EDITSTATE *VAR_1)
{
 if (VAR_1->bCaptureState) {
  FUNC_1(VAR_1->hwndSelf, 0);
  if (FUNC_0() == VAR_1->hwndSelf) FUNC_2();
 }
 VAR_1->bCaptureState = VAR_0;
 return 0;
}
