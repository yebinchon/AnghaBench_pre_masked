
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {unsigned int len; } ;
struct xdr_array2_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_buf*,unsigned int,struct xdr_array2_desc*,int ) ;

int
FUNC_1(struct xdr_buf *VAR_1, unsigned int VAR_2,
    struct xdr_array2_desc *VAR_3)
{
 if (VAR_2 >= VAR_1->len)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, 0);
}
