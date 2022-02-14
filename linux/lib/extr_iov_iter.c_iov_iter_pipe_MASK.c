
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; int buffers; int curbuf; } ;
struct iov_iter {unsigned int type; int idx; size_t count; int start_idx; scalar_t__ iov_offset; struct pipe_inode_info* pipe; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(struct iov_iter *VAR_2, unsigned int VAR_3,
   struct pipe_inode_info *VAR_4,
   size_t VAR_5)
{
 FUNC_0(VAR_3 != VAR_1);
 FUNC_1(VAR_4->nrbufs == VAR_4->buffers);
 VAR_2->type = VAR_0 | VAR_1;
 VAR_2->pipe = VAR_4;
 VAR_2->idx = (VAR_4->curbuf + VAR_4->nrbufs) & (VAR_4->buffers - 1);
 VAR_2->iov_offset = 0;
 VAR_2->count = VAR_5;
 VAR_2->start_idx = VAR_2->idx;
}
