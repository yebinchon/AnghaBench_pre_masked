
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int curbuf; scalar_t__ nrbufs; struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t len; size_t offset; struct page* page; int * ops; } ;
struct page {int dummy; } ;
struct iov_iter {size_t count; size_t iov_offset; int idx; struct pipe_inode_info* pipe; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct pipe_inode_info*) ;
 int VAR_0 ;
 int FUNC_2 (struct iov_iter*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static size_t FUNC_4(struct page *VAR_1, size_t VAR_2, size_t VAR_3,
    struct iov_iter *VAR_4)
{
 struct pipe_inode_info *VAR_5 = VAR_4->pipe;
 struct pipe_buffer *VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (FUNC_3(VAR_3 > VAR_4->count))
  VAR_3 = VAR_4->count;

 if (FUNC_3(!VAR_3))
  return 0;

 if (!FUNC_2(VAR_4))
  return 0;

 VAR_7 = VAR_4->iov_offset;
 VAR_8 = VAR_4->idx;
 VAR_6 = &VAR_5->bufs[VAR_8];
 if (VAR_7) {
  if (VAR_2 == VAR_7 && VAR_6->page == VAR_1) {

   VAR_6->len += VAR_3;
   VAR_4->iov_offset += VAR_3;
   goto out;
  }
  VAR_8 = FUNC_1(VAR_8, VAR_5);
  VAR_6 = &VAR_5->bufs[VAR_8];
 }
 if (VAR_8 == VAR_5->curbuf && VAR_5->nrbufs)
  return 0;
 VAR_5->nrbufs++;
 VAR_6->ops = &VAR_0;
 FUNC_0(VAR_6->page = VAR_1);
 VAR_6->offset = VAR_2;
 VAR_6->len = VAR_3;
 VAR_4->iov_offset = VAR_2 + VAR_3;
 VAR_4->idx = VAR_8;
out:
 VAR_4->count -= VAR_3;
 return VAR_3;
}
