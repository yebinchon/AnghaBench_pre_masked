
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
struct ceph_osd_data {int dummy; } ;


 int FUNC_0 (struct ceph_osd_data*,struct page**,int ,int ,int,int) ;
 int VAR_0 ;
 struct ceph_osd_data* FUNC_1 (struct ceph_osd_request*,unsigned int,int ,int ) ;
 int VAR_1 ;

void FUNC_2(struct ceph_osd_request *VAR_2,
   unsigned int VAR_3, struct page **VAR_4, u64 VAR_5,
   u32 VAR_6, bool VAR_7, bool VAR_8)
{
 struct ceph_osd_data *VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_9, VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8);
}
