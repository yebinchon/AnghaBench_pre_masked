
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_client {scalar_t__ auth_err; int fsid; int auth_wq; int monc; TYPE_1__* options; } ;
struct TYPE_2__ {unsigned long mount_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_client*) ;
 int FUNC_1 (struct ceph_client*) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct ceph_client*) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ,int *) ;
 scalar_t__ FUNC_7 (int ,unsigned long) ;
 long FUNC_8 (int ,int,int ) ;

int FUNC_9(struct ceph_client *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2->options->mount_timeout;
 long VAR_5;


 VAR_5 = FUNC_2(&VAR_2->monc);
 if (VAR_5 < 0)
  return VAR_5;

 while (!FUNC_5(VAR_2)) {
  if (VAR_4 && FUNC_7(VAR_1, VAR_3 + VAR_4))
   return -VAR_0;


  FUNC_4("mount waiting for mon_map\n");
  VAR_5 = FUNC_8(VAR_2->auth_wq,
   FUNC_5(VAR_2) || (VAR_2->auth_err < 0),
   FUNC_3(VAR_4));
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_2->auth_err < 0)
   return VAR_2->auth_err;
 }

 FUNC_6("client%llu fsid %pU\n", FUNC_0(VAR_2),
  &VAR_2->fsid);
 FUNC_1(VAR_2);

 return 0;
}
