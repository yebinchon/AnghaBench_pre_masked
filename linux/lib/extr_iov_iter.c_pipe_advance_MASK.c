
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t offset; size_t len; } ;
struct iov_iter {size_t count; size_t iov_offset; int idx; struct pipe_inode_info* pipe; } ;


 int FUNC_0 (int,struct pipe_inode_info*) ;
 int FUNC_1 (struct iov_iter*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct iov_iter *VAR_0, size_t VAR_1)
{
 struct pipe_inode_info *VAR_2 = VAR_0->pipe;
 if (FUNC_2(VAR_0->count < VAR_1))
  VAR_1 = VAR_0->count;
 if (VAR_1) {
  struct pipe_buffer *VAR_3;
  size_t VAR_4 = VAR_0->iov_offset, VAR_5 = VAR_1;
  int VAR_6 = VAR_0->idx;
  if (VAR_4)
   VAR_5 += VAR_4 - VAR_2->bufs[VAR_6].offset;
  while (1) {
   VAR_3 = &VAR_2->bufs[VAR_6];
   if (VAR_5 <= VAR_3->len)
    break;
   VAR_5 -= VAR_3->len;
   VAR_6 = FUNC_0(VAR_6, VAR_2);
  }
  VAR_0->idx = VAR_6;
  VAR_0->iov_offset = VAR_3->offset + VAR_5;
 }
 VAR_0->count -= VAR_1;

 FUNC_1(VAR_0);
}
