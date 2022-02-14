
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iov_iter {TYPE_1__* pipe; } ;
typedef int ssize_t ;
struct TYPE_2__ {int curbuf; int buffers; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iov_iter*,size_t,struct page**,int,size_t*) ;
 int FUNC_1 (struct iov_iter*,int*,size_t*) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_4(struct iov_iter *VAR_2,
     struct page **VAR_3, size_t VAR_4, unsigned VAR_5,
     size_t *VAR_6)
{
 unsigned VAR_7;
 size_t VAR_8;
 int VAR_9;

 if (!VAR_4)
  return 0;

 if (!FUNC_3(VAR_2))
  return -VAR_0;

 FUNC_1(VAR_2, &VAR_9, VAR_6);

 VAR_7 = ((VAR_2->pipe->curbuf - VAR_9 - 1) & (VAR_2->pipe->buffers - 1)) + 1;
 VAR_8 = FUNC_2(VAR_7,VAR_5) * VAR_1 - *VAR_6;

 return FUNC_0(VAR_2, FUNC_2(VAR_4, VAR_8), VAR_3, VAR_9, VAR_6);
}
