
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct ceph_msg_data_cursor {int bvec_iter; TYPE_2__* data; } ;
struct bio_vec {size_t bv_offset; size_t bv_len; struct page* bv_page; } ;
struct TYPE_3__ {int bvecs; } ;
struct TYPE_4__ {TYPE_1__ bvec_pos; } ;


 struct bio_vec FUNC_0 (int ,int ) ;

__attribute__((used)) static struct page *FUNC_1(struct ceph_msg_data_cursor *VAR_0,
      size_t *VAR_1,
      size_t *VAR_2)
{
 struct bio_vec VAR_3 = FUNC_0(VAR_0->data->bvec_pos.bvecs,
        VAR_0->bvec_iter);

 *VAR_1 = VAR_3.bv_offset;
 *VAR_2 = VAR_3.bv_len;
 return VAR_3.bv_page;
}
