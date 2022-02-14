
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpcrdma_mr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct rpcrdma_mr*) ;
 int VAR_1 ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int
FUNC_4(struct xdr_stream *VAR_2, struct rpcrdma_mr *VAR_3,
      u32 VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_2, 6 * sizeof(*VAR_5));
 if (FUNC_1(!VAR_5))
  return -VAR_0;

 *VAR_5++ = VAR_1;
 *VAR_5++ = FUNC_0(VAR_4);
 FUNC_2(VAR_5, VAR_3);
 return 0;
}
