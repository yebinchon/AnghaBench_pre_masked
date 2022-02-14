
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_fsid {int dummy; } ;
struct ceph_client {int fsid; scalar_t__ have_fsid; } ;


 scalar_t__ FUNC_0 (int *,struct ceph_fsid*) ;
 int FUNC_1 (int *,struct ceph_fsid*,int) ;
 int FUNC_2 (char*,int *,struct ceph_fsid*) ;

int FUNC_3(struct ceph_client *VAR_0, struct ceph_fsid *VAR_1)
{
 if (VAR_0->have_fsid) {
  if (FUNC_0(&VAR_0->fsid, VAR_1)) {
   FUNC_2("bad fsid, had %pU got %pU",
          &VAR_0->fsid, VAR_1);
   return -1;
  }
 } else {
  FUNC_1(&VAR_0->fsid, VAR_1, sizeof(*VAR_1));
 }
 return 0;
}
