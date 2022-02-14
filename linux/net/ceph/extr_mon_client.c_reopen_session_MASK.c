
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_addr; } ;
struct ceph_mon_client {TYPE_1__ con; int cur_mon; int hunting; } ;


 int FUNC_0 (struct ceph_mon_client*) ;
 int FUNC_1 (struct ceph_mon_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ceph_mon_client *VAR_0)
{
 if (!VAR_0->hunting)
  FUNC_3("mon%d %s session lost, hunting for new mon\n",
      VAR_0->cur_mon, FUNC_2(&VAR_0->con.peer_addr));

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
