
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct ceph_watch_item {int dummy; } ;
struct ceph_osd_request {TYPE_1__* r_ops; int r_flags; int r_base_oloc; int r_base_oid; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_2__ {int outdata_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_4 ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct ceph_object_id*) ;
 int FUNC_4 (int *,struct ceph_object_locator*) ;
 int FUNC_5 (int ,struct page**,int ,int ,int,int) ;
 int FUNC_6 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_7 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_8 (struct ceph_osd_request*) ;
 int FUNC_9 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_10 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_11 (void**,void* const,struct ceph_watch_item**,int *) ;
 int VAR_5 ;
 int FUNC_12 (struct ceph_osd_request*,int ,int ,int ) ;
 int FUNC_13 (struct ceph_osd_request*,int ,int ,int ) ;
 void* FUNC_14 (struct page*) ;
 int VAR_6 ;

int FUNC_15(struct ceph_osd_client *VAR_7,
       struct ceph_object_id *VAR_8,
       struct ceph_object_locator *VAR_9,
       struct ceph_watch_item **VAR_10,
       u32 *VAR_11)
{
 struct ceph_osd_request *VAR_12;
 struct page **VAR_13;
 int VAR_14;

 VAR_12 = FUNC_7(VAR_7, ((void*)0), 1, 0, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 FUNC_3(&VAR_12->r_base_oid, VAR_8);
 FUNC_4(&VAR_12->r_base_oloc, VAR_9);
 VAR_12->r_flags = VAR_0;

 VAR_13 = FUNC_2(1, VAR_3);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto out_put_req;
 }

 FUNC_13(VAR_12, 0, VAR_1, 0);
 FUNC_5(FUNC_12(VAR_12, 0, VAR_5,
       VAR_6),
     VAR_13, VAR_4, 0, 0, 1);

 VAR_14 = FUNC_6(VAR_12, VAR_3);
 if (VAR_14)
  goto out_put_req;

 FUNC_9(VAR_7, VAR_12, 0);
 VAR_14 = FUNC_10(VAR_7, VAR_12);
 if (VAR_14 >= 0) {
  void *VAR_15 = FUNC_14(VAR_13[0]);
  void *const VAR_16 = VAR_15 + VAR_12->r_ops[0].outdata_len;

  VAR_14 = FUNC_11(&VAR_15, VAR_16, VAR_10, VAR_11);
 }

out_put_req:
 FUNC_8(VAR_12);
 return VAR_14;
}
