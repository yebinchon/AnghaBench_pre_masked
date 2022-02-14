
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_bvec_iter {int dummy; } ;
struct ceph_osd_data {int num_bvecs; struct ceph_bvec_iter bvec_pos; int type; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ceph_osd_data *VAR_1,
         struct ceph_bvec_iter *VAR_2,
         u32 VAR_3)
{
 VAR_1->type = VAR_0;
 VAR_1->bvec_pos = *VAR_2;
 VAR_1->num_bvecs = VAR_3;
}
