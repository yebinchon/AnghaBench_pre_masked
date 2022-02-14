
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int page_len; int page_base; } ;


 int VAR_0 ;
 int VAR_1 ;

size_t
FUNC_0(struct xdr_buf *VAR_2)
{
 if (!VAR_2->page_len)
  return 0;
 return (VAR_2->page_base + VAR_2->page_len + VAR_1 - 1) >> VAR_0;
}
