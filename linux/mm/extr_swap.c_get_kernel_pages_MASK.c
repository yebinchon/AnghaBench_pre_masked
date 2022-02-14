
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;

int FUNC_3(const struct kvec *VAR_1, int VAR_2, int VAR_3,
  struct page **VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_0(VAR_1[VAR_5].iov_len != VAR_0))
   return VAR_5;

  VAR_4[VAR_5] = FUNC_2(VAR_1[VAR_5].iov_base);
  FUNC_1(VAR_4[VAR_5]);
 }

 return VAR_5;
}
