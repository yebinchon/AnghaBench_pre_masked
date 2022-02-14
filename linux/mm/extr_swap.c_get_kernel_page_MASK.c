
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvec {void* iov_base; int iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvec const*,int,int,struct page**) ;

int FUNC_1(unsigned long VAR_1, int VAR_2, struct page **VAR_3)
{
 const struct kvec VAR_4 = {
  .iov_base = (void *)VAR_1,
  .iov_len = VAR_0
 };

 return FUNC_0(&VAR_4, 1, VAR_2, VAR_3);
}
