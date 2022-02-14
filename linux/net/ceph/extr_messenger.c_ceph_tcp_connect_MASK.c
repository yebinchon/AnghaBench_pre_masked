
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {struct sockaddr_storage in_addr; } ;
struct ceph_connection {struct socket* sock; TYPE_3__* msgr; TYPE_4__ peer_addr; } ;
typedef int ss ;
typedef int optval ;
struct TYPE_7__ {int net; } ;
struct TYPE_6__ {int sk_state; int sk_lock; int sk_allocation; } ;
struct TYPE_5__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 int FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ceph_connection*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct socket*,int ,int ,char*,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct socket*,struct ceph_connection*) ;
 int FUNC_13 (int ,int ,int ,int ,struct socket**) ;
 int FUNC_14 (struct socket*) ;
 int VAR_7 ;
 int FUNC_15 (struct socket*,struct sockaddr*,int,int ) ;

__attribute__((used)) static int FUNC_16(struct ceph_connection *VAR_8)
{
 struct sockaddr_storage VAR_9 = VAR_8->peer_addr.in_addr;
 struct socket *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_0(VAR_8->sock);


 VAR_11 = FUNC_9();
 VAR_12 = FUNC_13(FUNC_11(&VAR_8->msgr->net), VAR_9.ss_family,
          VAR_4, VAR_2, &VAR_10);
 FUNC_8(VAR_11);
 if (VAR_12)
  return VAR_12;
 VAR_10->sk->sk_allocation = VAR_1;





 FUNC_12(VAR_10, VAR_8);

 FUNC_4("connect %s\n", FUNC_1(&VAR_8->peer_addr));

 FUNC_3(VAR_8);
 VAR_12 = VAR_10->ops->connect(VAR_10, (struct sockaddr *)&VAR_9, sizeof(VAR_9),
     VAR_3);
 if (VAR_12 == -VAR_0) {
  FUNC_4("connect %s EINPROGRESS sk_state = %u\n",
       FUNC_1(&VAR_8->peer_addr),
       VAR_10->sk->sk_state);
 } else if (VAR_12 < 0) {
  FUNC_10("connect %s error %d\n",
         FUNC_1(&VAR_8->peer_addr), VAR_12);
  FUNC_14(VAR_10);
  return VAR_12;
 }

 if (FUNC_2(FUNC_5(VAR_8->msgr), VAR_6)) {
  int VAR_13 = 1;

  VAR_12 = FUNC_6(VAR_10, VAR_5, VAR_6,
     (char *)&VAR_13, sizeof(VAR_13));
  if (VAR_12)
   FUNC_10("kernel_setsockopt(TCP_NODELAY) failed: %d",
          VAR_12);
 }

 VAR_8->sock = VAR_10;
 return 0;
}
