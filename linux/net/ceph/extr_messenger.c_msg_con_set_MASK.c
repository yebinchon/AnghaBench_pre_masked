
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg {struct ceph_connection* con; } ;
struct ceph_connection {TYPE_1__* ops; } ;
struct TYPE_2__ {struct ceph_connection* (* get ) (struct ceph_connection*) ;int (* put ) (struct ceph_connection*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_connection*) ;
 struct ceph_connection* FUNC_2 (struct ceph_connection*) ;

__attribute__((used)) static void FUNC_3(struct ceph_msg *VAR_0, struct ceph_connection *VAR_1)
{
 if (VAR_0->con)
  VAR_0->con->ops->put(VAR_0->con);

 VAR_0->con = VAR_1 ? VAR_1->ops->get(VAR_1) : ((void*)0);
 FUNC_0(VAR_0->con != VAR_1);
}
