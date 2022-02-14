
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int state; int sock; int list; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rfcomm_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rfcomm_session*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct rfcomm_session *FUNC_6(struct rfcomm_session *VAR_2)
{
 int VAR_3 = VAR_2->state;

 FUNC_0("session %p state %ld", VAR_2, VAR_2->state);

 FUNC_2(&VAR_2->list);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2->sock);
 FUNC_1(VAR_2);

 if (VAR_3 != VAR_0)
  FUNC_3(VAR_1);

 return ((void*)0);
}
