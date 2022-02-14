
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int mutex; scalar_t__ peer_global_seq; int state; int peer_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ceph_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_connection*) ;
 int FUNC_3 (struct ceph_connection*,int ) ;
 int FUNC_4 (char*,struct ceph_connection*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ceph_connection*) ;

void FUNC_8(struct ceph_connection *VAR_5)
{
 FUNC_5(&VAR_5->mutex);
 FUNC_4("con_close %p peer %s\n", VAR_5, FUNC_1(&VAR_5->peer_addr));
 VAR_5->state = VAR_4;

 FUNC_3(VAR_5, VAR_2);
 FUNC_3(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_0);

 FUNC_7(VAR_5);
 VAR_5->peer_global_seq = 0;
 FUNC_0(VAR_5);
 FUNC_2(VAR_5);
 FUNC_6(&VAR_5->mutex);
}
