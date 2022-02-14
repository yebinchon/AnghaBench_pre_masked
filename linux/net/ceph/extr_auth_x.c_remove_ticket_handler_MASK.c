
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {scalar_t__ ticket_blob; int session_key; int node; int service; } ;
struct ceph_x_info {int ticket_handlers; } ;
struct ceph_auth_client {struct ceph_x_info* private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct ceph_x_ticket_handler*,int ) ;
 int FUNC_3 (struct ceph_x_ticket_handler*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct ceph_auth_client *VAR_0,
      struct ceph_x_ticket_handler *VAR_1)
{
 struct ceph_x_info *VAR_2 = VAR_0->private;

 FUNC_2("remove_ticket_handler %p %d\n", VAR_1, VAR_1->service);
 FUNC_4(&VAR_1->node, &VAR_2->ticket_handlers);
 FUNC_1(&VAR_1->session_key);
 if (VAR_1->ticket_blob)
  FUNC_0(VAR_1->ticket_blob);
 FUNC_3(VAR_1);
}
