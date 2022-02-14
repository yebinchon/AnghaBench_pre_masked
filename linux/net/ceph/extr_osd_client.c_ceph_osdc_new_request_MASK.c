
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct ceph_vino {int snap; int ino; } ;
struct ceph_snap_context {int dummy; } ;
struct TYPE_2__ {int pool_ns; int pool; } ;
struct ceph_osd_request {int r_flags; unsigned long long r_data_offset; int r_snapid; int r_base_oid; TYPE_1__ r_base_oloc; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_file_layout {int object_size; int pool_ns; int pool_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ceph_osd_request* FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct ceph_osd_request*,int ,int,int ) ;
 int FUNC_3 (struct ceph_file_layout*,unsigned long long,unsigned long long*,unsigned long long*,unsigned long long*,unsigned long long*) ;
 int FUNC_4 (int *,char*,int ,unsigned long long) ;
 int FUNC_5 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_6 (struct ceph_osd_client*,struct ceph_snap_context*,int,int,int ) ;
 int FUNC_7 (struct ceph_osd_request*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ceph_osd_request*,unsigned int,int,unsigned long long,unsigned long long,unsigned long long,int) ;
 int FUNC_10 (struct ceph_osd_request*,unsigned int,int,int ) ;

struct ceph_osd_request *FUNC_11(struct ceph_osd_client *VAR_9,
            struct ceph_file_layout *VAR_10,
            struct ceph_vino VAR_11,
            u64 VAR_12, u64 *VAR_13,
            unsigned int VAR_14, int VAR_15,
            int VAR_16, int VAR_17,
            struct ceph_snap_context *VAR_18,
            u32 VAR_19,
            u64 VAR_20,
            bool VAR_21)
{
 struct ceph_osd_request *VAR_22;
 u64 VAR_23 = 0;
 u64 VAR_24 = 0;
 u64 VAR_25 = 0;
 int VAR_26;

 FUNC_0(VAR_16 != VAR_3 && VAR_16 != VAR_5 &&
        VAR_16 != VAR_6 && VAR_16 != VAR_4 &&
        VAR_16 != VAR_1 && VAR_16 != VAR_2);

 VAR_22 = FUNC_6(VAR_9, VAR_18, VAR_15, VAR_21,
     VAR_8);
 if (!VAR_22) {
  VAR_26 = -VAR_7;
  goto fail;
 }


 VAR_26 = FUNC_3(VAR_10, VAR_12, VAR_13, &VAR_23, &VAR_24, &VAR_25);
 if (VAR_26)
  goto fail;

 if (VAR_16 == VAR_1 || VAR_16 == VAR_2) {
  FUNC_10(VAR_22, VAR_14, VAR_16, 0);
 } else {
  u32 VAR_27 = VAR_10->object_size;
  u32 VAR_28 = VAR_12 - VAR_24;
  if (!(VAR_19 == 1 && VAR_20 == -1ULL)) {
   if (VAR_20 <= VAR_28) {
    VAR_20 = 0;
   } else {
    VAR_20 -= VAR_28;
    if (VAR_20 > VAR_27)
     VAR_20 = VAR_27;
   }
  }
  FUNC_9(VAR_22, VAR_14, VAR_16, VAR_24, VAR_25,
           VAR_20, VAR_19);
 }

 VAR_22->r_flags = VAR_17;
 VAR_22->r_base_oloc.pool = VAR_10->pool_id;
 VAR_22->r_base_oloc.pool_ns = FUNC_8(VAR_10->pool_ns);
 FUNC_4(&VAR_22->r_base_oid, "%llx.%08llx", VAR_11.ino, VAR_23);

 VAR_22->r_snapid = VAR_11.snap;
 if (VAR_17 & VAR_0)
  VAR_22->r_data_offset = VAR_12;

 if (VAR_15 > 1)





  VAR_26 = FUNC_2(VAR_22, VAR_8, VAR_15, 0);
 else
  VAR_26 = FUNC_5(VAR_22, VAR_8);
 if (VAR_26)
  goto fail;

 return VAR_22;

fail:
 FUNC_7(VAR_22);
 return FUNC_1(VAR_26);
}
