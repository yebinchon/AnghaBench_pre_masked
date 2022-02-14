
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct ceph_locker* cookie; } ;
struct ceph_locker {TYPE_1__ id; } ;


 int FUNC_0 (struct ceph_locker*) ;

void FUNC_1(struct ceph_locker *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2].id.cookie);
 FUNC_0(VAR_0);
}
