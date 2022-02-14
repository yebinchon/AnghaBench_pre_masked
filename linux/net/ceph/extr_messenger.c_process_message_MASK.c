
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int data_len; int front_len; int type; TYPE_3__ src; int seq; } ;
struct ceph_msg {TYPE_1__ hdr; struct ceph_connection* con; } ;
struct ceph_connection {int mutex; TYPE_2__* ops; int in_data_crc; int in_middle_crc; int in_front_crc; int in_seq; TYPE_3__ peer_name; struct ceph_msg* in_msg; } ;
struct TYPE_5__ {int (* dispatch ) (struct ceph_connection*,struct ceph_msg*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct ceph_msg*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ceph_connection*,struct ceph_msg*) ;

__attribute__((used)) static void FUNC_10(struct ceph_connection *VAR_0)
{
 struct ceph_msg *VAR_1 = VAR_0->in_msg;

 FUNC_0(VAR_0->in_msg->con != VAR_0);
 VAR_0->in_msg = ((void*)0);


 if (VAR_0->peer_name.type == 0)
  VAR_0->peer_name = VAR_1->hdr.src;

 VAR_0->in_seq++;
 FUNC_8(&VAR_0->mutex);

 FUNC_3("===== %p %llu from %s%lld %d=%s len %d+%d (%u %u %u) =====\n",
      VAR_1, FUNC_6(VAR_1->hdr.seq),
      FUNC_1(VAR_1->hdr.src),
      FUNC_4(VAR_1->hdr.type),
      FUNC_2(FUNC_4(VAR_1->hdr.type)),
      FUNC_5(VAR_1->hdr.front_len),
      FUNC_5(VAR_1->hdr.data_len),
      VAR_0->in_front_crc, VAR_0->in_middle_crc, VAR_0->in_data_crc);
 VAR_0->ops->dispatch(VAR_0, VAR_1);

 FUNC_7(&VAR_0->mutex);
}
