
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_8__ {scalar_t__ bi_bvec_done; } ;
struct ceph_msg_data_cursor {size_t resid; int last_piece; TYPE_3__ bvec_iter; TYPE_2__* data; } ;
struct bio_vec {int dummy; } ;
struct TYPE_6__ {struct bio_vec* bvecs; } ;
struct TYPE_7__ {TYPE_1__ bvec_pos; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bio_vec*,TYPE_3__*,size_t) ;
 size_t FUNC_2 (struct bio_vec*,TYPE_3__) ;
 struct page* FUNC_3 (struct bio_vec*,TYPE_3__) ;

__attribute__((used)) static bool FUNC_4(struct ceph_msg_data_cursor *VAR_0,
     size_t VAR_1)
{
 struct bio_vec *VAR_2 = VAR_0->data->bvec_pos.bvecs;
 struct page *VAR_3 = FUNC_3(VAR_2, VAR_0->bvec_iter);

 FUNC_0(VAR_1 > VAR_0->resid);
 FUNC_0(VAR_1 > FUNC_2(VAR_2, VAR_0->bvec_iter));
 VAR_0->resid -= VAR_1;
 FUNC_1(VAR_2, &VAR_0->bvec_iter, VAR_1);

 if (!VAR_0->resid) {
  FUNC_0(!VAR_0->last_piece);
  return 0;
 }

 if (!VAR_1 || (VAR_0->bvec_iter.bi_bvec_done &&
         VAR_3 == FUNC_3(VAR_2, VAR_0->bvec_iter)))
  return 0;

 FUNC_0(VAR_0->last_piece);
 FUNC_0(VAR_0->resid < FUNC_2(VAR_2, VAR_0->bvec_iter));
 VAR_0->last_piece =
     VAR_0->resid == FUNC_2(VAR_2, VAR_0->bvec_iter);
 return 1;
}
