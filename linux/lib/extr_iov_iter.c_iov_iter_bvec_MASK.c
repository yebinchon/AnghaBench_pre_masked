
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {unsigned int type; unsigned long nr_segs; size_t count; scalar_t__ iov_offset; struct bio_vec const* bvec; } ;
struct bio_vec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;

void FUNC_1(struct iov_iter *VAR_3, unsigned int VAR_4,
   const struct bio_vec *VAR_5, unsigned long VAR_6,
   size_t VAR_7)
{
 FUNC_0(VAR_4 & ~(VAR_1 | VAR_2));
 VAR_3->type = VAR_0 | (VAR_4 & (VAR_1 | VAR_2));
 VAR_3->bvec = VAR_5;
 VAR_3->nr_segs = VAR_6;
 VAR_3->iov_offset = 0;
 VAR_3->count = VAR_7;
}
