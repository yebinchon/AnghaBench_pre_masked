
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ceph_osd_request {int r_flags; int r_base_oloc; int r_base_oid; } ;
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
 int FUNC_7 (struct ceph_osd_request*,int ,int ,int ,void*,int ) ;

int FUNC_8(struct ceph_osd_client *VAR_3,
    struct ceph_object_id *VAR_4,
    struct ceph_object_locator *VAR_5,
    u64 VAR_6,
    u64 VAR_7,
    void *VAR_8,
    u32 VAR_9)
{
 struct ceph_osd_request *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_3, ((void*)0), 1, 0, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_0(&VAR_10->r_base_oid, VAR_4);
 FUNC_1(&VAR_10->r_base_oloc, VAR_5);
 VAR_10->r_flags = VAR_0;

 VAR_11 = FUNC_7(VAR_10, 0, VAR_6, VAR_7, VAR_8,
      VAR_9);
 if (VAR_11)
  goto out_put_req;

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 if (VAR_11)
  goto out_put_req;

 FUNC_5(VAR_3, VAR_10, 0);
 VAR_11 = FUNC_6(VAR_3, VAR_10);

out_put_req:
 FUNC_4(VAR_10);
 return VAR_11;
}
