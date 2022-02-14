
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bi_size; } ;
struct ceph_bvec_iter {TYPE_1__ iter; } ;
struct ceph_msg_data {struct ceph_bvec_iter bvec_pos; int type; } ;
struct ceph_msg {int data_length; } ;


 int VAR_0 ;
 struct ceph_msg_data* FUNC_0 (struct ceph_msg*) ;

void FUNC_1(struct ceph_msg *VAR_1,
        struct ceph_bvec_iter *VAR_2)
{
 struct ceph_msg_data *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_3->type = VAR_0;
 VAR_3->bvec_pos = *VAR_2;

 VAR_1->data_length += VAR_2->iter.bi_size;
}
