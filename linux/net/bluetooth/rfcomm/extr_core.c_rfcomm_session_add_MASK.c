
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rfcomm_session {int state; int list; int cfc; int mtu; struct socket* sock; int dlcs; int timer; } ;


 int FUNC_0 (char*,struct rfcomm_session*,struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct rfcomm_session*) ;
 struct rfcomm_session* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct rfcomm_session *FUNC_7(struct socket *VAR_9, int VAR_10)
{
 struct rfcomm_session *VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);

 if (!VAR_11)
  return ((void*)0);

 FUNC_0("session %p sock %p", VAR_11, VAR_9);

 FUNC_5(&VAR_11->timer, VAR_7, 0);

 FUNC_1(&VAR_11->dlcs);
 VAR_11->state = VAR_10;
 VAR_11->sock = VAR_9;

 VAR_11->mtu = VAR_4;
 VAR_11->cfc = VAR_6 ? VAR_2 : VAR_3;



 if (VAR_10 != VAR_0)
  if (!FUNC_6(VAR_5)) {
   FUNC_2(VAR_11);
   return ((void*)0);
  }

 FUNC_4(&VAR_11->list, &VAR_8);

 return VAR_11;
}
