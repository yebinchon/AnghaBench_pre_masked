
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_info {int starting; int ticket_handlers; int secret; } ;
struct ceph_auth_client {int * ops; struct ceph_x_info* private; int protocol; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*,struct ceph_auth_client*) ;
 int FUNC_2 (struct ceph_x_info*) ;
 struct ceph_x_info* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct ceph_auth_client *VAR_6)
{
 struct ceph_x_info *VAR_7;
 int VAR_8;

 FUNC_1("ceph_x_init %p\n", VAR_6);
 VAR_8 = -VAR_2;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  goto out;

 VAR_8 = -VAR_1;
 if (!VAR_6->key) {
  FUNC_4("no secret set (for auth_x protocol)\n");
  goto out_nomem;
 }

 VAR_8 = FUNC_0(&VAR_7->secret, VAR_6->key);
 if (VAR_8 < 0) {
  FUNC_4("cannot clone key: %d\n", VAR_8);
  goto out_nomem;
 }

 VAR_7->starting = 1;
 VAR_7->ticket_handlers = VAR_4;

 VAR_6->protocol = VAR_0;
 VAR_6->private = VAR_7;
 VAR_6->ops = &VAR_5;
 return 0;

out_nomem:
 FUNC_2(VAR_7);
out:
 return VAR_8;
}
