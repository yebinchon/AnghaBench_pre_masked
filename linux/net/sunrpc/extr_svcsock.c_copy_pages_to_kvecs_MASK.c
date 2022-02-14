
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static int FUNC_1(struct kvec *VAR_1, struct page **VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 while (VAR_5 < VAR_3) {
  VAR_1[VAR_4].iov_base = FUNC_0(VAR_2[VAR_4]);
  VAR_1[VAR_4].iov_len = VAR_0;
  VAR_4++;
  VAR_5 += VAR_0;
 }
 return VAR_4;
}
