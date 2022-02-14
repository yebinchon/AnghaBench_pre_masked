
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int curbuf; TYPE_1__* bufs; int nrbufs; } ;
struct page {int dummy; } ;
struct iov_iter {size_t count; struct pipe_inode_info* pipe; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {size_t len; scalar_t__ offset; struct page* page; int * ops; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct iov_iter*,int*,size_t*) ;
 int VAR_2 ;
 int FUNC_2 (int,struct pipe_inode_info*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static size_t FUNC_4(struct iov_iter *VAR_3, size_t VAR_4,
   int *VAR_5, size_t *VAR_6)
{
 struct pipe_inode_info *VAR_7 = VAR_3->pipe;
 size_t VAR_8;
 int VAR_9;
 ssize_t VAR_10;

 if (FUNC_3(VAR_4 > VAR_3->count))
  VAR_4 = VAR_3->count;
 if (FUNC_3(!VAR_4))
  return 0;

 VAR_10 = VAR_4;
 FUNC_1(VAR_3, &VAR_9, &VAR_8);
 *VAR_5 = VAR_9;
 *VAR_6 = VAR_8;
 if (VAR_8) {
  VAR_10 -= VAR_1 - VAR_8;
  if (VAR_10 <= 0) {
   VAR_7->bufs[VAR_9].len += VAR_4;
   return VAR_4;
  }
  VAR_7->bufs[VAR_9].len = VAR_1;
  VAR_9 = FUNC_2(VAR_9, VAR_7);
 }
 while (VAR_9 != VAR_7->curbuf || !VAR_7->nrbufs) {
  struct page *VAR_11 = FUNC_0(VAR_0);
  if (!VAR_11)
   break;
  VAR_7->nrbufs++;
  VAR_7->bufs[VAR_9].ops = &VAR_2;
  VAR_7->bufs[VAR_9].page = VAR_11;
  VAR_7->bufs[VAR_9].offset = 0;
  if (VAR_10 <= VAR_1) {
   VAR_7->bufs[VAR_9].len = VAR_10;
   return VAR_4;
  }
  VAR_7->bufs[VAR_9].len = VAR_1;
  VAR_10 -= VAR_1;
  VAR_9 = FUNC_2(VAR_9, VAR_7);
 }
 return VAR_4 - VAR_10;
}
