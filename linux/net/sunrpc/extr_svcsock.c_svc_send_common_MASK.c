
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {size_t page_base; unsigned int page_len; int len; TYPE_2__* tail; TYPE_1__* head; struct page** pages; } ;
struct socket {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int iov_len; } ;
struct TYPE_3__ {int iov_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct socket*,struct page*,unsigned long,int,unsigned int) ;

int FUNC_1(struct socket *VAR_3, struct xdr_buf *VAR_4,
      struct page *VAR_5, unsigned long VAR_6,
      struct page *VAR_7, unsigned long VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct page **VAR_11 = VAR_4->pages;
 size_t VAR_12 = VAR_4->page_base;
 unsigned int VAR_13 = VAR_4->page_len;
 unsigned int VAR_14 = VAR_0 | VAR_1;
 int VAR_15;
 int VAR_16 = 0;

 VAR_15 = VAR_4->len;


 if (VAR_15 == VAR_4->head[0].iov_len)
  VAR_14 = 0;
 VAR_16 = FUNC_0(VAR_3, VAR_5, VAR_6,
      VAR_4->head[0].iov_len, VAR_14);
 if (VAR_16 != VAR_4->head[0].iov_len)
  goto out;
 VAR_15 -= VAR_4->head[0].iov_len;
 if (VAR_15 == 0)
  goto out;


 VAR_10 = VAR_2 - VAR_12 < VAR_13 ? VAR_2 - VAR_12 : VAR_13;
 while (VAR_13 > 0) {
  if (VAR_15 == VAR_10)
   VAR_14 = 0;
  VAR_9 = FUNC_0(VAR_3, *VAR_11, VAR_12, VAR_10, VAR_14);
  if (VAR_9 > 0)
   VAR_16 += VAR_9;
  if (VAR_9 != VAR_10)
   goto out;
  VAR_15 -= VAR_10;
  VAR_13 -= VAR_10;
  VAR_10 = VAR_2 < VAR_13 ? VAR_2 : VAR_13;
  VAR_12 = 0;
  VAR_11++;
 }


 if (VAR_4->tail[0].iov_len) {
  VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_8,
       VAR_4->tail[0].iov_len, 0);
  if (VAR_9 > 0)
   VAR_16 += VAR_9;
 }

out:
 return VAR_16;
}
