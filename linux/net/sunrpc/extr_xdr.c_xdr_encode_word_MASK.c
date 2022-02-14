
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_buf {int dummy; } ;
typedef int obj ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_buf*,unsigned int,int *,int) ;

int
FUNC_2(struct xdr_buf *VAR_0, unsigned int VAR_1, u32 VAR_2)
{
 __be32 VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_0, VAR_1, &VAR_3, sizeof(VAR_2));
}
