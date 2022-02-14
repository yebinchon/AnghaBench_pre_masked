
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int dummy; } ;
struct rfcomm_dlc {int dlci; int tx_queue; int state; struct rfcomm_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rfcomm_dlc*,int) ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_session*,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rfcomm_dlc *VAR_2)
{
 struct rfcomm_session *VAR_3 = VAR_2->session;

 VAR_2->state = VAR_0;
 if (FUNC_3(&VAR_2->tx_queue)) {
  FUNC_2(VAR_3, VAR_2->dlci);
  FUNC_0(VAR_2, VAR_1);
 } else {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, VAR_1 * 2);
 }
}
