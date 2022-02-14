
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int dlcs; } ;
struct rfcomm_dlc {struct rfcomm_session* session; int list; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,struct rfcomm_session*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct rfcomm_session*) ;

__attribute__((used)) static void FUNC_4(struct rfcomm_session *VAR_0, struct rfcomm_dlc *VAR_1)
{
 FUNC_0("dlc %p session %p", VAR_1, VAR_0);

 FUNC_3(VAR_0);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->list, &VAR_0->dlcs);
 VAR_1->session = VAR_0;
}
