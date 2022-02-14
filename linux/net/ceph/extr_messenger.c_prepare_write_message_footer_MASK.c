
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ sig; } ;
struct TYPE_5__ {int flags; } ;
struct ceph_msg {int more_to_follow; TYPE_3__ footer; TYPE_2__ old_footer; } ;
struct ceph_connection {int peer_features; int out_msg_done; int out_more; TYPE_1__* ops; struct ceph_msg* out_msg; } ;
struct TYPE_4__ {int (* sign_message ) (struct ceph_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_connection*,int ,TYPE_3__*) ;
 int FUNC_1 (char*,struct ceph_connection*) ;
 int FUNC_2 (struct ceph_connection*) ;
 int FUNC_3 (struct ceph_msg*) ;

__attribute__((used)) static void FUNC_4(struct ceph_connection *VAR_2)
{
 struct ceph_msg *VAR_3 = VAR_2->out_msg;

 VAR_3->footer.flags |= VAR_1;

 FUNC_1("prepare_write_message_footer %p\n", VAR_2);
 FUNC_0(VAR_2, FUNC_2(VAR_2), &VAR_3->footer);
 if (VAR_2->peer_features & VAR_0) {
  if (VAR_2->ops->sign_message)
   VAR_2->ops->sign_message(VAR_3);
  else
   VAR_3->footer.sig = 0;
 } else {
  VAR_3->old_footer.flags = VAR_3->footer.flags;
 }
 VAR_2->out_more = VAR_3->more_to_follow;
 VAR_2->out_msg_done = 1;
}
