
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {scalar_t__ secret_id; } ;
struct ceph_x_authorizer {scalar_t__ secret_id; int service; } ;
struct ceph_auth_handshake {scalar_t__ authorizer; } ;
struct ceph_auth_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct ceph_x_ticket_handler*) ;
 int FUNC_1 (struct ceph_x_ticket_handler*) ;
 int FUNC_2 (struct ceph_auth_client*,struct ceph_x_ticket_handler*,struct ceph_x_authorizer*) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;
 struct ceph_x_ticket_handler* FUNC_4 (struct ceph_auth_client*,int) ;

__attribute__((used)) static int FUNC_5(
 struct ceph_auth_client *VAR_0, int VAR_1,
 struct ceph_auth_handshake *VAR_2)
{
 struct ceph_x_authorizer *VAR_3;
 struct ceph_x_ticket_handler *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = (struct ceph_x_authorizer *)VAR_2->authorizer;
 if (VAR_3->secret_id < VAR_4->secret_id) {
  FUNC_3("ceph_x_update_authorizer service %u secret %llu < %llu\n",
       VAR_3->service, VAR_3->secret_id, VAR_4->secret_id);
  return FUNC_2(VAR_0, VAR_4, VAR_3);
 }
 return 0;
}
