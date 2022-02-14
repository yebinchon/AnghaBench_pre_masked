
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ceph_osd_request {unsigned int r_flags; TYPE_1__* r_ops; int r_base_oloc; int r_base_oid; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_2__ {int rval; size_t outdata_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,struct ceph_object_id*) ;
 int FUNC_1 (int *,struct ceph_object_locator*) ;
 int FUNC_2 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_3 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_4 (struct ceph_osd_request*) ;
 int FUNC_5 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_6 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_7 (struct ceph_osd_request*,int ,char const*,char const*) ;
 int FUNC_8 (struct ceph_osd_request*,int ,struct page**,size_t,int ,int,int) ;
 int FUNC_9 (struct ceph_osd_request*,int ,struct page**,size_t,int ,int,int) ;

int FUNC_10(struct ceph_osd_client *VAR_4,
     struct ceph_object_id *VAR_5,
     struct ceph_object_locator *VAR_6,
     const char *VAR_7, const char *VAR_8,
     unsigned int VAR_9,
     struct page *VAR_10, size_t VAR_11,
     struct page **VAR_12, size_t *VAR_13)
{
 struct ceph_osd_request *VAR_14;
 int VAR_15;

 if (VAR_11 > VAR_3)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_4, ((void*)0), 1, 0, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_0(&VAR_14->r_base_oid, VAR_5);
 FUNC_1(&VAR_14->r_base_oloc, VAR_6);
 VAR_14->r_flags = VAR_9;

 VAR_15 = FUNC_7(VAR_14, 0, VAR_7, VAR_8);
 if (VAR_15)
  goto out_put_req;

 if (VAR_10)
  FUNC_8(VAR_14, 0, &VAR_10, VAR_11,
        0, 0, 0);
 if (VAR_12)
  FUNC_9(VAR_14, 0, VAR_12,
         *VAR_13, 0, 0, 0);

 VAR_15 = FUNC_2(VAR_14, VAR_2);
 if (VAR_15)
  goto out_put_req;

 FUNC_5(VAR_4, VAR_14, 0);
 VAR_15 = FUNC_6(VAR_4, VAR_14);
 if (VAR_15 >= 0) {
  VAR_15 = VAR_14->r_ops[0].rval;
  if (VAR_12)
   *VAR_13 = VAR_14->r_ops[0].outdata_len;
 }

out_put_req:
 FUNC_4(VAR_14);
 return VAR_15;
}
