
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int in_addr; } ;
struct TYPE_12__ {scalar_t__ nonce; int in_addr; } ;
struct ceph_connection {char* error_msg; TYPE_5__* msgr; TYPE_1__ peer_addr_for_me; TYPE_3__ actual_peer_addr; TYPE_3__ peer_addr; } ;
struct TYPE_11__ {TYPE_3__ addr; } ;
struct TYPE_13__ {TYPE_2__ inst; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 struct ceph_connection* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,struct ceph_connection*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (char*,struct ceph_connection*,int,struct ceph_connection*,int) ;
 scalar_t__ FUNC_10 (struct ceph_connection*) ;

__attribute__((used)) static int FUNC_11(struct ceph_connection *VAR_0)
{
 FUNC_4("process_banner on %p\n", VAR_0);

 if (FUNC_10(VAR_0) < 0)
  return -1;






 if (FUNC_7(&VAR_0->peer_addr, &VAR_0->actual_peer_addr,
     sizeof(VAR_0->peer_addr)) != 0 &&
     !(FUNC_0(&VAR_0->actual_peer_addr) &&
       VAR_0->actual_peer_addr.nonce == VAR_0->peer_addr.nonce)) {
  FUNC_9("wrong peer, want %s/%d, got %s/%d\n",
   FUNC_3(&VAR_0->peer_addr),
   (int)FUNC_6(VAR_0->peer_addr.nonce),
   FUNC_3(&VAR_0->actual_peer_addr),
   (int)FUNC_6(VAR_0->actual_peer_addr.nonce));
  VAR_0->error_msg = "wrong peer at address";
  return -1;
 }




 if (FUNC_0(&VAR_0->msgr->inst.addr)) {
  int VAR_1 = FUNC_1(&VAR_0->msgr->inst.addr);

  FUNC_8(&VAR_0->msgr->inst.addr.in_addr,
         &VAR_0->peer_addr_for_me.in_addr,
         sizeof(VAR_0->peer_addr_for_me.in_addr));
  FUNC_2(&VAR_0->msgr->inst.addr, VAR_1);
  FUNC_5(VAR_0->msgr);
  FUNC_4("process_banner learned my addr is %s\n",
       FUNC_3(&VAR_0->msgr->inst.addr));
 }

 return 0;
}
