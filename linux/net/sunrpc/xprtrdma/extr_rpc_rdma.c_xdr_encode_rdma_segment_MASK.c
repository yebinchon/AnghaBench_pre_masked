
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_mr {int mr_offset; int mr_length; int mr_handle; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(__be32 *VAR_0, struct rpcrdma_mr *VAR_1)
{
 *VAR_0++ = FUNC_0(VAR_1->mr_handle);
 *VAR_0++ = FUNC_0(VAR_1->mr_length);
 FUNC_1(VAR_0, VAR_1->mr_offset);
}
