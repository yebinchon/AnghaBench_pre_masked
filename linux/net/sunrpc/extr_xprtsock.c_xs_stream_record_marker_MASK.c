
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_buf {scalar_t__ len; } ;
typedef int rpc_fraghdr ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static rpc_fraghdr
FUNC_1(struct xdr_buf *VAR_1)
{
 if (!VAR_1->len)
  return 0;
 return FUNC_0(VAR_0 | (u32)VAR_1->len);
}
