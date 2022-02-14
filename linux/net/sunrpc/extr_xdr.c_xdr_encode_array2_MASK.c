
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {unsigned long page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct xdr_array2_desc {unsigned long array_len; unsigned long elem_size; } ;
struct TYPE_4__ {unsigned long iov_len; } ;
struct TYPE_3__ {unsigned long iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_buf*,unsigned int,struct xdr_array2_desc*,int) ;

int
FUNC_1(struct xdr_buf *VAR_1, unsigned int VAR_2,
    struct xdr_array2_desc *VAR_3)
{
 if ((unsigned long) VAR_2 + 4 + VAR_3->array_len * VAR_3->elem_size >
     VAR_1->head->iov_len + VAR_1->page_len + VAR_1->tail->iov_len)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, 1);
}
