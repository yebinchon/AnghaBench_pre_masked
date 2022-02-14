
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int timer; int state; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int ,long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rfcomm_session *VAR_1, long VAR_2)
{
 FUNC_0("session %p state %ld timeout %ld", VAR_1, VAR_1->state, VAR_2);

 FUNC_1(&VAR_1->timer, VAR_0 + VAR_2);
}
