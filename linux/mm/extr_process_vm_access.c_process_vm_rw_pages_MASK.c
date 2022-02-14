
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_0 (struct page*,unsigned int,size_t,struct iov_iter*) ;
 size_t FUNC_1 (struct page*,unsigned int,size_t,struct iov_iter*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page **VAR_2,
          unsigned VAR_3,
          size_t VAR_4,
          struct iov_iter *VAR_5,
          int VAR_6)
{

 while (VAR_4 && FUNC_2(VAR_5)) {
  struct page *VAR_7 = *VAR_2++;
  size_t VAR_8 = VAR_1 - VAR_3;
  size_t VAR_9;

  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;

  if (VAR_6) {
   VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_8, VAR_5);
   FUNC_3(VAR_7);
  } else {
   VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_8, VAR_5);
  }
  VAR_4 -= VAR_9;
  if (VAR_9 < VAR_8 && FUNC_2(VAR_5))
   return -VAR_0;
  VAR_3 = 0;
 }
 return 0;
}
