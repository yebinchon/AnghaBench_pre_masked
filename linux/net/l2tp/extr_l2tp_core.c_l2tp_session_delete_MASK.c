
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_session {int (* session_close ) (struct l2tp_session*) ;int dead; } ;


 int FUNC_0 (struct l2tp_session*) ;
 int FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (struct l2tp_session*) ;
 int FUNC_3 (struct l2tp_session*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct l2tp_session *VAR_0)
{
 if (FUNC_4(0, &VAR_0->dead))
  return 0;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 if (VAR_0->session_close != ((void*)0))
  (*VAR_0->session_close)(VAR_0);

 FUNC_1(VAR_0);

 return 0;
}
