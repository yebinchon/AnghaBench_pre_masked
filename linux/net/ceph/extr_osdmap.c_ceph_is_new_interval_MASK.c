
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_pg {int dummy; } ;
struct ceph_osds {int dummy; } ;


 scalar_t__ FUNC_0 (struct ceph_pg const*,int ,int ) ;
 int FUNC_1 (struct ceph_osds const*,struct ceph_osds const*) ;

bool FUNC_2(const struct ceph_osds *VAR_0,
     const struct ceph_osds *VAR_1,
     const struct ceph_osds *VAR_2,
     const struct ceph_osds *VAR_3,
     int VAR_4,
     int VAR_5,
     int VAR_6,
     int VAR_7,
     u32 VAR_8,
     u32 VAR_9,
     bool VAR_10,
     bool VAR_11,
     bool VAR_12,
     bool VAR_13,
     const struct ceph_pg *VAR_14)
{
 return !FUNC_1(VAR_0, VAR_1) ||
        !FUNC_1(VAR_2, VAR_3) ||
        VAR_4 != VAR_5 ||
        VAR_6 != VAR_7 ||
        FUNC_0(VAR_14, VAR_8, VAR_9) ||
        VAR_10 != VAR_11 ||
        VAR_12 != VAR_13;
}
