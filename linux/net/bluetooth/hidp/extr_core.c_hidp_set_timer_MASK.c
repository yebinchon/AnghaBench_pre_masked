
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int idle_to; int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hidp_session *VAR_2)
{
 if (VAR_2->idle_to > 0)
  FUNC_0(&VAR_2->timer, VAR_1 + VAR_0 * VAR_2->idle_to);
}
