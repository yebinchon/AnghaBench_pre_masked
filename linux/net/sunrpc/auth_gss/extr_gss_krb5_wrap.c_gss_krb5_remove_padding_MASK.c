
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xdr_buf {size_t len; size_t page_len; size_t page_base; TYPE_2__* tail; int * pages; TYPE_1__* head; } ;
struct TYPE_4__ {size_t iov_len; size_t iov_base; } ;
struct TYPE_3__ {size_t iov_len; size_t iov_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static inline int
FUNC_3(struct xdr_buf *VAR_3, int VAR_4)
{
 u8 *VAR_5;
 u8 VAR_6;
 size_t VAR_7 = VAR_3->len;

 if (VAR_7 <= VAR_3->head[0].iov_len) {
  VAR_6 = *(u8 *)(VAR_3->head[0].iov_base + VAR_7 - 1);
  if (VAR_6 > VAR_3->head[0].iov_len)
   return -VAR_0;
  VAR_3->head[0].iov_len -= VAR_6;
  goto out;
 } else
  VAR_7 -= VAR_3->head[0].iov_len;
 if (VAR_7 <= VAR_3->page_len) {
  unsigned int VAR_8 = (VAR_3->page_base + VAR_7 - 1)
     >>VAR_1;
  unsigned int VAR_9 = (VAR_3->page_base + VAR_7 - 1)
     & (VAR_2 - 1);
  VAR_5 = FUNC_1(VAR_3->pages[VAR_8]);
  VAR_6 = *(VAR_5 + VAR_9);
  FUNC_2(VAR_5);
  goto out;
 } else
  VAR_7 -= VAR_3->page_len;
 FUNC_0(VAR_7 > VAR_3->tail[0].iov_len);
 VAR_6 = *(u8 *)(VAR_3->tail[0].iov_base + VAR_7 - 1);
out:
 if (VAR_6 > VAR_4)
  return -VAR_0;
 if (VAR_3->len > VAR_6)
  VAR_3->len -= VAR_6;
 else
  return -VAR_0;
 return 0;
}
