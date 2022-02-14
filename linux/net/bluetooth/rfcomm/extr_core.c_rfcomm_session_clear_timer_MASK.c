
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int timer; int state; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rfcomm_session *VAR_0)
{
 FUNC_0("session %p state %ld", VAR_0, VAR_0->state);

 FUNC_1(&VAR_0->timer);
}
