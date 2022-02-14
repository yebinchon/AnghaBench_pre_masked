
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_request {scalar_t__ is_set; } ;
struct mbox_reply {int status; } ;
typedef int req ;
typedef int reply ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mbox_request*) ;
 int FUNC_2 (struct mbox_request*) ;
 int FUNC_3 (int ,struct mbox_request*,int) ;
 int FUNC_4 (int,struct mbox_reply*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 while (1) {
  struct mbox_request VAR_1;
  struct mbox_reply VAR_2;
  int VAR_3;

  VAR_3 = FUNC_3(0, &VAR_1, sizeof(VAR_1));
  if (VAR_3 != sizeof(VAR_1)) {
   FUNC_0(VAR_0, "invalid request %d\n", VAR_3);
   return;
  }

  VAR_2.status = VAR_1.is_set ?
   FUNC_2(&VAR_1) :
   FUNC_1(&VAR_1);

  VAR_3 = FUNC_4(1, &VAR_2, sizeof(VAR_2));
  if (VAR_3 != sizeof(VAR_2)) {
   FUNC_0(VAR_0, "reply failed %d\n", VAR_3);
   return;
  }
 }
}
