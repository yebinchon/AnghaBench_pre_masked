
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_x_authorizer {int dummy; } ;
struct TYPE_4__ {int flags; int sig; } ;
struct ceph_msg {TYPE_2__ footer; TYPE_1__* con; } ;
struct ceph_auth_handshake {scalar_t__ authorizer; } ;
typedef int __le64 ;
struct TYPE_3__ {int msgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_x_authorizer*,struct ceph_msg*,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ceph_auth_handshake *VAR_2,
          struct ceph_msg *VAR_3)
{
 __le64 VAR_4;
 int VAR_5;

 if (FUNC_1(FUNC_2(VAR_3->con->msgr), VAR_1))
  return 0;

 VAR_5 = FUNC_0((struct ceph_x_authorizer *)VAR_2->authorizer,
        VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->footer.sig = VAR_4;
 VAR_3->footer.flags |= VAR_0;
 return 0;
}
