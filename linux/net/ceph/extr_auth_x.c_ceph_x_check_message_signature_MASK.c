
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_x_authorizer {int dummy; } ;
struct TYPE_4__ {scalar_t__ sig; int flags; } ;
struct ceph_msg {TYPE_2__ footer; TYPE_1__* con; } ;
struct ceph_auth_handshake {scalar_t__ authorizer; } ;
typedef scalar_t__ __le64 ;
struct TYPE_3__ {int msgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_x_authorizer*,struct ceph_msg*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,struct ceph_msg*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_auth_handshake *VAR_3,
       struct ceph_msg *VAR_4)
{
 __le64 VAR_5;
 int VAR_6;

 if (FUNC_1(FUNC_3(VAR_4->con->msgr), VAR_2))
  return 0;

 VAR_6 = FUNC_0((struct ceph_x_authorizer *)VAR_3->authorizer,
        VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_5 == VAR_4->footer.sig)
  return 0;
 if (VAR_4->footer.flags & VAR_0)
  FUNC_2("ceph_x_check_message_signature %p has signature %llx "
       "expect %llx\n", VAR_4, VAR_4->footer.sig, VAR_5);
 else
  FUNC_2("ceph_x_check_message_signature %p sender did not set "
       "CEPH_MSG_FOOTER_SIGNED\n", VAR_4);
 return -VAR_1;
}
