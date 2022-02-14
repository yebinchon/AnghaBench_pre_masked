
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct ceph_connection {int peer_features; int last_keepalive_ack; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,struct timespec64*) ;
 int FUNC_1 (struct timespec64*) ;
 struct timespec64 FUNC_2 (int ,struct timespec64) ;
 scalar_t__ FUNC_3 (struct timespec64*,struct timespec64*) ;

bool FUNC_4(struct ceph_connection *VAR_1,
          unsigned long VAR_2)
{
 if (VAR_2 > 0 &&
     (VAR_1->peer_features & VAR_0)) {
  struct timespec64 VAR_3;
  struct timespec64 VAR_4;
  FUNC_1(&VAR_3);
  FUNC_0(VAR_2, &VAR_4);
  VAR_4 = FUNC_2(VAR_1->last_keepalive_ack, VAR_4);
  return FUNC_3(&VAR_3, &VAR_4) >= 0;
 }
 return 0;
}
