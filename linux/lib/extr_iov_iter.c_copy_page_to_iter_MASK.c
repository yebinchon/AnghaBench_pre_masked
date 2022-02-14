
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iov_iter {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct page*,size_t,size_t,struct iov_iter*) ;
 size_t FUNC_1 (struct page*,size_t,size_t,struct iov_iter*) ;
 size_t FUNC_2 (void*,size_t,struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*,size_t,size_t) ;
 scalar_t__ FUNC_9 (int) ;

size_t FUNC_10(struct page *VAR_2, size_t VAR_3, size_t VAR_4,
    struct iov_iter *VAR_5)
{
 if (FUNC_9(!FUNC_8(VAR_2, VAR_3, VAR_4)))
  return 0;
 if (VAR_5->type & (VAR_0|VAR_1)) {
  void *VAR_6 = FUNC_5(VAR_2);
  size_t VAR_7 = FUNC_2(VAR_6 + VAR_3, VAR_4, VAR_5);
  FUNC_6(VAR_6);
  return VAR_7;
 } else if (FUNC_9(FUNC_3(VAR_5)))
  return VAR_4;
 else if (FUNC_7(!FUNC_4(VAR_5)))
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
