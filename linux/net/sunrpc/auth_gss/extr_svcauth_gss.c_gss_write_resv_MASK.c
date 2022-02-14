
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int dummy; } ;
struct kvec {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvec*,int) ;
 scalar_t__ FUNC_1 (struct kvec*,struct xdr_netobj*) ;

__attribute__((used)) static inline int
FUNC_2(struct kvec *VAR_2, size_t VAR_3,
        struct xdr_netobj *VAR_4, struct xdr_netobj *VAR_5,
        int VAR_6, int VAR_7)
{
 if (VAR_2->iov_len + 4 > VAR_3)
  return -1;
 FUNC_0(VAR_2, VAR_1);
 if (FUNC_1(VAR_2, VAR_4))
  return -1;
 if (VAR_2->iov_len + 3 * 4 > VAR_3)
  return -1;
 FUNC_0(VAR_2, VAR_6);
 FUNC_0(VAR_2, VAR_7);
 FUNC_0(VAR_2, VAR_0);
 if (FUNC_1(VAR_2, VAR_5))
  return -1;
 return 0;
}
