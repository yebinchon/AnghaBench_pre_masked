
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int base_oid; int base_oloc; } ;
struct ceph_osd_request {TYPE_1__ r_t; int r_flags; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ceph_object_id*) ;
 int FUNC_1 (int *,struct ceph_object_locator*) ;
 int FUNC_2 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_3 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_4 (struct ceph_osd_request*) ;
 int FUNC_5 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_6 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_7 (struct ceph_osd_request*,int ,int ,struct ceph_object_id*,struct ceph_object_locator*,int ,int ,int ) ;

int FUNC_8(struct ceph_osd_client *VAR_3,
   u64 VAR_4, u64 VAR_5,
   struct ceph_object_id *VAR_6,
   struct ceph_object_locator *VAR_7,
   u32 VAR_8,
   struct ceph_object_id *VAR_9,
   struct ceph_object_locator *VAR_10,
   u32 VAR_11,
   u8 VAR_12)
{
 struct ceph_osd_request *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(VAR_3, ((void*)0), 1, 0, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->r_flags = VAR_0;

 FUNC_1(&VAR_13->r_t.base_oloc, VAR_10);
 FUNC_0(&VAR_13->r_t.base_oid, VAR_9);

 VAR_14 = FUNC_7(VAR_13, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8,
     VAR_11, VAR_12);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_2(VAR_13, VAR_2);
 if (VAR_14)
  goto out;

 FUNC_5(VAR_3, VAR_13, 0);
 VAR_14 = FUNC_6(VAR_3, VAR_13);

out:
 FUNC_4(VAR_13);
 return VAR_14;
}
