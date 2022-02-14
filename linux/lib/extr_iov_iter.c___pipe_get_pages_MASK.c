
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {TYPE_1__* bufs; } ;
struct page {int dummy; } ;
struct iov_iter {struct pipe_inode_info* pipe; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int page; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct pipe_inode_info*) ;
 size_t FUNC_2 (struct iov_iter*,size_t,int*,size_t*) ;

__attribute__((used)) static inline ssize_t FUNC_3(struct iov_iter *VAR_2,
    size_t VAR_3,
    struct page **VAR_4,
    int VAR_5,
    size_t *VAR_6)
{
 struct pipe_inode_info *VAR_7 = VAR_2->pipe;
 ssize_t VAR_8 = FUNC_2(VAR_2, VAR_3, &VAR_5, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_3 = VAR_8;
 VAR_8 += *VAR_6;
 while (VAR_8 > 0) {
  FUNC_0(*VAR_4++ = VAR_7->bufs[VAR_5].page);
  VAR_5 = FUNC_1(VAR_5, VAR_7);
  VAR_8 -= VAR_1;
 }

 return VAR_3;
}
