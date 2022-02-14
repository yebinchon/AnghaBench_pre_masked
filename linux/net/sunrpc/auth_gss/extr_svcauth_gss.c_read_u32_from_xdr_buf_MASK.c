
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_buf {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_buf*,int,int *,int) ;

__attribute__((used)) static inline int
FUNC_2(struct xdr_buf *VAR_0, int VAR_1, u32 *VAR_2)
{
 __be32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3, sizeof(*VAR_2));
 if (VAR_4)
  return VAR_4;
 *VAR_2 = FUNC_0(VAR_3);
 return 0;
}
