
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {int have_key; } ;
struct ceph_auth_client {int dummy; } ;


 int FUNC_0 (struct ceph_x_ticket_handler*) ;
 struct ceph_x_ticket_handler* FUNC_1 (struct ceph_auth_client*,int) ;

__attribute__((used)) static void FUNC_2(struct ceph_auth_client *VAR_0, int VAR_1)
{
 struct ceph_x_ticket_handler *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_0(VAR_2))
  VAR_2->have_key = 0;
}
