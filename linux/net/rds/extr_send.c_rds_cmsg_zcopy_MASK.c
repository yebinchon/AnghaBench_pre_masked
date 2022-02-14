
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_sock {int dummy; } ;
struct TYPE_4__ {TYPE_1__* op_mmp_znotifier; } ;
struct rds_message {TYPE_2__ data; } ;
struct cmsghdr {scalar_t__ cmsg_len; } ;
struct TYPE_3__ {int z_cookie; } ;


 int * FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct rds_sock *VAR_1, struct rds_message *VAR_2,
     struct cmsghdr *VAR_3)
{
 u32 *VAR_4;

 if (VAR_3->cmsg_len < FUNC_1(sizeof(*VAR_4)) ||
     !VAR_2->data.op_mmp_znotifier)
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3);
 VAR_2->data.op_mmp_znotifier->z_cookie = *VAR_4;
 return 0;
}
