
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_2__ {int flags; int base_oloc; int base_oid; } ;
struct ceph_osd_linger_request {size_t* preply_len; int reg_req; TYPE_1__ t; struct page*** preply_pages; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_3 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ceph_osd_linger_request*) ;
 struct page** FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct ceph_object_id*) ;
 int FUNC_6 (int *,struct ceph_object_locator*) ;
 int FUNC_7 (int ,struct page**,int ,int ,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,struct ceph_osd_linger_request*,int) ;
 struct ceph_osd_linger_request* FUNC_10 (struct ceph_osd_client*) ;
 int FUNC_11 (struct ceph_osd_linger_request*) ;
 int FUNC_12 (struct ceph_osd_linger_request*) ;
 int FUNC_13 (struct ceph_osd_linger_request*) ;
 int FUNC_14 (struct ceph_osd_linger_request*) ;
 int FUNC_15 (struct ceph_osd_linger_request*) ;
 int VAR_4 ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int,int ,void*,int ) ;
 int VAR_5 ;

int FUNC_18(struct ceph_osd_client *VAR_6,
       struct ceph_object_id *VAR_7,
       struct ceph_object_locator *VAR_8,
       void *VAR_9,
       u32 VAR_10,
       u32 VAR_11,
       struct page ***VAR_12,
       size_t *VAR_13)
{
 struct ceph_osd_linger_request *VAR_14;
 struct page **VAR_15;
 int VAR_16;

 FUNC_2(!VAR_11);
 if (VAR_12) {
  *VAR_12 = ((void*)0);
  *VAR_13 = 0;
 }

 VAR_14 = FUNC_10(VAR_6);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->preply_pages = VAR_12;
 VAR_14->preply_len = VAR_13;

 FUNC_5(&VAR_14->t.base_oid, VAR_7);
 FUNC_6(&VAR_14->t.base_oloc, VAR_8);
 VAR_14->t.flags = VAR_0;

 VAR_14->reg_req = FUNC_3(VAR_14);
 if (!VAR_14->reg_req) {
  VAR_16 = -VAR_1;
  goto out_put_lreq;
 }





 VAR_16 = FUNC_17(VAR_14->reg_req, 0, 0, 1, VAR_11,
         VAR_9, VAR_10);
 if (VAR_16)
  goto out_put_lreq;


 VAR_15 = FUNC_4(1, VAR_2);
 if (FUNC_0(VAR_15)) {
  VAR_16 = FUNC_1(VAR_15);
  goto out_put_lreq;
 }
 FUNC_7(FUNC_16(VAR_14->reg_req, 0, VAR_4,
       VAR_5),
     VAR_15, VAR_3, 0, 0, 1);

 VAR_16 = FUNC_8(VAR_14->reg_req, VAR_2);
 if (VAR_16)
  goto out_put_lreq;

 FUNC_15(VAR_14);
 VAR_16 = FUNC_14(VAR_14);
 if (!VAR_16)
  VAR_16 = FUNC_12(VAR_14);
 else
  FUNC_9("lreq %p failed to initiate notify %d\n", VAR_14, VAR_16);

 FUNC_11(VAR_14);
out_put_lreq:
 FUNC_13(VAR_14);
 return VAR_16;
}
