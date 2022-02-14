
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_task {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (struct xdr_stream*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct rpc_task *VAR_3, struct xdr_stream *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_0(VAR_4, 2 * sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;
 if (*VAR_5++ != VAR_1)
  return -VAR_0;
 if (*VAR_5 != VAR_2)
  return -VAR_0;
 return 0;
}
