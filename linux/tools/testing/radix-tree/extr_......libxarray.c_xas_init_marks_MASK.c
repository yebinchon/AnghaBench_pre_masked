
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xa_mark_t ;
struct xa_state {int xa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xa_state const*,scalar_t__) ;
 int FUNC_3 (struct xa_state const*,scalar_t__) ;

void FUNC_4(const struct xa_state *VAR_2)
{
 xa_mark_t VAR_3 = 0;

 for (;;) {
  if (FUNC_1(VAR_2->xa) && VAR_3 == VAR_0)
   FUNC_3(VAR_2, VAR_3);
  else
   FUNC_2(VAR_2, VAR_3);
  if (VAR_3 == VAR_1)
   break;
  FUNC_0(VAR_3);
 }
}
