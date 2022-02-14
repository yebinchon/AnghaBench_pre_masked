
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_netobj {int len; int data; } ;
struct kvec {scalar_t__ iov_len; int * iov_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kvec*,int) ;

__attribute__((used)) static inline int
FUNC_4(struct kvec *VAR_1, struct xdr_netobj *VAR_2)
{
 u8 *VAR_3;

 if (VAR_1->iov_len + 4 > VAR_0)
  return -1;
 FUNC_3(VAR_1, VAR_2->len);
 VAR_3 = VAR_1->iov_base + VAR_1->iov_len;
 VAR_1->iov_len += FUNC_2(VAR_2->len);
 if (VAR_1->iov_len > VAR_0)
  return -1;
 FUNC_0(VAR_3, VAR_2->data, VAR_2->len);
 FUNC_1(VAR_3 + VAR_2->len, 0, FUNC_2(VAR_2->len) - VAR_2->len);
 return 0;
}
