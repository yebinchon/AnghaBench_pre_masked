
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int buffers; TYPE_1__* bufs; } ;
typedef struct iovec {size_t iov_len; } const iovec ;
struct iov_iter {size_t count; int idx; size_t iov_offset; int start_idx; struct iovec const* iov; int nr_segs; struct bio_vec const* bvec; struct pipe_inode_info* pipe; } ;
typedef struct bio_vec {size_t bv_len; } const bio_vec ;
struct TYPE_2__ {size_t offset; size_t len; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct iov_iter *VAR_1, size_t VAR_2)
{
 if (!VAR_2)
  return;
 if (FUNC_0(VAR_2 > VAR_0))
  return;
 VAR_1->count += VAR_2;
 if (FUNC_5(FUNC_3(VAR_1))) {
  struct pipe_inode_info *VAR_3 = VAR_1->pipe;
  int VAR_4 = VAR_1->idx;
  size_t VAR_5 = VAR_1->iov_offset;
  while (1) {
   size_t VAR_6 = VAR_5 - VAR_3->bufs[VAR_4].offset;
   if (VAR_2 < VAR_6) {
    VAR_5 -= VAR_2;
    break;
   }
   VAR_2 -= VAR_6;
   if (!VAR_2 && VAR_4 == VAR_1->start_idx) {
    VAR_5 = 0;
    break;
   }
   if (!VAR_4--)
    VAR_4 = VAR_3->buffers - 1;
   VAR_5 = VAR_3->bufs[VAR_4].offset + VAR_3->bufs[VAR_4].len;
  }
  VAR_1->iov_offset = VAR_5;
  VAR_1->idx = VAR_4;
  FUNC_4(VAR_1);
  return;
 }
 if (FUNC_5(FUNC_2(VAR_1)))
  return;
 if (VAR_2 <= VAR_1->iov_offset) {
  VAR_1->iov_offset -= VAR_2;
  return;
 }
 VAR_2 -= VAR_1->iov_offset;
 if (FUNC_1(VAR_1)) {
  const struct bio_vec *VAR_7 = VAR_1->bvec;
  while (1) {
   size_t VAR_8 = (--VAR_7)->bv_len;
   VAR_1->nr_segs++;
   if (VAR_2 <= VAR_8) {
    VAR_1->bvec = VAR_7;
    VAR_1->iov_offset = VAR_8 - VAR_2;
    return;
   }
   VAR_2 -= VAR_8;
  }
 } else {
  const struct iovec *VAR_9 = VAR_1->iov;
  while (1) {
   size_t VAR_10 = (--VAR_9)->iov_len;
   VAR_1->nr_segs++;
   if (VAR_2 <= VAR_10) {
    VAR_1->iov = VAR_9;
    VAR_1->iov_offset = VAR_10 - VAR_2;
    return;
   }
   VAR_2 -= VAR_10;
  }
 }
}
