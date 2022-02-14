
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct ceph_vino {int snap; int ino; } ;
struct ceph_osd_request {int dummy; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_file_layout {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int FUNC_1 (struct ceph_osd_request*) ;
 struct ceph_osd_request* FUNC_2 (struct ceph_osd_client*,struct ceph_file_layout*,struct ceph_vino,int ,int *,int ,int,int ,int ,int *,int ,int ,int) ;
 int FUNC_3 (struct ceph_osd_request*) ;
 int FUNC_4 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_5 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct ceph_osd_request*,int ,struct page**,int ,int,int,int) ;

int FUNC_8(struct ceph_osd_client *VAR_2,
   struct ceph_vino VAR_3, struct ceph_file_layout *VAR_4,
   u64 VAR_5, u64 *VAR_6,
   u32 VAR_7, u64 VAR_8,
   struct page **VAR_9, int VAR_10, int VAR_11)
{
 struct ceph_osd_request *VAR_12;
 int VAR_13 = 0;

 FUNC_6("readpages on ino %llx.%llx on %llu~%llu\n", VAR_3.ino,
      VAR_3.snap, VAR_5, *VAR_6);
 VAR_12 = FUNC_2(VAR_2, VAR_4, VAR_3, VAR_5, VAR_6, 0, 1,
        VAR_1, VAR_0,
        ((void*)0), VAR_7, VAR_8,
        0);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);


 FUNC_7(VAR_12, 0,
    VAR_9, *VAR_6, VAR_11, 0, 0);

 FUNC_6("readpages  final extent is %llu~%llu (%llu bytes align %d)\n",
      VAR_5, *VAR_6, *VAR_6, VAR_11);

 VAR_13 = FUNC_4(VAR_2, VAR_12, 0);
 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_2, VAR_12);

 FUNC_3(VAR_12);
 FUNC_6("readpages result %d\n", VAR_13);
 return VAR_13;
}
