
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpcrdma_mr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct rpcrdma_mr*) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int
FUNC_3(struct xdr_stream *VAR_1, struct rpcrdma_mr *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_2(VAR_1, 4 * sizeof(*VAR_3));
 if (FUNC_0(!VAR_3))
  return -VAR_0;

 FUNC_1(VAR_3, VAR_2);
 return 0;
}
