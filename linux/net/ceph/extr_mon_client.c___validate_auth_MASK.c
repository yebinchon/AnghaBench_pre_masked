
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_mon_client {TYPE_2__* m_auth; int auth; scalar_t__ pending_auth; } ;
struct TYPE_3__ {int iov_base; } ;
struct TYPE_4__ {int front_alloc_len; TYPE_1__ front; } ;


 int FUNC_0 (struct ceph_mon_client*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ceph_mon_client *VAR_0)
{
 int VAR_1;

 if (VAR_0->pending_auth)
  return 0;

 VAR_1 = FUNC_1(VAR_0->auth, VAR_0->m_auth->front.iov_base,
         VAR_0->m_auth->front_alloc_len);
 if (VAR_1 <= 0)
  return VAR_1;
 FUNC_0(VAR_0, VAR_1);
 return 0;
}
