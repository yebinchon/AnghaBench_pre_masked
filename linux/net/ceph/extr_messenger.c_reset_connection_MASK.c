
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_connection {scalar_t__ out_skip; scalar_t__ in_seq_acked; scalar_t__ in_seq; TYPE_1__* out_msg; scalar_t__ out_seq; scalar_t__ connect_seq; TYPE_1__* in_msg; int out_sent; int out_queue; } ;
struct TYPE_2__ {struct ceph_connection* con; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct ceph_connection*) ;

__attribute__((used)) static void FUNC_4(struct ceph_connection *VAR_0)
{


 FUNC_3("reset_connection %p\n", VAR_0);
 FUNC_2(&VAR_0->out_queue);
 FUNC_2(&VAR_0->out_sent);

 if (VAR_0->in_msg) {
  FUNC_0(VAR_0->in_msg->con != VAR_0);
  FUNC_1(VAR_0->in_msg);
  VAR_0->in_msg = ((void*)0);
 }

 VAR_0->connect_seq = 0;
 VAR_0->out_seq = 0;
 if (VAR_0->out_msg) {
  FUNC_0(VAR_0->out_msg->con != VAR_0);
  FUNC_1(VAR_0->out_msg);
  VAR_0->out_msg = ((void*)0);
 }
 VAR_0->in_seq = 0;
 VAR_0->in_seq_acked = 0;

 VAR_0->out_skip = 0;
}
