
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_msgpool {int pool; int front_len; int name; } ;
struct TYPE_4__ {int front_len; } ;
struct TYPE_3__ {int iov_len; } ;
struct ceph_msg {int kref; scalar_t__ num_data_items; scalar_t__ data_length; TYPE_2__ hdr; TYPE_1__ front; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct ceph_msg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ceph_msg*,int ) ;

void FUNC_4(struct ceph_msgpool *VAR_0, struct ceph_msg *VAR_1)
{
 FUNC_1("msgpool_put %s %p\n", VAR_0->name, VAR_1);


 VAR_1->front.iov_len = VAR_0->front_len;
 VAR_1->hdr.front_len = FUNC_0(VAR_0->front_len);

 VAR_1->data_length = 0;
 VAR_1->num_data_items = 0;

 FUNC_2(&VAR_1->kref);
 FUNC_3(VAR_1, VAR_0->pool);
}
