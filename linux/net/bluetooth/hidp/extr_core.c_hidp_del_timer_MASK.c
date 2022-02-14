
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {scalar_t__ idle_to; int timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hidp_session *VAR_0)
{
 if (VAR_0->idle_to > 0)
  FUNC_0(&VAR_0->timer);
}
