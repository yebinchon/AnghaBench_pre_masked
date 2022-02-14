
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int data; int len; } ;
struct kvec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvec*) ;

__attribute__((used)) static inline int
FUNC_2(struct kvec *VAR_0, struct xdr_netobj *VAR_1)
{
 int VAR_2;

 if (VAR_0->iov_len < 4)
  return -1;
 VAR_1->len = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1->len);
 if (VAR_0->iov_len < VAR_2)
  return -1;
 VAR_1->data = VAR_0->iov_base;
 VAR_0->iov_base += VAR_2;
 VAR_0->iov_len -= VAR_2;
 return 0;
}
