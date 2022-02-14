
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec64 {int dummy; } ;
struct page {int dummy; } ;
struct ceph_vino {int dummy; } ;
struct ceph_snap_context {int dummy; } ;
struct ceph_osd_request {struct timespec64 r_mtime; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_file_layout {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_osd_request*) ;
 struct ceph_osd_request* FUNC_2 (struct ceph_osd_client*,struct ceph_file_layout*,struct ceph_vino,int,int*,int ,int,int ,int ,struct ceph_snap_context*,int ,int,int) ;
 int FUNC_3 (struct ceph_osd_request*) ;
 int FUNC_4 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_5 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct ceph_osd_request*,int ,struct page**,int,int,int,int) ;

int FUNC_8(struct ceph_osd_client *VAR_3, struct ceph_vino VAR_4,
    struct ceph_file_layout *VAR_5,
    struct ceph_snap_context *VAR_6,
    u64 VAR_7, u64 VAR_8,
    u32 VAR_9, u64 VAR_10,
    struct timespec64 *VAR_11,
    struct page **VAR_12, int VAR_13)
{
 struct ceph_osd_request *VAR_14;
 int VAR_15 = 0;
 int VAR_16 = VAR_7 & ~VAR_2;

 VAR_14 = FUNC_2(VAR_3, VAR_5, VAR_4, VAR_7, &VAR_8, 0, 1,
        VAR_1, VAR_0,
        VAR_6, VAR_9, VAR_10,
        1);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);


 FUNC_7(VAR_14, 0, VAR_12, VAR_8, VAR_16,
    0, 0);
 FUNC_6("writepages %llu~%llu (%llu bytes)\n", VAR_7, VAR_8, VAR_8);

 VAR_14->r_mtime = *VAR_11;
 VAR_15 = FUNC_4(VAR_3, VAR_14, 1);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_3, VAR_14);

 FUNC_3(VAR_14);
 if (VAR_15 == 0)
  VAR_15 = VAR_8;
 FUNC_6("writepages result %d\n", VAR_15);
 return VAR_15;
}
