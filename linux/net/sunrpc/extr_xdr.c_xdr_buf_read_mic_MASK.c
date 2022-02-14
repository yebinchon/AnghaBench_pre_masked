
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_netobj {unsigned int len; scalar_t__ data; } ;
struct xdr_buf {unsigned int buflen; unsigned int len; TYPE_2__* head; TYPE_1__* tail; scalar_t__ page_len; } ;
struct TYPE_4__ {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_3__ {scalar_t__ iov_base; unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_buf*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (struct xdr_buf*,struct xdr_buf*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct xdr_buf*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct xdr_buf*,unsigned int) ;
 int FUNC_4 (struct xdr_buf*,unsigned int) ;

int FUNC_5(struct xdr_buf *VAR_2, struct xdr_netobj *VAR_3, unsigned int VAR_4)
{
 struct xdr_buf VAR_5;
 unsigned int VAR_6;

 if (FUNC_2(VAR_2, VAR_4, &VAR_3->len))
  return -VAR_0;
 VAR_4 += 4;


 VAR_6 = VAR_2->head[0].iov_len;
 if (VAR_4 < VAR_6 && (VAR_4 + VAR_3->len) > VAR_6)
  FUNC_3(VAR_2, VAR_6 - VAR_4);


 VAR_6 += VAR_2->page_len;
 if (VAR_4 < VAR_6 && (VAR_4 + VAR_3->len) > VAR_6)
  FUNC_4(VAR_2, VAR_6 - VAR_4);

 if (FUNC_1(VAR_2, &VAR_5, VAR_4, VAR_3->len))
  return -VAR_0;


 VAR_3->data = VAR_5.head[0].iov_base;
 if (VAR_5.head[0].iov_len == VAR_3->len)
  return 0;

 VAR_3->data = VAR_5.tail[0].iov_base;
 if (VAR_5.tail[0].iov_len == VAR_3->len)
  return 0;


 if (VAR_3->len > VAR_2->buflen - VAR_2->len)
  return -VAR_1;
 if (VAR_2->tail[0].iov_len != 0)
  VAR_3->data = VAR_2->tail[0].iov_base + VAR_2->tail[0].iov_len;
 else
  VAR_3->data = VAR_2->head[0].iov_base + VAR_2->head[0].iov_len;
 FUNC_0(&VAR_5, VAR_3->data, VAR_3->len);
 return 0;
}
