
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_poll_wait {int * wait_addr; int wait; } ;
struct p9_conn {int poll_pending_link; struct p9_poll_wait* poll_wait; } ;


 int FUNC_0 (struct p9_poll_wait*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct p9_conn *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->poll_wait); VAR_4++) {
  struct p9_poll_wait *VAR_5 = &VAR_2->poll_wait[VAR_4];

  if (VAR_5->wait_addr) {
   FUNC_3(VAR_5->wait_addr, &VAR_5->wait);
   VAR_5->wait_addr = ((void*)0);
  }
 }

 FUNC_4(&VAR_0, VAR_3);
 FUNC_2(&VAR_2->poll_pending_link);
 FUNC_5(&VAR_0, VAR_3);

 FUNC_1(&VAR_1);
}
