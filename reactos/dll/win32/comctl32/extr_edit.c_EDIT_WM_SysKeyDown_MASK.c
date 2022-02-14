
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hwndSelf; } ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_4(EDITSTATE *VAR_4, INT VAR_5, DWORD VAR_6)
{
 if ((VAR_5 == VAR_0) && (VAR_6 & 0x2000)) {
  if (FUNC_2(VAR_4))
   FUNC_3(VAR_4);
  return 0;
 } else if (VAR_5 == VAR_2 || VAR_5 == VAR_1) {
  if (FUNC_1(VAR_4, VAR_3, VAR_5))
   return 0;
 }
 return FUNC_0(VAR_4->hwndSelf, VAR_3, VAR_5, VAR_6);
}
