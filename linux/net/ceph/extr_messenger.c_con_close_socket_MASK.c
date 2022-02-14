
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ceph_connection {TYPE_2__* sock; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* shutdown ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_connection*,int ) ;
 int FUNC_1 (struct ceph_connection*) ;
 int FUNC_2 (char*,struct ceph_connection*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ceph_connection *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2("con_close_socket on %p sock %p\n", VAR_2, VAR_2->sock);
 if (VAR_2->sock) {
  VAR_3 = VAR_2->sock->ops->shutdown(VAR_2->sock, VAR_1);
  FUNC_3(VAR_2->sock);
  VAR_2->sock = ((void*)0);
 }







 FUNC_0(VAR_2, VAR_0);

 FUNC_1(VAR_2);
 return VAR_3;
}
