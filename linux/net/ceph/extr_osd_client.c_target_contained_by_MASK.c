
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request_target {int dummy; } ;
struct ceph_hobject_id {int dummy; } ;


 int FUNC_0 (struct ceph_hobject_id*,struct ceph_hobject_id const*) ;
 int FUNC_1 (struct ceph_hobject_id*,struct ceph_osd_request_target const*) ;

__attribute__((used)) static bool FUNC_2(const struct ceph_osd_request_target *VAR_0,
    const struct ceph_hobject_id *VAR_1,
    const struct ceph_hobject_id *VAR_2)
{
 struct ceph_hobject_id VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_0);
 VAR_4 = FUNC_0(&VAR_3, VAR_1);
 return !VAR_4 || (VAR_4 > 0 && FUNC_0(&VAR_3, VAR_2) < 0);
}
