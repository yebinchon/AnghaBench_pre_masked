
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iov_iter {TYPE_1__* pipe; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int curbuf; int buffers; } ;


 int FUNC_0 (size_t,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct iov_iter*,size_t,struct page**,int,size_t*) ;
 int FUNC_2 (struct iov_iter*,int*,size_t*) ;
 struct page** FUNC_3 (int) ;
 int FUNC_4 (struct page**) ;
 int FUNC_5 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_6(struct iov_iter *VAR_3,
     struct page ***VAR_4, size_t VAR_5,
     size_t *VAR_6)
{
 struct page **VAR_7;
 ssize_t VAR_8;
 int VAR_9;
 int VAR_10;

 if (!VAR_5)
  return 0;

 if (!FUNC_5(VAR_3))
  return -VAR_0;

 FUNC_2(VAR_3, &VAR_9, VAR_6);

 VAR_10 = ((VAR_3->pipe->curbuf - VAR_9 - 1) & (VAR_3->pipe->buffers - 1)) + 1;
 VAR_8 = VAR_10 * VAR_2 - *VAR_6;
 if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;
 else
  VAR_10 = FUNC_0(VAR_5 + *VAR_6, VAR_2);
 VAR_7 = FUNC_3(VAR_10);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_7, VAR_9, VAR_6);
 if (VAR_8 > 0)
  *VAR_4 = VAR_7;
 else
  FUNC_4(VAR_7);
 return VAR_8;
}
