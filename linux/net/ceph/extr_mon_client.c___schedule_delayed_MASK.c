
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_client {unsigned long hunt_mult; int delayed_work; scalar_t__ hunting; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ceph_mon_client *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->hunting)
  VAR_4 = VAR_0 * VAR_3->hunt_mult;
 else
  VAR_4 = VAR_1;

 FUNC_0("__schedule_delayed after %lu\n", VAR_4);
 FUNC_1(VAR_2, &VAR_3->delayed_work,
    FUNC_2(VAR_4));
}
