
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t (* xdr_skb_read_actor ) (struct xdr_skb_reader*,char*,unsigned int) ;
struct xdr_skb_reader {int count; } ;
struct xdr_buf {unsigned int page_len; int flags; TYPE_2__* tail; scalar_t__ page_base; TYPE_1__* head; struct page** pages; } ;
struct page {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_3__ {unsigned int iov_len; scalar_t__ iov_base; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t
FUNC_5(struct xdr_buf *VAR_7, unsigned int VAR_8, struct xdr_skb_reader *VAR_9, xdr_skb_read_actor VAR_10)
{
 struct page **VAR_11 = VAR_7->pages;
 unsigned int VAR_12, VAR_13 = VAR_7->page_len;
 ssize_t VAR_14 = 0;
 size_t VAR_15;

 VAR_12 = VAR_7->head[0].iov_len;
 if (VAR_8 < VAR_12) {
  VAR_12 -= VAR_8;
  VAR_15 = VAR_10(VAR_9, (char *)VAR_7->head[0].iov_base + VAR_8, VAR_12);
  VAR_14 += VAR_15;
  if (VAR_15 != VAR_12 || !VAR_9->count)
   goto out;
  VAR_8 = 0;
 } else
  VAR_8 -= VAR_12;

 if (FUNC_4(VAR_13 == 0))
  goto copy_tail;
 if (FUNC_4(VAR_8 >= VAR_13)) {
  VAR_8 -= VAR_13;
  goto copy_tail;
 }
 if (VAR_8 || VAR_7->page_base) {
  VAR_13 -= VAR_8;
  VAR_8 += VAR_7->page_base;
  VAR_11 += VAR_8 >> VAR_3;
  VAR_8 &= ~VAR_2;
 }
 do {
  char *VAR_16;



  if ((VAR_7->flags & VAR_5) && *VAR_11 == ((void*)0)) {
   *VAR_11 = FUNC_0(VAR_1 | VAR_6);
   if (FUNC_4(*VAR_11 == ((void*)0))) {
    if (VAR_14 == 0)
     VAR_14 = -VAR_0;
    goto out;
   }
  }

  VAR_12 = VAR_4;
  VAR_16 = FUNC_2(*VAR_11);
  if (VAR_8) {
   VAR_12 -= VAR_8;
   if (VAR_13 < VAR_12)
    VAR_12 = VAR_13;
   VAR_15 = VAR_10(VAR_9, VAR_16 + VAR_8, VAR_12);
   VAR_8 = 0;
  } else {
   if (VAR_13 < VAR_12)
    VAR_12 = VAR_13;
   VAR_15 = VAR_10(VAR_9, VAR_16, VAR_12);
  }
  FUNC_1(*VAR_11);
  FUNC_3(VAR_16);
  VAR_14 += VAR_15;
  if (VAR_15 != VAR_12 || !VAR_9->count)
   goto out;
  VAR_11++;
 } while ((VAR_13 -= VAR_12) != 0);
copy_tail:
 VAR_12 = VAR_7->tail[0].iov_len;
 if (VAR_8 < VAR_12)
  VAR_14 += VAR_10(VAR_9, (char *)VAR_7->tail[0].iov_base + VAR_8, VAR_12 - VAR_8);
out:
 return VAR_14;
}
