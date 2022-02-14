
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int buffers; TYPE_1__* bufs; } ;
struct iov_iter {size_t iov_offset; int idx; struct pipe_inode_info* pipe; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ len; } ;


 int FUNC_0 (int,struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(struct iov_iter *VAR_0)
{
 struct pipe_inode_info *VAR_1 = VAR_0->pipe;
 if (VAR_1->nrbufs) {
  size_t VAR_2 = VAR_0->iov_offset;
  int VAR_3 = VAR_0->idx;
  int VAR_4 = (VAR_3 - VAR_1->curbuf) & (VAR_1->buffers - 1);
  if (VAR_2) {
   VAR_1->bufs[VAR_3].len = VAR_2 - VAR_1->bufs[VAR_3].offset;
   VAR_3 = FUNC_0(VAR_3, VAR_1);
   VAR_4++;
  }
  while (VAR_1->nrbufs > VAR_4) {
   FUNC_1(VAR_1, &VAR_1->bufs[VAR_3]);
   VAR_3 = FUNC_0(VAR_3, VAR_1);
   VAR_1->nrbufs--;
  }
 }
}
