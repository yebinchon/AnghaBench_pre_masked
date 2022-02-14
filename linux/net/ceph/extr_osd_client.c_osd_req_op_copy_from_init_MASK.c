
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {int osd_data; int src_fadvise_flags; int flags; void* src_version; void* snapid; } ;
struct ceph_osd_req_op {int indata_len; TYPE_1__ copy_from; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int name_len; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_2 ;
 int FUNC_1 (struct page**) ;
 struct ceph_osd_req_op* FUNC_2 (struct ceph_osd_request*,int ,int ,int ) ;
 struct page** FUNC_3 (int,int ) ;
 int FUNC_4 (void**,void*,int ,int ) ;
 int FUNC_5 (int *,struct page**,int,int ,int,int) ;
 int FUNC_6 (void**,void*,struct ceph_object_locator*) ;
 void* FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct ceph_osd_request *VAR_3,
         u64 VAR_4, u64 VAR_5,
         struct ceph_object_id *VAR_6,
         struct ceph_object_locator *VAR_7,
         u32 VAR_8,
         u32 VAR_9,
         u8 VAR_10)
{
 struct ceph_osd_req_op *VAR_11;
 struct page **VAR_12;
 void *VAR_13, *VAR_14;

 VAR_12 = FUNC_3(1, VAR_1);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = FUNC_2(VAR_3, 0, VAR_0, VAR_9);
 VAR_11->copy_from.snapid = VAR_4;
 VAR_11->copy_from.src_version = VAR_5;
 VAR_11->copy_from.flags = VAR_10;
 VAR_11->copy_from.src_fadvise_flags = VAR_8;

 VAR_13 = FUNC_7(VAR_12[0]);
 VAR_14 = VAR_13 + VAR_2;
 FUNC_4(&VAR_13, VAR_14, VAR_6->name, VAR_6->name_len);
 FUNC_6(&VAR_13, VAR_14, VAR_7);
 VAR_11->indata_len = VAR_2 - (VAR_14 - VAR_13);

 FUNC_5(&VAR_11->copy_from.osd_data, VAR_12,
     VAR_11->indata_len, 0, 0, 1);
 return 0;
}
