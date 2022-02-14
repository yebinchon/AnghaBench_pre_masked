
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_messenger {int dummy; } ;
struct ceph_connection_operations {int dummy; } ;
struct ceph_connection {int state; int work; int out_sent; int out_queue; int mutex; struct ceph_messenger* msgr; struct ceph_connection_operations const* ops; void* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct ceph_connection*) ;
 int FUNC_3 (char*,struct ceph_connection*) ;
 int FUNC_4 (struct ceph_connection*,int ,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ceph_connection *VAR_2, void *VAR_3,
 const struct ceph_connection_operations *VAR_4,
 struct ceph_messenger *VAR_5)
{
 FUNC_3("con_init %p\n", VAR_2);
 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->private = VAR_3;
 VAR_2->ops = VAR_4;
 VAR_2->msgr = VAR_5;

 FUNC_2(VAR_2);

 FUNC_5(&VAR_2->mutex);
 FUNC_1(&VAR_2->out_queue);
 FUNC_1(&VAR_2->out_sent);
 FUNC_0(&VAR_2->work, VAR_1);

 VAR_2->state = VAR_0;
}
